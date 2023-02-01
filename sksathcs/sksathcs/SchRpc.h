#pragma warning( disable: 4049 )
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __SchRpc_h__
#define __SchRpc_h__
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif
#include "ms-dtyp.h"
#ifdef __cplusplus
extern "C"{
#endif
#ifndef __ITaskSchedulerService_INTERFACE_DEFINED__
#define __ITaskSchedulerService_INTERFACE_DEFINED__
    enum credFlag {
        credFlagDefault = 0x1
    };

    typedef struct _TASK_USER_CRED {
        const wchar_t* userId;
        const wchar_t* password;
        DWORD flags;
    } TASK_USER_CRED;

    typedef struct _TASK_XML_ERROR_INFO {
        DWORD line;
        DWORD column;
        wchar_t* node;
        wchar_t* value;
    } TASK_XML_ERROR_INFO;

    typedef struct _TASK_XML_ERROR_INFO* PTASK_XML_ERROR_INFO;
    typedef  wchar_t** TASK_NAMES;

    HRESULT SchRpcHighestVersion(handle_t IDL_handle, DWORD* pVersion);

    HRESULT SchRpcRegisterTask(
        handle_t IDL_handle,
        const wchar_t* path,
        const wchar_t* xml,
        DWORD flags,
        const wchar_t* sddl,
        DWORD logonType,
        DWORD cCreds,
        const TASK_USER_CRED* pCreds,
        wchar_t** pActualPath,
        PTASK_XML_ERROR_INFO* pErrorInfo);

    HRESULT SchRpcRetrieveTask(
        handle_t IDL_handle,
        const wchar_t* path,
        const wchar_t* lpcwszLanguagesBuffer,
        unsigned long* pulNumLanguages,
        wchar_t** pXml);

    HRESULT SchRpcCreateFolder(
        handle_t IDL_handle,
        const wchar_t* path,
        const wchar_t* sddl,
        DWORD flags);

    HRESULT SchRpcSetSecurity(
        handle_t IDL_handle,
        const wchar_t* path,
        const wchar_t* sddl,
        DWORD flags);

    HRESULT SchRpcGetSecurity(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD securityInformation,
        wchar_t** sddl);

    HRESULT SchRpcEnumFolders(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags,
        DWORD* pStartIndex,
        DWORD cRequested,
        DWORD* pcNames,
        TASK_NAMES* pNames);

    HRESULT SchRpcEnumTasks(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags,
        DWORD* startIndex,
        DWORD cRequested,
        DWORD* pcNames,
        TASK_NAMES* pNames);

    HRESULT SchRpcEnumInstances(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags,
        DWORD* pcGuids,
        GUID** pGuids);

    HRESULT SchRpcGetInstanceInfo(
        handle_t IDL_handle,
        GUID guid,
        wchar_t** pPath,
        DWORD* pState,
        wchar_t** pCurrentAction,
        wchar_t** pInfo,
        DWORD* pcGroupInstances,
        GUID** pGroupInstances,
        DWORD* pEnginePID);

    HRESULT SchRpcStopInstance(
        handle_t IDL_handle,
        GUID guid,
        DWORD flags);

    HRESULT SchRpcStop(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags);

    HRESULT SchRpcRun(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD cArgs,
        const wchar_t** pArgs,
        DWORD flags,
        DWORD sessionId,
        const wchar_t* user,
        GUID* pGuid);

    HRESULT SchRpcDelete(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags);

    HRESULT SchRpcRename(
        handle_t IDL_handle,
        const wchar_t* path,
        const wchar_t* newName,
        DWORD flags);

    HRESULT SchRpcScheduledRuntimes(
        handle_t IDL_handle,
        const wchar_t* path,
        PSYSTEMTIME start,
        PSYSTEMTIME end,
        DWORD flags,
        DWORD cRequested,
        DWORD* pcRuntimes,
        PSYSTEMTIME* pRuntimes);

    HRESULT SchRpcGetLastRunInfo(
        handle_t IDL_handle,
        const wchar_t* path,
        PSYSTEMTIME pLastRuntime,
        DWORD* pLastReturnCode);

    HRESULT SchRpcGetTaskInfo(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD flags,
        DWORD* pEnabled,
        DWORD* pState);

    HRESULT SchRpcGetNumberOfMissedRuns(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD* pNumberOfMissedRuns);

    HRESULT SchRpcEnableTask(
        handle_t IDL_handle,
        const wchar_t* path,
        DWORD enabled);

extern RPC_IF_HANDLE ITaskSchedulerService_v1_0_c_ifspec;
extern RPC_IF_HANDLE ITaskSchedulerService_v1_0_s_ifspec;
#endif
#ifdef __cplusplus
}
#endif
#endif