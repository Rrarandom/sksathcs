#pragma warning( disable: 4049 )
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __ms2Ddtyp_h__
#define __ms2Ddtyp_h__
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif
#ifdef __cplusplus
extern "C" {
#endif
    typedef void* ADCONNECTION_HANDLE;
    typedef int BOOL;
    typedef int* PBOOL;
    typedef int* LPBOOL;
    typedef unsigned char BYTE;
    typedef unsigned char* PBYTE;
    typedef unsigned char* LPBYTE;
    typedef BYTE BOOLEAN;
    typedef BYTE* PBOOLEAN;
    typedef wchar_t WCHAR;
    typedef wchar_t* PWCHAR;
    typedef double DOUBLE;
    typedef unsigned long DWORD;
    typedef unsigned long* PDWORD;
    typedef unsigned long* LPDWORD;
    typedef unsigned int DWORD32;
    typedef unsigned __int64 DWORD64;
    typedef unsigned __int64* PDWORD64;
    typedef unsigned __int64 ULONGLONG;
    typedef ULONGLONG DWORDLONG;
    typedef ULONGLONG* PDWORDLONG;
    typedef unsigned long error_status_t;
    typedef float FLOAT;
    typedef unsigned char UCHAR;
    typedef unsigned char* PUCHAR;
    typedef short SHORT;
    typedef void* HANDLE;
    typedef DWORD HCALL;
    typedef int INT;
    typedef int* LPINT;
    typedef signed char INT8;
    typedef short INT16;
    typedef int INT32;
    typedef __int64 INT64;
    typedef void* LDAP_UDP_HANDLE;
    typedef const wchar_t* LMCSTR;
    typedef WCHAR* LMSTR;
    typedef long LONG;
    typedef long* PLONG;
    typedef long* LPLONG;
    typedef __int64 LONGLONG;
    typedef __int3264 LONG_PTR;
    typedef unsigned __int3264 ULONG_PTR;
    typedef int LONG32;
    typedef __int64 LONG64;
    typedef __int64* PLONG64;
    typedef const void* LPCVOID;
    typedef DWORD NET_API_STATUS;
    typedef void* PCONTEXT_HANDLE;
    typedef PCONTEXT_HANDLE* PPCONTEXT_HANDLE;
    typedef unsigned __int64 QWORD;
    typedef void* RPC_BINDING_HANDLE;
    typedef UCHAR* STRING;
    typedef unsigned int UINT;
    typedef unsigned char UINT8;
    typedef unsigned short UINT16;
    typedef unsigned int UINT32;
    typedef unsigned __int64 UINT64;
    typedef unsigned long ULONG;
    typedef unsigned long* PULONG;
    typedef ULONG_PTR DWORD_PTR;
    typedef ULONG_PTR SIZE_T;
    typedef unsigned int ULONG32;
    typedef unsigned __int64 ULONG64;
    typedef unsigned short USHORT;
    typedef void* PVOID;
    typedef void* LPVOID;
    typedef unsigned short WORD;
    typedef unsigned short* PWORD;
    typedef unsigned short* LPWORD;

    typedef struct _EVENT_DESCRIPTOR {
        USHORT Id;
        UCHAR Version;
        UCHAR Channel;
        UCHAR Level;
        UCHAR Opcode;
        USHORT Task;
        ULONGLONG Keyword;
    } EVENT_DESCRIPTOR;

    typedef struct _EVENT_DESCRIPTOR* PEVENT_DESCRIPTOR;
    typedef struct _EVENT_DESCRIPTOR* PCEVENT_DESCRIPTOR;

    typedef struct _EVENT_HEADER {
        USHORT Size;
        USHORT HeaderType;
        USHORT Flags;
        USHORT EventProperty;
        ULONG ThreadId;
        ULONG ProcessId;
        LARGE_INTEGER TimeStamp;
        GUID ProviderId;
        EVENT_DESCRIPTOR EventDescriptor;
        union {
            struct {
                ULONG KernelTime;
                ULONG UserTime;
            };
            ULONG64 ProcessorTime;
        };
        GUID ActivityId;
    } EVENT_HEADER;

    typedef struct _EVENT_HEADER* PEVENT_HEADER;
    typedef DWORD LCID;

    typedef struct _MULTI_SZ {
        wchar_t* Value;
        DWORD nChar;
    } MULTI_SZ;

    typedef struct _RPC_UNICODE_STRING {
        unsigned short Length;
        unsigned short MaximumLength;
        WCHAR* Buffer;
    } RPC_UNICODE_STRING;

    typedef struct _RPC_UNICODE_STRING* PRPC_UNICODE_STRING;

    typedef struct _SERVER_INFO_100 {
        DWORD sv100_platform_id;
        wchar_t* sv100_name;
    } SERVER_INFO_100;

    typedef struct _SERVER_INFO_100* PSERVER_INFO_100;
    typedef struct _SERVER_INFO_100* LPSERVER_INFO_100;

    typedef struct _SERVER_INFO_101 {
        DWORD sv101_platform_id;
        wchar_t* sv101_name;
        DWORD sv101_version_major;
        DWORD sv101_version_minor;
        DWORD sv101_version_type;
        wchar_t* sv101_comment;
    } SERVER_INFO_101;

    typedef struct _SERVER_INFO_101* PSERVER_INFO_101;
    typedef struct _SERVER_INFO_101* LPSERVER_INFO_101;

    typedef struct _UINT128 {
        UINT64 lower;
        UINT64 upper;
    } UINT128;

    typedef struct _UINT128* PUINT128;

    typedef struct _RPC_SID_IDENTIFIER_AUTHORITY {
        byte Value[6];
    } RPC_SID_IDENTIFIER_AUTHORITY;

    typedef DWORD ACCESS_MASK;
    typedef ACCESS_MASK* PACCESS_MASK;

    typedef struct _MANDATORY_INFORMATION {
        ACCESS_MASK AllowedAccess;
        BOOLEAN WriteAllowed;
        BOOLEAN ReadAllowed;
        BOOLEAN ExecuteAllowed;
        TOKEN_MANDATORY_POLICY MandatoryPolicy;
    } MANDATORY_INFORMATION;

    typedef struct _MANDATORY_INFORMATION* PMANDATORY_INFORMATION;

    typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE {
        DWORD Length;
        BYTE OctetString[1];
    } CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;

    typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE* PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_RELATIVE;
    typedef DWORD SECURITY_INFORMATION;
    typedef DWORD* PSECURITY_INFORMATION;

    extern RPC_IF_HANDLE __MIDL_itf_ms2Ddtyp_0000_0000_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_ms2Ddtyp_0000_0000_v0_0_s_ifspec;

#ifdef __cplusplus
}
#endif
#endif