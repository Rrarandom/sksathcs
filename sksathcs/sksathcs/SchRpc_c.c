#if defined(_M_AMD64)

#pragma warning( disable: 4049 )
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )
#pragma warning( disable: 4232 )
#pragma warning( disable: 4024 )
#pragma warning( disable: 4100 )

#pragma optimize( "", off ) 

#include <string.h>
#include "SchRpc.h"

#define TYPE_FORMAT_STRING_SIZE   295                               
#define PROC_FORMAT_STRING_SIZE   1207                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SchRpc_MIDL_TYPE_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
} SchRpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _SchRpc_MIDL_PROC_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[PROC_FORMAT_STRING_SIZE];
} SchRpc_MIDL_PROC_FORMAT_STRING;

typedef struct _SchRpc_MIDL_EXPR_FORMAT_STRING
{
    long          Pad;
    unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
} SchRpc_MIDL_EXPR_FORMAT_STRING;

static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
{ {0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0} };

extern const SchRpc_MIDL_TYPE_FORMAT_STRING SchRpc__MIDL_TypeFormatString;
extern const SchRpc_MIDL_PROC_FORMAT_STRING SchRpc__MIDL_ProcFormatString;
extern const SchRpc_MIDL_EXPR_FORMAT_STRING SchRpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            

static const RPC_CLIENT_INTERFACE ITaskSchedulerService___RpcClientInterface = { sizeof(RPC_CLIENT_INTERFACE),{{0x86D35949,0x83C9,0x4044,{0xB4,0x24,0xDB,0x36,0x32,0x31,0xFD,0x0C}},{1,0}},{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},0,0,0,0,0,0x00000000 };

RPC_IF_HANDLE ITaskSchedulerService_v1_0_c_ifspec = (RPC_IF_HANDLE)& ITaskSchedulerService___RpcClientInterface;
extern const MIDL_STUB_DESC ITaskSchedulerService_StubDesc;
static RPC_BINDING_HANDLE ITaskSchedulerService__MIDL_AutoBindHandle;

HRESULT SchRpcHighestVersion(handle_t IDL_handle, DWORD* pVersion) {
    CLIENT_CALL_RETURN _RetVal;
    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
        (PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[0],
        IDL_handle,
        pVersion);
    return (HRESULT)_RetVal.Simple;
}

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
	PTASK_XML_ERROR_INFO* pErrorInfo) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[42],
		IDL_handle,
		path,
		xml,
		flags,
		sddl,
		logonType,
		cCreds,
		pCreds,
		pActualPath,
		pErrorInfo);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcRetrieveTask(
	handle_t IDL_handle,
	const wchar_t* path,
	const wchar_t* lpcwszLanguagesBuffer,
	unsigned long* pulNumLanguages,
	wchar_t** pXml) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[132],
		IDL_handle,
		path,
		lpcwszLanguagesBuffer,
		pulNumLanguages,
		pXml);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcCreateFolder(
	handle_t IDL_handle,
	const wchar_t* path,
	const wchar_t* sddl,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[192],
		IDL_handle,
		path,
		sddl,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcSetSecurity(
	handle_t IDL_handle,
	const wchar_t* path,
	const wchar_t* sddl,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[246],
		IDL_handle,
		path,
		sddl,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcGetSecurity(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD securityInformation,
	wchar_t** sddl) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[300],
		IDL_handle,
		path,
		securityInformation,
		sddl);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcEnumFolders(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags,
	DWORD* pStartIndex,
	DWORD cRequested,
	DWORD* pcNames,
	TASK_NAMES* pNames) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[354],
		IDL_handle,
		path,
		flags,
		pStartIndex,
		cRequested,
		pcNames,
		pNames);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcEnumTasks(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags,
	DWORD* startIndex,
	DWORD cRequested,
	DWORD* pcNames,
	TASK_NAMES* pNames) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[426],
		IDL_handle,
		path,
		flags,
		startIndex,
		cRequested,
		pcNames,
		pNames);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcEnumInstances(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags,
	DWORD* pcGuids,
	GUID** pGuids) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[498],
		IDL_handle,
		path,
		flags,
		pcGuids,
		pGuids);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcGetInstanceInfo(
	handle_t IDL_handle,
	GUID guid,
	wchar_t** pPath,
	DWORD* pState,
	wchar_t** pCurrentAction,
	wchar_t** pInfo,
	DWORD* pcGroupInstances,
	GUID** pGroupInstances,
	DWORD* pEnginePID) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[558],
		IDL_handle,
		guid,
		pPath,
		pState,
		pCurrentAction,
		pInfo,
		pcGroupInstances,
		pGroupInstances,
		pEnginePID);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcStopInstance(
	handle_t IDL_handle,
	GUID guid,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[642],
		IDL_handle,
		guid,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcStop(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[690],
		IDL_handle,
		path,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcRun(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD cArgs,
	const wchar_t** pArgs,
	DWORD flags,
	DWORD sessionId,
	const wchar_t* user,
	GUID* pGuid) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[738],
		IDL_handle,
		path,
		cArgs,
		pArgs,
		flags,
		sessionId,
		user,
		pGuid);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcDelete(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[816],
		IDL_handle,
		path,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcRename(
	handle_t IDL_handle,
	const wchar_t* path,
	const wchar_t* newName,
	DWORD flags) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[864],
		IDL_handle,
		path,
		newName,
		flags);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcScheduledRuntimes(
	handle_t IDL_handle,
	const wchar_t* path,
	PSYSTEMTIME start,
	PSYSTEMTIME end,
	DWORD flags,
	DWORD cRequested,
	DWORD* pcRuntimes,
	PSYSTEMTIME* pRuntimes) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[918],
		IDL_handle,
		path,
		start,
		end,
		flags,
		cRequested,
		pcRuntimes,
		pRuntimes);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcGetLastRunInfo(
	handle_t IDL_handle,
	const wchar_t* path,
	PSYSTEMTIME pLastRuntime,
	DWORD* pLastReturnCode) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[996],
		IDL_handle,
		path,
		pLastRuntime,
		pLastReturnCode);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcGetTaskInfo(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD flags,
	DWORD* pEnabled,
	DWORD* pState) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[1050],
		IDL_handle,
		path,
		flags,
		pEnabled,
		pState);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcGetNumberOfMissedRuns(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD* pNumberOfMissedRuns) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[1110],
		IDL_handle,
		path,
		pNumberOfMissedRuns);
	return (HRESULT)_RetVal.Simple;
}

HRESULT SchRpcEnableTask(
	handle_t IDL_handle,
	const wchar_t* path,
	DWORD enabled) {
	CLIENT_CALL_RETURN _RetVal;
	_RetVal = NdrClientCall2(
		(PMIDL_STUB_DESC)&ITaskSchedulerService_StubDesc,
		(PFORMAT_STRING)&SchRpc__MIDL_ProcFormatString.Format[1158],
		IDL_handle,
		path,
		enabled);
	return (HRESULT)_RetVal.Simple;
}

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif

static const SchRpc_MIDL_PROC_FORMAT_STRING SchRpc__MIDL_ProcFormatString =
{
	0,
	{

		/* Procedure SchRpcHighestVersion */

				0x0,		/* 0 */
				0x48,		/* Old Flags:  */
				/*  2 */	NdrFcLong(0x0),	/* 0 */
				/*  6 */	NdrFcShort(0x0),	/* 0 */
				/*  8 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
				/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
							0x0,		/* 0 */
							/* 12 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
							/* 14 */	NdrFcShort(0x0),	/* 0 */
							/* 16 */	NdrFcShort(0x24),	/* 36 */
							/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
										0x2,		/* 2 */
										/* 20 */	0xa,		/* 10 */
													0x1,		/* Ext Flags:  new corr desc, */
													/* 22 */	NdrFcShort(0x0),	/* 0 */
													/* 24 */	NdrFcShort(0x0),	/* 0 */
													/* 26 */	NdrFcShort(0x0),	/* 0 */
													/* 28 */	NdrFcShort(0x0),	/* 0 */

														/* Parameter pVersion */

														/* 30 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
														/* 32 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
														/* 34 */	0x8,		/* FC_LONG */
																	0x0,		/* 0 */

															/* Return value */

															/* 36 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
															/* 38 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
															/* 40 */	0x8,		/* FC_LONG */
																		0x0,		/* 0 */

																/* Procedure SchRpcRegisterTask */

																/* 42 */	0x0,		/* 0 */
																			0x48,		/* Old Flags:  */
																			/* 44 */	NdrFcLong(0x0),	/* 0 */
																			/* 48 */	NdrFcShort(0x1),	/* 1 */
																			/* 50 */	NdrFcShort(0x58),	/* x86 Stack size/offset = 88 */
																			/* 52 */	0x32,		/* FC_BIND_PRIMITIVE */
																						0x0,		/* 0 */
																						/* 54 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																						/* 56 */	NdrFcShort(0x18),	/* 24 */
																						/* 58 */	NdrFcShort(0x8),	/* 8 */
																						/* 60 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																									0xa,		/* 10 */
																									/* 62 */	0xa,		/* 10 */
																												0x5,		/* Ext Flags:  new corr desc, srv corr check, */
																												/* 64 */	NdrFcShort(0x0),	/* 0 */
																												/* 66 */	NdrFcShort(0x1),	/* 1 */
																												/* 68 */	NdrFcShort(0x0),	/* 0 */
																												/* 70 */	NdrFcShort(0x0),	/* 0 */

																													/* Parameter path */

																													/* 72 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																													/* 74 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																													/* 76 */	NdrFcShort(0x6),	/* Type Offset=6 */

																														/* Parameter xml */

																														/* 78 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																														/* 80 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																														/* 82 */	NdrFcShort(0xc),	/* Type Offset=12 */

																															/* Parameter flags */

																															/* 84 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																															/* 86 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																															/* 88 */	0x8,		/* FC_LONG */
																																		0x0,		/* 0 */

																																/* Parameter sddl */

																																/* 90 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																/* 92 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																/* 94 */	NdrFcShort(0x6),	/* Type Offset=6 */

																																	/* Parameter logonType */

																																	/* 96 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																	/* 98 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																	/* 100 */	0x8,		/* FC_LONG */
																																				0x0,		/* 0 */

																																		/* Parameter cCreds */

																																		/* 102 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																		/* 104 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																		/* 106 */	0x8,		/* FC_LONG */
																																					0x0,		/* 0 */

																																			/* Parameter pCreds */

																																			/* 108 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																			/* 110 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																			/* 112 */	NdrFcShort(0xe),	/* Type Offset=14 */

																																				/* Parameter pActualPath */

																																				/* 114 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																				/* 116 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																				/* 118 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																					/* Parameter pErrorInfo */

																																					/* 120 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																					/* 122 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
																																					/* 124 */	NdrFcShort(0x42),	/* Type Offset=66 */

																																						/* Return value */

																																						/* 126 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																						/* 128 */	NdrFcShort(0x50),	/* x86 Stack size/offset = 80 */
																																						/* 130 */	0x8,		/* FC_LONG */
																																									0x0,		/* 0 */

																																							/* Procedure SchRpcRetrieveTask */

																																							/* 132 */	0x0,		/* 0 */
																																										0x48,		/* Old Flags:  */
																																										/* 134 */	NdrFcLong(0x0),	/* 0 */
																																										/* 138 */	NdrFcShort(0x2),	/* 2 */
																																										/* 140 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																										/* 142 */	0x32,		/* FC_BIND_PRIMITIVE */
																																													0x0,		/* 0 */
																																													/* 144 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																													/* 146 */	NdrFcShort(0x1c),	/* 28 */
																																													/* 148 */	NdrFcShort(0x8),	/* 8 */
																																													/* 150 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																0x5,		/* 5 */
																																																/* 152 */	0xa,		/* 10 */
																																																			0x1,		/* Ext Flags:  new corr desc, */
																																																			/* 154 */	NdrFcShort(0x0),	/* 0 */
																																																			/* 156 */	NdrFcShort(0x0),	/* 0 */
																																																			/* 158 */	NdrFcShort(0x0),	/* 0 */
																																																			/* 160 */	NdrFcShort(0x0),	/* 0 */

																																																				/* Parameter path */

																																																				/* 162 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																				/* 164 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																				/* 166 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																					/* Parameter lpcwszLanguagesBuffer */

																																																					/* 168 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																					/* 170 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																					/* 172 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																						/* Parameter pulNumLanguages */

																																																						/* 174 */	NdrFcShort(0x148),	/* Flags:  in, base type, simple ref, */
																																																						/* 176 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																						/* 178 */	0x8,		/* FC_LONG */
																																																									0x0,		/* 0 */

																																																							/* Parameter pXml */

																																																							/* 180 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																							/* 182 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																							/* 184 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																																								/* Return value */

																																																								/* 186 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																								/* 188 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																								/* 190 */	0x8,		/* FC_LONG */
																																																											0x0,		/* 0 */

																																																									/* Procedure SchRpcCreateFolder */

																																																									/* 192 */	0x0,		/* 0 */
																																																												0x48,		/* Old Flags:  */
																																																												/* 194 */	NdrFcLong(0x0),	/* 0 */
																																																												/* 198 */	NdrFcShort(0x3),	/* 3 */
																																																												/* 200 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																												/* 202 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																															0x0,		/* 0 */
																																																															/* 204 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																															/* 206 */	NdrFcShort(0x8),	/* 8 */
																																																															/* 208 */	NdrFcShort(0x8),	/* 8 */
																																																															/* 210 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																		0x4,		/* 4 */
																																																																		/* 212 */	0xa,		/* 10 */
																																																																					0x1,		/* Ext Flags:  new corr desc, */
																																																																					/* 214 */	NdrFcShort(0x0),	/* 0 */
																																																																					/* 216 */	NdrFcShort(0x0),	/* 0 */
																																																																					/* 218 */	NdrFcShort(0x0),	/* 0 */
																																																																					/* 220 */	NdrFcShort(0x0),	/* 0 */

																																																																						/* Parameter path */

																																																																						/* 222 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																						/* 224 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																						/* 226 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																							/* Parameter sddl */

																																																																							/* 228 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																							/* 230 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																							/* 232 */	NdrFcShort(0x6),	/* Type Offset=6 */

																																																																								/* Parameter flags */

																																																																								/* 234 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																								/* 236 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																								/* 238 */	0x8,		/* FC_LONG */
																																																																											0x0,		/* 0 */

																																																																									/* Return value */

																																																																									/* 240 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																									/* 242 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																									/* 244 */	0x8,		/* FC_LONG */
																																																																												0x0,		/* 0 */

																																																																										/* Procedure SchRpcSetSecurity */

																																																																										/* 246 */	0x0,		/* 0 */
																																																																													0x48,		/* Old Flags:  */
																																																																													/* 248 */	NdrFcLong(0x0),	/* 0 */
																																																																													/* 252 */	NdrFcShort(0x4),	/* 4 */
																																																																													/* 254 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																													/* 256 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																0x0,		/* 0 */
																																																																																/* 258 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																/* 260 */	NdrFcShort(0x8),	/* 8 */
																																																																																/* 262 */	NdrFcShort(0x8),	/* 8 */
																																																																																/* 264 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																			0x4,		/* 4 */
																																																																																			/* 266 */	0xa,		/* 10 */
																																																																																						0x1,		/* Ext Flags:  new corr desc, */
																																																																																						/* 268 */	NdrFcShort(0x0),	/* 0 */
																																																																																						/* 270 */	NdrFcShort(0x0),	/* 0 */
																																																																																						/* 272 */	NdrFcShort(0x0),	/* 0 */
																																																																																						/* 274 */	NdrFcShort(0x0),	/* 0 */

																																																																																							/* Parameter path */

																																																																																							/* 276 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																							/* 278 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																							/* 280 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																								/* Parameter sddl */

																																																																																								/* 282 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																								/* 284 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																								/* 286 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																									/* Parameter flags */

																																																																																									/* 288 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																									/* 290 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																									/* 292 */	0x8,		/* FC_LONG */
																																																																																												0x0,		/* 0 */

																																																																																										/* Return value */

																																																																																										/* 294 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																										/* 296 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																										/* 298 */	0x8,		/* FC_LONG */
																																																																																													0x0,		/* 0 */

																																																																																											/* Procedure SchRpcGetSecurity */

																																																																																											/* 300 */	0x0,		/* 0 */
																																																																																														0x48,		/* Old Flags:  */
																																																																																														/* 302 */	NdrFcLong(0x0),	/* 0 */
																																																																																														/* 306 */	NdrFcShort(0x5),	/* 5 */
																																																																																														/* 308 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																														/* 310 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																	0x0,		/* 0 */
																																																																																																	/* 312 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																	/* 314 */	NdrFcShort(0x8),	/* 8 */
																																																																																																	/* 316 */	NdrFcShort(0x8),	/* 8 */
																																																																																																	/* 318 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																				0x4,		/* 4 */
																																																																																																				/* 320 */	0xa,		/* 10 */
																																																																																																							0x1,		/* Ext Flags:  new corr desc, */
																																																																																																							/* 322 */	NdrFcShort(0x0),	/* 0 */
																																																																																																							/* 324 */	NdrFcShort(0x0),	/* 0 */
																																																																																																							/* 326 */	NdrFcShort(0x0),	/* 0 */
																																																																																																							/* 328 */	NdrFcShort(0x0),	/* 0 */

																																																																																																								/* Parameter path */

																																																																																																								/* 330 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																								/* 332 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																								/* 334 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																									/* Parameter securityInformation */

																																																																																																									/* 336 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																									/* 338 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																									/* 340 */	0x8,		/* FC_LONG */
																																																																																																												0x0,		/* 0 */

																																																																																																										/* Parameter sddl */

																																																																																																										/* 342 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																										/* 344 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																										/* 346 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																																																																																											/* Return value */

																																																																																																											/* 348 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																											/* 350 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																											/* 352 */	0x8,		/* FC_LONG */
																																																																																																														0x0,		/* 0 */

																																																																																																												/* Procedure SchRpcEnumFolders */

																																																																																																												/* 354 */	0x0,		/* 0 */
																																																																																																															0x48,		/* Old Flags:  */
																																																																																																															/* 356 */	NdrFcLong(0x0),	/* 0 */
																																																																																																															/* 360 */	NdrFcShort(0x6),	/* 6 */
																																																																																																															/* 362 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																															/* 364 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																		0x0,		/* 0 */
																																																																																																																		/* 366 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																		/* 368 */	NdrFcShort(0x2c),	/* 44 */
																																																																																																																		/* 370 */	NdrFcShort(0x40),	/* 64 */
																																																																																																																		/* 372 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																					0x7,		/* 7 */
																																																																																																																					/* 374 */	0xa,		/* 10 */
																																																																																																																								0x3,		/* Ext Flags:  new corr desc, clt corr check, */
																																																																																																																								/* 376 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																								/* 378 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																								/* 380 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																								/* 382 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																									/* Parameter path */

																																																																																																																									/* 384 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																									/* 386 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																									/* 388 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																										/* Parameter flags */

																																																																																																																										/* 390 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																										/* 392 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																										/* 394 */	0x8,		/* FC_LONG */
																																																																																																																													0x0,		/* 0 */

																																																																																																																											/* Parameter pStartIndex */

																																																																																																																											/* 396 */	NdrFcShort(0x158),	/* Flags:  in, out, base type, simple ref, */
																																																																																																																											/* 398 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																											/* 400 */	0x8,		/* FC_LONG */
																																																																																																																														0x0,		/* 0 */

																																																																																																																												/* Parameter cRequested */

																																																																																																																												/* 402 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																												/* 404 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																												/* 406 */	0x8,		/* FC_LONG */
																																																																																																																															0x0,		/* 0 */

																																																																																																																													/* Parameter pcNames */

																																																																																																																													/* 408 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																													/* 410 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																													/* 412 */	0x8,		/* FC_LONG */
																																																																																																																																0x0,		/* 0 */

																																																																																																																														/* Parameter pNames */

																																																																																																																														/* 414 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																														/* 416 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																														/* 418 */	NdrFcShort(0x64),	/* Type Offset=100 */

																																																																																																																															/* Return value */

																																																																																																																															/* 420 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																															/* 422 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																															/* 424 */	0x8,		/* FC_LONG */
																																																																																																																																		0x0,		/* 0 */

																																																																																																																																/* Procedure SchRpcEnumTasks */

																																																																																																																																/* 426 */	0x0,		/* 0 */
																																																																																																																																			0x48,		/* Old Flags:  */
																																																																																																																																			/* 428 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																			/* 432 */	NdrFcShort(0x7),	/* 7 */
																																																																																																																																			/* 434 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																			/* 436 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																						0x0,		/* 0 */
																																																																																																																																						/* 438 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																						/* 440 */	NdrFcShort(0x2c),	/* 44 */
																																																																																																																																						/* 442 */	NdrFcShort(0x40),	/* 64 */
																																																																																																																																						/* 444 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																																									0x7,		/* 7 */
																																																																																																																																									/* 446 */	0xa,		/* 10 */
																																																																																																																																												0x3,		/* Ext Flags:  new corr desc, clt corr check, */
																																																																																																																																												/* 448 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																												/* 450 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																												/* 452 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																												/* 454 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																													/* Parameter path */

																																																																																																																																													/* 456 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																													/* 458 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																													/* 460 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																														/* Parameter flags */

																																																																																																																																														/* 462 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																														/* 464 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																														/* 466 */	0x8,		/* FC_LONG */
																																																																																																																																																	0x0,		/* 0 */

																																																																																																																																															/* Parameter startIndex */

																																																																																																																																															/* 468 */	NdrFcShort(0x158),	/* Flags:  in, out, base type, simple ref, */
																																																																																																																																															/* 470 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																															/* 472 */	0x8,		/* FC_LONG */
																																																																																																																																																		0x0,		/* 0 */

																																																																																																																																																/* Parameter cRequested */

																																																																																																																																																/* 474 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																/* 476 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																/* 478 */	0x8,		/* FC_LONG */
																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																	/* Parameter pcNames */

																																																																																																																																																	/* 480 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																	/* 482 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																	/* 484 */	0x8,		/* FC_LONG */
																																																																																																																																																				0x0,		/* 0 */

																																																																																																																																																		/* Parameter pNames */

																																																																																																																																																		/* 486 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																		/* 488 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																		/* 490 */	NdrFcShort(0x64),	/* Type Offset=100 */

																																																																																																																																																			/* Return value */

																																																																																																																																																			/* 492 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																			/* 494 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																			/* 496 */	0x8,		/* FC_LONG */
																																																																																																																																																						0x0,		/* 0 */

																																																																																																																																																				/* Procedure SchRpcEnumInstances */

																																																																																																																																																				/* 498 */	0x0,		/* 0 */
																																																																																																																																																							0x48,		/* Old Flags:  */
																																																																																																																																																							/* 500 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																							/* 504 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																							/* 506 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																							/* 508 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																										0x0,		/* 0 */
																																																																																																																																																										/* 510 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																										/* 512 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																										/* 514 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																										/* 516 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																																																													0x5,		/* 5 */
																																																																																																																																																													/* 518 */	0xa,		/* 10 */
																																																																																																																																																																0x3,		/* Ext Flags:  new corr desc, clt corr check, */
																																																																																																																																																																/* 520 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																/* 522 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																/* 524 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																/* 526 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																	/* Parameter path */

																																																																																																																																																																	/* 528 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																	/* 530 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																	/* 532 */	NdrFcShort(0x6),	/* Type Offset=6 */

																																																																																																																																																																		/* Parameter flags */

																																																																																																																																																																		/* 534 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																		/* 536 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																		/* 538 */	0x8,		/* FC_LONG */
																																																																																																																																																																					0x0,		/* 0 */

																																																																																																																																																																			/* Parameter pcGuids */

																																																																																																																																																																			/* 540 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																			/* 542 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																			/* 544 */	0x8,		/* FC_LONG */
																																																																																																																																																																						0x0,		/* 0 */

																																																																																																																																																																				/* Parameter pGuids */

																																																																																																																																																																				/* 546 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																				/* 548 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																				/* 550 */	NdrFcShort(0x82),	/* Type Offset=130 */

																																																																																																																																																																					/* Return value */

																																																																																																																																																																					/* 552 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																					/* 554 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																					/* 556 */	0x8,		/* FC_LONG */
																																																																																																																																																																								0x0,		/* 0 */

																																																																																																																																																																						/* Procedure SchRpcGetInstanceInfo */

																																																																																																																																																																						/* 558 */	0x0,		/* 0 */
																																																																																																																																																																									0x48,		/* Old Flags:  */
																																																																																																																																																																									/* 560 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																									/* 564 */	NdrFcShort(0x9),	/* 9 */
																																																																																																																																																																									/* 566 */	NdrFcShort(0x50),	/* x86 Stack size/offset = 80 */
																																																																																																																																																																									/* 568 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																												0x0,		/* 0 */
																																																																																																																																																																												/* 570 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																												/* 572 */	NdrFcShort(0x44),	/* 68 */
																																																																																																																																																																												/* 574 */	NdrFcShort(0x5c),	/* 92 */
																																																																																																																																																																												/* 576 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
																																																																																																																																																																															0x9,		/* 9 */
																																																																																																																																																																															/* 578 */	0xa,		/* 10 */
																																																																																																																																																																																		0x83,		/* Ext Flags:  new corr desc, clt corr check, has big byval param */
																																																																																																																																																																																		/* 580 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																		/* 582 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																		/* 584 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																		/* 586 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																			/* Parameter guid */

																																																																																																																																																																																			/* 588 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																			/* 590 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																			/* 592 */	NdrFcShort(0x90),	/* Type Offset=144 */

																																																																																																																																																																																				/* Parameter pPath */

																																																																																																																																																																																				/* 594 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																																				/* 596 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																				/* 598 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																																																																																																																																																																					/* Parameter pState */

																																																																																																																																																																																					/* 600 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																					/* 602 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																					/* 604 */	0x8,		/* FC_LONG */
																																																																																																																																																																																								0x0,		/* 0 */

																																																																																																																																																																																						/* Parameter pCurrentAction */

																																																																																																																																																																																						/* 606 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																																						/* 608 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																						/* 610 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																																																																																																																																																																							/* Parameter pInfo */

																																																																																																																																																																																							/* 612 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																																							/* 614 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																							/* 616 */	NdrFcShort(0x3e),	/* Type Offset=62 */

																																																																																																																																																																																								/* Parameter pcGroupInstances */

																																																																																																																																																																																								/* 618 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																								/* 620 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																																																								/* 622 */	0x8,		/* FC_LONG */
																																																																																																																																																																																											0x0,		/* 0 */

																																																																																																																																																																																									/* Parameter pGroupInstances */

																																																																																																																																																																																									/* 624 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																																									/* 626 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																																																									/* 628 */	NdrFcShort(0xb6),	/* Type Offset=182 */

																																																																																																																																																																																										/* Parameter pEnginePID */

																																																																																																																																																																																										/* 630 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																										/* 632 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																																																																										/* 634 */	0x8,		/* FC_LONG */
																																																																																																																																																																																													0x0,		/* 0 */

																																																																																																																																																																																											/* Return value */

																																																																																																																																																																																											/* 636 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																											/* 638 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
																																																																																																																																																																																											/* 640 */	0x8,		/* FC_LONG */
																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																												/* Procedure SchRpcStopInstance */

																																																																																																																																																																																												/* 642 */	0x0,		/* 0 */
																																																																																																																																																																																															0x48,		/* Old Flags:  */
																																																																																																																																																																																															/* 644 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																															/* 648 */	NdrFcShort(0xa),	/* 10 */
																																																																																																																																																																																															/* 650 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																															/* 652 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																		/* 654 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																		/* 656 */	NdrFcShort(0x4c),	/* 76 */
																																																																																																																																																																																																		/* 658 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																		/* 660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
																																																																																																																																																																																																					0x3,		/* 3 */
																																																																																																																																																																																																					/* 662 */	0xa,		/* 10 */
																																																																																																																																																																																																								0x81,		/* Ext Flags:  new corr desc, has big byval param */
																																																																																																																																																																																																								/* 664 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																								/* 666 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																								/* 668 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																								/* 670 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																									/* Parameter guid */

																																																																																																																																																																																																									/* 672 */	NdrFcShort(0x10a),	/* Flags:  must free, in, simple ref, */
																																																																																																																																																																																																									/* 674 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																									/* 676 */	NdrFcShort(0x90),	/* Type Offset=144 */

																																																																																																																																																																																																										/* Parameter flags */

																																																																																																																																																																																																										/* 678 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																										/* 680 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																										/* 682 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																													0x0,		/* 0 */

																																																																																																																																																																																																											/* Return value */

																																																																																																																																																																																																											/* 684 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																											/* 686 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																											/* 688 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																																												/* Procedure SchRpcStop */

																																																																																																																																																																																																												/* 690 */	0x0,		/* 0 */
																																																																																																																																																																																																															0x48,		/* Old Flags:  */
																																																																																																																																																																																																															/* 692 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																															/* 696 */	NdrFcShort(0xb),	/* 11 */
																																																																																																																																																																																																															/* 698 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																															/* 700 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																																		/* 702 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																		/* 704 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																		/* 706 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																		/* 708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																					0x3,		/* 3 */
																																																																																																																																																																																																																					/* 710 */	0xa,		/* 10 */
																																																																																																																																																																																																																								0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																								/* 712 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																								/* 714 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																								/* 716 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																								/* 718 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																									/* Parameter path */

																																																																																																																																																																																																																									/* 720 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																																																																									/* 722 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																									/* 724 */	NdrFcShort(0x6),	/* Type Offset=6 */

																																																																																																																																																																																																																										/* Parameter flags */

																																																																																																																																																																																																																										/* 726 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																										/* 728 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																										/* 730 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																													0x0,		/* 0 */

																																																																																																																																																																																																																											/* Return value */

																																																																																																																																																																																																																											/* 732 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																											/* 734 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																											/* 736 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																														0x0,		/* 0 */

																																																																																																																																																																																																																												/* Procedure SchRpcRun */

																																																																																																																																																																																																																												/* 738 */	0x0,		/* 0 */
																																																																																																																																																																																																																															0x48,		/* Old Flags:  */
																																																																																																																																																																																																																															/* 740 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																															/* 744 */	NdrFcShort(0xc),	/* 12 */
																																																																																																																																																																																																																															/* 746 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
																																																																																																																																																																																																																															/* 748 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																		0x0,		/* 0 */
																																																																																																																																																																																																																																		/* 750 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																		/* 752 */	NdrFcShort(0x18),	/* 24 */
																																																																																																																																																																																																																																		/* 754 */	NdrFcShort(0x4c),	/* 76 */
																																																																																																																																																																																																																																		/* 756 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																					0x8,		/* 8 */
																																																																																																																																																																																																																																					/* 758 */	0xa,		/* 10 */
																																																																																																																																																																																																																																								0x5,		/* Ext Flags:  new corr desc, srv corr check, */
																																																																																																																																																																																																																																								/* 760 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																								/* 762 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																								/* 764 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																								/* 766 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																									/* Parameter path */

																																																																																																																																																																																																																																									/* 768 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																									/* 770 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																									/* 772 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																										/* Parameter cArgs */

																																																																																																																																																																																																																																										/* 774 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																										/* 776 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																										/* 778 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																													0x0,		/* 0 */

																																																																																																																																																																																																																																											/* Parameter pArgs */

																																																																																																																																																																																																																																											/* 780 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																																																																																											/* 782 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																											/* 784 */	NdrFcShort(0xd4),	/* Type Offset=212 */

																																																																																																																																																																																																																																												/* Parameter flags */

																																																																																																																																																																																																																																												/* 786 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																												/* 788 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																												/* 790 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																															0x0,		/* 0 */

																																																																																																																																																																																																																																													/* Parameter sessionId */

																																																																																																																																																																																																																																													/* 792 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																													/* 794 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																													/* 796 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																0x0,		/* 0 */

																																																																																																																																																																																																																																														/* Parameter user */

																																																																																																																																																																																																																																														/* 798 */	NdrFcShort(0xb),	/* Flags:  must size, must free, in, */
																																																																																																																																																																																																																																														/* 800 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																																																																																																														/* 802 */	NdrFcShort(0x6),	/* Type Offset=6 */

																																																																																																																																																																																																																																															/* Parameter pGuid */

																																																																																																																																																																																																																																															/* 804 */	NdrFcShort(0x4112),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
																																																																																																																																																																																																																																															/* 806 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																																																																																																															/* 808 */	NdrFcShort(0x90),	/* Type Offset=144 */

																																																																																																																																																																																																																																																/* Return value */

																																																																																																																																																																																																																																																/* 810 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																/* 812 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																																																																																																																																/* 814 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																																																	/* Procedure SchRpcDelete */

																																																																																																																																																																																																																																																	/* 816 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																				0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																				/* 818 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																				/* 822 */	NdrFcShort(0xd),	/* 13 */
																																																																																																																																																																																																																																																				/* 824 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																				/* 826 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																							0x0,		/* 0 */
																																																																																																																																																																																																																																																							/* 828 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																							/* 830 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																							/* 832 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																							/* 834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																										0x3,		/* 3 */
																																																																																																																																																																																																																																																										/* 836 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																													0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																													/* 838 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																													/* 840 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																													/* 842 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																													/* 844 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																														/* Parameter path */

																																																																																																																																																																																																																																																														/* 846 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																														/* 848 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																														/* 850 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																															/* Parameter flags */

																																																																																																																																																																																																																																																															/* 852 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																															/* 854 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																															/* 856 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																		0x0,		/* 0 */

																																																																																																																																																																																																																																																																/* Return value */

																																																																																																																																																																																																																																																																/* 858 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																/* 860 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																/* 862 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																																																																	/* Procedure SchRpcRename */

																																																																																																																																																																																																																																																																	/* 864 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																				0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																				/* 866 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																				/* 870 */	NdrFcShort(0xe),	/* 14 */
																																																																																																																																																																																																																																																																				/* 872 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																																																				/* 874 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																							0x0,		/* 0 */
																																																																																																																																																																																																																																																																							/* 876 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																							/* 878 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																							/* 880 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																							/* 882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																										0x4,		/* 4 */
																																																																																																																																																																																																																																																																										/* 884 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																													0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																																													/* 886 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																													/* 888 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																													/* 890 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																													/* 892 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																														/* Parameter path */

																																																																																																																																																																																																																																																																														/* 894 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																														/* 896 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																														/* 898 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																															/* Parameter newName */

																																																																																																																																																																																																																																																																															/* 900 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																															/* 902 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																															/* 904 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																/* Parameter flags */

																																																																																																																																																																																																																																																																																/* 906 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																/* 908 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																/* 910 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																			0x0,		/* 0 */

																																																																																																																																																																																																																																																																																	/* Return value */

																																																																																																																																																																																																																																																																																	/* 912 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																	/* 914 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																	/* 916 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																				0x0,		/* 0 */

																																																																																																																																																																																																																																																																																		/* Procedure SchRpcScheduledRuntimes */

																																																																																																																																																																																																																																																																																		/* 918 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																					0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																					/* 920 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																					/* 924 */	NdrFcShort(0xf),	/* 15 */
																																																																																																																																																																																																																																																																																					/* 926 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
																																																																																																																																																																																																																																																																																					/* 928 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																																								0x0,		/* 0 */
																																																																																																																																																																																																																																																																																								/* 930 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																								/* 932 */	NdrFcShort(0x78),	/* 120 */
																																																																																																																																																																																																																																																																																								/* 934 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																																																																																																																																																								/* 936 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																											0x8,		/* 8 */
																																																																																																																																																																																																																																																																																											/* 938 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																																														0x3,		/* Ext Flags:  new corr desc, clt corr check, */
																																																																																																																																																																																																																																																																																														/* 940 */	NdrFcShort(0x1),	/* 1 */
																																																																																																																																																																																																																																																																																														/* 942 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																														/* 944 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																														/* 946 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																															/* Parameter path */

																																																																																																																																																																																																																																																																																															/* 948 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																															/* 950 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																															/* 952 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																																/* Parameter start */

																																																																																																																																																																																																																																																																																																/* 954 */	NdrFcShort(0xa),	/* Flags:  must free, in, */
																																																																																																																																																																																																																																																																																																/* 956 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																/* 958 */	NdrFcShort(0xf2),	/* Type Offset=242 */

																																																																																																																																																																																																																																																																																																	/* Parameter end */

																																																																																																																																																																																																																																																																																																	/* 960 */	NdrFcShort(0xa),	/* Flags:  must free, in, */
																																																																																																																																																																																																																																																																																																	/* 962 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																	/* 964 */	NdrFcShort(0xf2),	/* Type Offset=242 */

																																																																																																																																																																																																																																																																																																		/* Parameter flags */

																																																																																																																																																																																																																																																																																																		/* 966 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																		/* 968 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																		/* 970 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																					0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																			/* Parameter cRequested */

																																																																																																																																																																																																																																																																																																			/* 972 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																			/* 974 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																																																																																			/* 976 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																						0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																				/* Parameter pcRuntimes */

																																																																																																																																																																																																																																																																																																				/* 978 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																				/* 980 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																																																																																																																																																																				/* 982 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																							0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																					/* Parameter pRuntimes */

																																																																																																																																																																																																																																																																																																					/* 984 */	NdrFcShort(0x2013),	/* Flags:  must size, must free, out, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																					/* 986 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
																																																																																																																																																																																																																																																																																																					/* 988 */	NdrFcShort(0x104),	/* Type Offset=260 */

																																																																																																																																																																																																																																																																																																						/* Return value */

																																																																																																																																																																																																																																																																																																						/* 990 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																						/* 992 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
																																																																																																																																																																																																																																																																																																						/* 994 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																									0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																							/* Procedure SchRpcGetLastRunInfo */

																																																																																																																																																																																																																																																																																																							/* 996 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																										0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																										/* 998 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																										/* 1002 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																																																																																																																																																																																																										/* 1004 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																																																																																										/* 1006 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																																																													0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																													/* 1008 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																													/* 1010 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																													/* 1012 */	NdrFcShort(0x58),	/* 88 */
																																																																																																																																																																																																																																																																																																													/* 1014 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																0x4,		/* 4 */
																																																																																																																																																																																																																																																																																																																/* 1016 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																																																																			0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																																																																																			/* 1018 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																			/* 1020 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																			/* 1022 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																			/* 1024 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																				/* Parameter path */

																																																																																																																																																																																																																																																																																																																				/* 1026 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																				/* 1028 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																				/* 1030 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																																																					/* Parameter pLastRuntime */

																																																																																																																																																																																																																																																																																																																					/* 1032 */	NdrFcShort(0x4112),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
																																																																																																																																																																																																																																																																																																																					/* 1034 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																					/* 1036 */	NdrFcShort(0xf6),	/* Type Offset=246 */

																																																																																																																																																																																																																																																																																																																						/* Parameter pLastReturnCode */

																																																																																																																																																																																																																																																																																																																						/* 1038 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																						/* 1040 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																						/* 1042 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																									0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																							/* Return value */

																																																																																																																																																																																																																																																																																																																							/* 1044 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																							/* 1046 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																																							/* 1048 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																										0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																								/* Procedure SchRpcGetTaskInfo */

																																																																																																																																																																																																																																																																																																																								/* 1050 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																											0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																											/* 1052 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																											/* 1056 */	NdrFcShort(0x11),	/* 17 */
																																																																																																																																																																																																																																																																																																																											/* 1058 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																																																																																																																																																																																											/* 1060 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																																																																														0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																														/* 1062 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																														/* 1064 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																														/* 1066 */	NdrFcShort(0x40),	/* 64 */
																																																																																																																																																																																																																																																																																																																														/* 1068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																																	0x5,		/* 5 */
																																																																																																																																																																																																																																																																																																																																	/* 1070 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																																																																																				0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																																																																																																				/* 1072 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																				/* 1074 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																				/* 1076 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																				/* 1078 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																					/* Parameter path */

																																																																																																																																																																																																																																																																																																																																					/* 1080 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																					/* 1082 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																					/* 1084 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																																																																						/* Parameter flags */

																																																																																																																																																																																																																																																																																																																																						/* 1086 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																																																						/* 1088 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																																						/* 1090 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																									0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																							/* Parameter pEnabled */

																																																																																																																																																																																																																																																																																																																																							/* 1092 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																							/* 1094 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																																							/* 1096 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																										0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																								/* Parameter pState */

																																																																																																																																																																																																																																																																																																																																								/* 1098 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																								/* 1100 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																																																								/* 1102 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																									/* Return value */

																																																																																																																																																																																																																																																																																																																																									/* 1104 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																									/* 1106 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																																																																																																																																																																																																																																																																																																									/* 1108 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																										/* Procedure SchRpcGetNumberOfMissedRuns */

																																																																																																																																																																																																																																																																																																																																										/* 1110 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																													0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																																													/* 1112 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																													/* 1116 */	NdrFcShort(0x12),	/* 18 */
																																																																																																																																																																																																																																																																																																																																													/* 1118 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																																																													/* 1120 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																																																																																																0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																/* 1122 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																																/* 1124 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																/* 1126 */	NdrFcShort(0x24),	/* 36 */
																																																																																																																																																																																																																																																																																																																																																/* 1128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																																																			0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																			/* 1130 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																																																																																																						0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																																																																																																																						/* 1132 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																						/* 1134 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																						/* 1136 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																						/* 1138 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																																							/* Parameter path */

																																																																																																																																																																																																																																																																																																																																																							/* 1140 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																																							/* 1142 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																																							/* 1144 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																																																																																								/* Parameter pNumberOfMissedRuns */

																																																																																																																																																																																																																																																																																																																																																								/* 1146 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
																																																																																																																																																																																																																																																																																																																																																								/* 1148 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																																																								/* 1150 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																									/* Return value */

																																																																																																																																																																																																																																																																																																																																																									/* 1152 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																																									/* 1154 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																																																									/* 1156 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																										/* Procedure SchRpcEnableTask */

																																																																																																																																																																																																																																																																																																																																																										/* 1158 */	0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																													0x48,		/* Old Flags:  */
																																																																																																																																																																																																																																																																																																																																																													/* 1160 */	NdrFcLong(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																													/* 1164 */	NdrFcShort(0x13),	/* 19 */
																																																																																																																																																																																																																																																																																																																																																													/* 1166 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
																																																																																																																																																																																																																																																																																																																																																													/* 1168 */	0x32,		/* FC_BIND_PRIMITIVE */
																																																																																																																																																																																																																																																																																																																																																																0x0,		/* 0 */
																																																																																																																																																																																																																																																																																																																																																																/* 1170 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
																																																																																																																																																																																																																																																																																																																																																																/* 1172 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																/* 1174 */	NdrFcShort(0x8),	/* 8 */
																																																																																																																																																																																																																																																																																																																																																																/* 1176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
																																																																																																																																																																																																																																																																																																																																																																			0x3,		/* 3 */
																																																																																																																																																																																																																																																																																																																																																																			/* 1178 */	0xa,		/* 10 */
																																																																																																																																																																																																																																																																																																																																																																						0x1,		/* Ext Flags:  new corr desc, */
																																																																																																																																																																																																																																																																																																																																																																						/* 1180 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																						/* 1182 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																						/* 1184 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																																																																																																																																																																																																																																						/* 1186 */	NdrFcShort(0x0),	/* 0 */

																																																																																																																																																																																																																																																																																																																																																																							/* Parameter path */

																																																																																																																																																																																																																																																																																																																																																																							/* 1188 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
																																																																																																																																																																																																																																																																																																																																																																							/* 1190 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
																																																																																																																																																																																																																																																																																																																																																																							/* 1192 */	NdrFcShort(0xc),	/* Type Offset=12 */

																																																																																																																																																																																																																																																																																																																																																																								/* Parameter enabled */

																																																																																																																																																																																																																																																																																																																																																																								/* 1194 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
																																																																																																																																																																																																																																																																																																																																																																								/* 1196 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																																																																																																																																																																																																																																																																								/* 1198 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																											0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																																									/* Return value */

																																																																																																																																																																																																																																																																																																																																																																									/* 1200 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
																																																																																																																																																																																																																																																																																																																																																																									/* 1202 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																																																																																																																																																																																																																																																																																																									/* 1204 */	0x8,		/* FC_LONG */
																																																																																																																																																																																																																																																																																																																																																																												0x0,		/* 0 */

																																																																																																																																																																																																																																																																																																																																																																												0x0
																																																																																																																																																																																																																																																																																																																																																																											}
};

static const SchRpc_MIDL_TYPE_FORMAT_STRING SchRpc__MIDL_TypeFormatString =
{
	0,
	{
		NdrFcShort(0x0),	/* 0 */
/*  2 */
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
			/*  4 */	0x8,		/* FC_LONG */
						0x5c,		/* FC_PAD */
			/*  6 */
						0x12, 0x8,	/* FC_UP [simple_pointer] */
			/*  8 */
						0x25,		/* FC_C_WSTRING */
						0x5c,		/* FC_PAD */
			/* 10 */
						0x11, 0x8,	/* FC_RP [simple_pointer] */
			/* 12 */
						0x25,		/* FC_C_WSTRING */
						0x5c,		/* FC_PAD */
			/* 14 */
						0x12, 0x0,	/* FC_UP */
						/* 16 */	NdrFcShort(0x18),	/* Offset= 24 (40) */
						/* 18 */
									0x1a,		/* FC_BOGUS_STRUCT */
									0x3,		/* 3 */
									/* 20 */	NdrFcShort(0x18),	/* 24 */
									/* 22 */	NdrFcShort(0x0),	/* 0 */
									/* 24 */	NdrFcShort(0x8),	/* Offset= 8 (32) */
									/* 26 */	0x36,		/* FC_POINTER */
												0x36,		/* FC_POINTER */
												/* 28 */	0x8,		/* FC_LONG */
															0x40,		/* FC_STRUCTPAD4 */
															/* 30 */	0x5c,		/* FC_PAD */
																		0x5b,		/* FC_END */
															/* 32 */
																		0x12, 0x8,	/* FC_UP [simple_pointer] */
															/* 34 */
																		0x25,		/* FC_C_WSTRING */
																		0x5c,		/* FC_PAD */
															/* 36 */
																		0x12, 0x8,	/* FC_UP [simple_pointer] */
															/* 38 */
																		0x25,		/* FC_C_WSTRING */
																		0x5c,		/* FC_PAD */
															/* 40 */
																		0x21,		/* FC_BOGUS_ARRAY */
																		0x3,		/* 3 */
																		/* 42 */	NdrFcShort(0x0),	/* 0 */
																		/* 44 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																					0x0,		/*  */
																					/* 46 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																					/* 48 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																					/* 50 */	NdrFcLong(0xffffffff),	/* -1 */
																					/* 54 */	NdrFcShort(0x0),	/* Corr flags:  */
																					/* 56 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																								0x0,		/* 0 */
																								/* 58 */	NdrFcShort(0xffd8),	/* Offset= -40 (18) */
																								/* 60 */	0x5c,		/* FC_PAD */
																											0x5b,		/* FC_END */
																								/* 62 */
																											0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																											/* 64 */	NdrFcShort(0xffc6),	/* Offset= -58 (6) */
																											/* 66 */
																														0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																														/* 68 */	NdrFcShort(0x2),	/* Offset= 2 (70) */
																														/* 70 */
																																	0x12, 0x0,	/* FC_UP */
																																	/* 72 */	NdrFcShort(0x2),	/* Offset= 2 (74) */
																																	/* 74 */
																																				0x1a,		/* FC_BOGUS_STRUCT */
																																				0x3,		/* 3 */
																																				/* 76 */	NdrFcShort(0x18),	/* 24 */
																																				/* 78 */	NdrFcShort(0x0),	/* 0 */
																																				/* 80 */	NdrFcShort(0x8),	/* Offset= 8 (88) */
																																				/* 82 */	0x8,		/* FC_LONG */
																																							0x8,		/* FC_LONG */
																																							/* 84 */	0x36,		/* FC_POINTER */
																																										0x36,		/* FC_POINTER */
																																										/* 86 */	0x5c,		/* FC_PAD */
																																													0x5b,		/* FC_END */
																																										/* 88 */
																																													0x12, 0x8,	/* FC_UP [simple_pointer] */
																																										/* 90 */
																																													0x25,		/* FC_C_WSTRING */
																																													0x5c,		/* FC_PAD */
																																										/* 92 */
																																													0x12, 0x8,	/* FC_UP [simple_pointer] */
																																										/* 94 */
																																													0x25,		/* FC_C_WSTRING */
																																													0x5c,		/* FC_PAD */
																																										/* 96 */
																																													0x11, 0x8,	/* FC_RP [simple_pointer] */
																																													/* 98 */	0x8,		/* FC_LONG */
																																																0x5c,		/* FC_PAD */
																																													/* 100 */
																																																0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																																/* 102 */	NdrFcShort(0x2),	/* Offset= 2 (104) */
																																																/* 104 */
																																																			0x12, 0x0,	/* FC_UP */
																																																			/* 106 */	NdrFcShort(0x2),	/* Offset= 2 (108) */
																																																			/* 108 */
																																																						0x21,		/* FC_BOGUS_ARRAY */
																																																						0x3,		/* 3 */
																																																						/* 110 */	NdrFcShort(0x0),	/* 0 */
																																																						/* 112 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																																																									0x54,		/* FC_DEREFERENCE */
																																																									/* 114 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
																																																									/* 116 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																									/* 118 */	NdrFcLong(0xffffffff),	/* -1 */
																																																									/* 122 */	NdrFcShort(0x0),	/* Corr flags:  */
																																																									/* 124 */
																																																												0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																									/* 126 */
																																																												0x25,		/* FC_C_WSTRING */
																																																												0x5c,		/* FC_PAD */
																																																												/* 128 */	0x5c,		/* FC_PAD */
																																																															0x5b,		/* FC_END */
																																																												/* 130 */
																																																															0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																																															/* 132 */	NdrFcShort(0x2),	/* Offset= 2 (134) */
																																																															/* 134 */
																																																																		0x12, 0x0,	/* FC_UP */
																																																																		/* 136 */	NdrFcShort(0x14),	/* Offset= 20 (156) */
																																																																		/* 138 */
																																																																					0x1d,		/* FC_SMFARRAY */
																																																																					0x0,		/* 0 */
																																																																					/* 140 */	NdrFcShort(0x8),	/* 8 */
																																																																					/* 142 */	0x1,		/* FC_BYTE */
																																																																								0x5b,		/* FC_END */
																																																																					/* 144 */
																																																																								0x15,		/* FC_STRUCT */
																																																																								0x3,		/* 3 */
																																																																								/* 146 */	NdrFcShort(0x10),	/* 16 */
																																																																								/* 148 */	0x8,		/* FC_LONG */
																																																																											0x6,		/* FC_SHORT */
																																																																											/* 150 */	0x6,		/* FC_SHORT */
																																																																														0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																														/* 152 */	0x0,		/* 0 */
																																																																																	NdrFcShort(0xfff1),	/* Offset= -15 (138) */
																																																																																	0x5b,		/* FC_END */
																																																																														/* 156 */
																																																																																	0x21,		/* FC_BOGUS_ARRAY */
																																																																																	0x3,		/* 3 */
																																																																																	/* 158 */	NdrFcShort(0x0),	/* 0 */
																																																																																	/* 160 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																																																																																				0x54,		/* FC_DEREFERENCE */
																																																																																				/* 162 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
																																																																																				/* 164 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																				/* 166 */	NdrFcLong(0xffffffff),	/* -1 */
																																																																																				/* 170 */	NdrFcShort(0x0),	/* Corr flags:  */
																																																																																				/* 172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																							0x0,		/* 0 */
																																																																																							/* 174 */	NdrFcShort(0xffe2),	/* Offset= -30 (144) */
																																																																																							/* 176 */	0x5c,		/* FC_PAD */
																																																																																										0x5b,		/* FC_END */
																																																																																							/* 178 */
																																																																																										0x11, 0x0,	/* FC_RP */
																																																																																										/* 180 */	NdrFcShort(0xffdc),	/* Offset= -36 (144) */
																																																																																										/* 182 */
																																																																																													0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																																																																													/* 184 */	NdrFcShort(0x2),	/* Offset= 2 (186) */
																																																																																													/* 186 */
																																																																																																0x12, 0x0,	/* FC_UP */
																																																																																																/* 188 */	NdrFcShort(0x2),	/* Offset= 2 (190) */
																																																																																																/* 190 */
																																																																																																			0x21,		/* FC_BOGUS_ARRAY */
																																																																																																			0x3,		/* 3 */
																																																																																																			/* 192 */	NdrFcShort(0x0),	/* 0 */
																																																																																																			/* 194 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																																																																																																						0x54,		/* FC_DEREFERENCE */
																																																																																																						/* 196 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																						/* 198 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																						/* 200 */	NdrFcLong(0xffffffff),	/* -1 */
																																																																																																						/* 204 */	NdrFcShort(0x0),	/* Corr flags:  */
																																																																																																						/* 206 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																									0x0,		/* 0 */
																																																																																																									/* 208 */	NdrFcShort(0xffc0),	/* Offset= -64 (144) */
																																																																																																									/* 210 */	0x5c,		/* FC_PAD */
																																																																																																												0x5b,		/* FC_END */
																																																																																																									/* 212 */
																																																																																																												0x12, 0x0,	/* FC_UP */
																																																																																																												/* 214 */	NdrFcShort(0x2),	/* Offset= 2 (216) */
																																																																																																												/* 216 */
																																																																																																															0x21,		/* FC_BOGUS_ARRAY */
																																																																																																															0x3,		/* 3 */
																																																																																																															/* 218 */	NdrFcShort(0x0),	/* 0 */
																																																																																																															/* 220 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																																																																																																																		0x0,		/*  */
																																																																																																																		/* 222 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
																																																																																																																		/* 224 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																		/* 226 */	NdrFcLong(0xffffffff),	/* -1 */
																																																																																																																		/* 230 */	NdrFcShort(0x0),	/* Corr flags:  */
																																																																																																																		/* 232 */
																																																																																																																					0x12, 0x8,	/* FC_UP [simple_pointer] */
																																																																																																																		/* 234 */
																																																																																																																					0x25,		/* FC_C_WSTRING */
																																																																																																																					0x5c,		/* FC_PAD */
																																																																																																																					/* 236 */	0x5c,		/* FC_PAD */
																																																																																																																								0x5b,		/* FC_END */
																																																																																																																					/* 238 */
																																																																																																																								0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																								/* 240 */	NdrFcShort(0xffa0),	/* Offset= -96 (144) */
																																																																																																																								/* 242 */
																																																																																																																											0x12, 0x0,	/* FC_UP */
																																																																																																																											/* 244 */	NdrFcShort(0x2),	/* Offset= 2 (246) */
																																																																																																																											/* 246 */
																																																																																																																														0x15,		/* FC_STRUCT */
																																																																																																																														0x1,		/* 1 */
																																																																																																																														/* 248 */	NdrFcShort(0x10),	/* 16 */
																																																																																																																														/* 250 */	0x6,		/* FC_SHORT */
																																																																																																																																	0x6,		/* FC_SHORT */
																																																																																																																																	/* 252 */	0x6,		/* FC_SHORT */
																																																																																																																																				0x6,		/* FC_SHORT */
																																																																																																																																				/* 254 */	0x6,		/* FC_SHORT */
																																																																																																																																							0x6,		/* FC_SHORT */
																																																																																																																																							/* 256 */	0x6,		/* FC_SHORT */
																																																																																																																																										0x6,		/* FC_SHORT */
																																																																																																																																										/* 258 */	0x5c,		/* FC_PAD */
																																																																																																																																													0x5b,		/* FC_END */
																																																																																																																																										/* 260 */
																																																																																																																																													0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
																																																																																																																																													/* 262 */	NdrFcShort(0x2),	/* Offset= 2 (264) */
																																																																																																																																													/* 264 */
																																																																																																																																																0x12, 0x0,	/* FC_UP */
																																																																																																																																																/* 266 */	NdrFcShort(0x2),	/* Offset= 2 (268) */
																																																																																																																																																/* 268 */
																																																																																																																																																			0x21,		/* FC_BOGUS_ARRAY */
																																																																																																																																																			0x1,		/* 1 */
																																																																																																																																																			/* 270 */	NdrFcShort(0x0),	/* 0 */
																																																																																																																																																			/* 272 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
																																																																																																																																																						0x54,		/* FC_DEREFERENCE */
																																																																																																																																																						/* 274 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
																																																																																																																																																						/* 276 */	NdrFcShort(0x1),	/* Corr flags:  early, */
																																																																																																																																																						/* 278 */	NdrFcLong(0xffffffff),	/* -1 */
																																																																																																																																																						/* 282 */	NdrFcShort(0x0),	/* Corr flags:  */
																																																																																																																																																						/* 284 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
																																																																																																																																																									0x0,		/* 0 */
																																																																																																																																																									/* 286 */	NdrFcShort(0xffd8),	/* Offset= -40 (246) */
																																																																																																																																																									/* 288 */	0x5c,		/* FC_PAD */
																																																																																																																																																												0x5b,		/* FC_END */
																																																																																																																																																									/* 290 */
																																																																																																																																																												0x11, 0x4,	/* FC_RP [alloced_on_stack] */
																																																																																																																																																												/* 292 */	NdrFcShort(0xffd2),	/* Offset= -46 (246) */

																																																																																																																																																															0x0
																																																																																																																																																														}
};

static const unsigned short ITaskSchedulerService_FormatStringOffsetTable[] =
{ 0,42,132,192,246,300,354,426,498,558,642,690,738,816,864,918,996,1050,1110,1158 };

static const MIDL_STUB_DESC ITaskSchedulerService_StubDesc =
{ (void*)&ITaskSchedulerService___RpcClientInterface,MIDL_user_allocate,MIDL_user_free,&ITaskSchedulerService__MIDL_AutoBindHandle,0,0,0,0,SchRpc__MIDL_TypeFormatString.Format,1,0x50002,0,0x801026e,0,0,0,0x1,0,0,0 };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#endif