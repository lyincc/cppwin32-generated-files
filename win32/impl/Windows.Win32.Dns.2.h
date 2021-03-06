// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Dns_2_H
#define WIN32_Windows_Win32_Dns_2_H
#include "win32/impl/Windows.Win32.Dns.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_DnsQueryConfig(win32::Windows::Win32::Dns::DNS_CONFIG_TYPE Config, uint32_t Flag, uint16_t* pwsAdapterName, void* pReserved, void* pBuffer, uint32_t* pBufLen) noexcept;
    win32::Windows::Win32::Dns::DNS_RECORDA* __stdcall WIN32_IMPL_DnsRecordCopyEx(win32::Windows::Win32::Dns::DNS_RECORDA* pRecord, win32::Windows::Win32::Dns::DNS_CHARSET CharSetIn, win32::Windows::Win32::Dns::DNS_CHARSET CharSetOut) noexcept;
    win32::Windows::Win32::Dns::DNS_RECORDA* __stdcall WIN32_IMPL_DnsRecordSetCopyEx(win32::Windows::Win32::Dns::DNS_RECORDA* pRecordSet, win32::Windows::Win32::Dns::DNS_CHARSET CharSetIn, win32::Windows::Win32::Dns::DNS_CHARSET CharSetOut) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsRecordCompare(win32::Windows::Win32::Dns::DNS_RECORDA* pRecord1, win32::Windows::Win32::Dns::DNS_RECORDA* pRecord2) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsRecordSetCompare(win32::Windows::Win32::Dns::DNS_RECORDA* pRR1, win32::Windows::Win32::Dns::DNS_RECORDA* pRR2, win32::Windows::Win32::Dns::DNS_RECORDA** ppDiff1, win32::Windows::Win32::Dns::DNS_RECORDA** ppDiff2) noexcept;
    win32::Windows::Win32::Dns::DNS_RECORDA* __stdcall WIN32_IMPL_DnsRecordSetDetach(win32::Windows::Win32::Dns::DNS_RECORDA* pRecordList) noexcept;
    void __stdcall WIN32_IMPL_DnsFree(void* pData, win32::Windows::Win32::Dns::DNS_FREE_TYPE FreeType) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsQuery_A(int8_t* pszName, uint16_t wType, uint32_t Options, void* pExtra, win32::Windows::Win32::Dns::DNS_RECORDA** ppQueryResults, void** pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsQuery_UTF8(int8_t* pszName, uint16_t wType, uint32_t Options, void* pExtra, win32::Windows::Win32::Dns::DNS_RECORDA** ppQueryResults, void** pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsQuery_W(uint16_t* pszName, uint16_t wType, uint32_t Options, void* pExtra, win32::Windows::Win32::Dns::DNS_RECORDA** ppQueryResults, void** pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsQueryEx(win32::Windows::Win32::Dns::DNS_QUERY_REQUEST* pQueryRequest, win32::Windows::Win32::Dns::DNS_QUERY_RESULT* pQueryResults, win32::Windows::Win32::Dns::DNS_QUERY_CANCEL* pCancelHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsCancelQuery(win32::Windows::Win32::Dns::DNS_QUERY_CANCEL* pCancelHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsAcquireContextHandle_W(uint32_t CredentialFlags, void* Credentials, win32::Windows::Win32::Dns::DnsContextHandle* pContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsAcquireContextHandle_A(uint32_t CredentialFlags, void* Credentials, win32::Windows::Win32::Dns::DnsContextHandle* pContext) noexcept;
    void __stdcall WIN32_IMPL_DnsReleaseContextHandle(win32::Windows::Win32::SystemServices::HANDLE hContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsModifyRecordsInSet_W(win32::Windows::Win32::Dns::DNS_RECORDA* pAddRecords, win32::Windows::Win32::Dns::DNS_RECORDA* pDeleteRecords, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hCredentials, void* pExtraList, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsModifyRecordsInSet_A(win32::Windows::Win32::Dns::DNS_RECORDA* pAddRecords, win32::Windows::Win32::Dns::DNS_RECORDA* pDeleteRecords, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hCredentials, void* pExtraList, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsModifyRecordsInSet_UTF8(win32::Windows::Win32::Dns::DNS_RECORDA* pAddRecords, win32::Windows::Win32::Dns::DNS_RECORDA* pDeleteRecords, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hCredentials, void* pExtraList, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsReplaceRecordSetW(win32::Windows::Win32::Dns::DNS_RECORDA* pReplaceSet, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hContext, void* pExtraInfo, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsReplaceRecordSetA(win32::Windows::Win32::Dns::DNS_RECORDA* pReplaceSet, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hContext, void* pExtraInfo, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsReplaceRecordSetUTF8(win32::Windows::Win32::Dns::DNS_RECORDA* pReplaceSet, uint32_t Options, win32::Windows::Win32::SystemServices::HANDLE hContext, void* pExtraInfo, void* pReserved) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsValidateName_W(uint16_t* pszName, win32::Windows::Win32::Dns::DNS_NAME_FORMAT Format) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsValidateName_A(int8_t* pszName, win32::Windows::Win32::Dns::DNS_NAME_FORMAT Format) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsValidateName_UTF8(int8_t* pszName, win32::Windows::Win32::Dns::DNS_NAME_FORMAT Format) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsNameCompare_A(int8_t* pName1, int8_t* pName2) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsNameCompare_W(uint16_t* pName1, uint16_t* pName2) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsWriteQuestionToBuffer_W(win32::Windows::Win32::Dns::DNS_MESSAGE_BUFFER* pDnsBuffer, uint32_t* pdwBufferSize, uint16_t* pszName, uint16_t wType, uint16_t Xid, win32::Windows::Win32::SystemServices::BOOL fRecursionDesired) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DnsWriteQuestionToBuffer_UTF8(win32::Windows::Win32::Dns::DNS_MESSAGE_BUFFER* pDnsBuffer, uint32_t* pdwBufferSize, int8_t* pszName, uint16_t wType, uint16_t Xid, win32::Windows::Win32::SystemServices::BOOL fRecursionDesired) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsExtractRecordsFromMessage_W(win32::Windows::Win32::Dns::DNS_MESSAGE_BUFFER* pDnsBuffer, uint16_t wMessageLength, win32::Windows::Win32::Dns::DNS_RECORDA** ppRecord) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsExtractRecordsFromMessage_UTF8(win32::Windows::Win32::Dns::DNS_MESSAGE_BUFFER* pDnsBuffer, uint16_t wMessageLength, win32::Windows::Win32::Dns::DNS_RECORDA** ppRecord) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsGetProxyInformation(uint16_t* hostName, win32::Windows::Win32::Dns::DNS_PROXY_INFORMATION* proxyInformation, win32::Windows::Win32::Dns::DNS_PROXY_INFORMATION* defaultProxyInformation, win32::Windows::Win32::Dns::DNS_PROXY_COMPLETION_ROUTINE* completionRoutine, void* completionContext) noexcept;
    void __stdcall WIN32_IMPL_DnsFreeProxyName(uint16_t* proxyName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionGetProxyInfoForHostUrl(uint16_t* pwszHostUrl, uint8_t* pSelectionContext, uint32_t dwSelectionContextLength, uint32_t dwExplicitInterfaceIndex, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_INFO_EX* pProxyInfoEx) noexcept;
    void __stdcall WIN32_IMPL_DnsConnectionFreeProxyInfoEx(win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_INFO_EX* pProxyInfoEx) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionGetProxyInfo(uint16_t* pwszConnectionName, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_TYPE Type, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_INFO* pProxyInfo) noexcept;
    void __stdcall WIN32_IMPL_DnsConnectionFreeProxyInfo(win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_INFO* pProxyInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionSetProxyInfo(uint16_t* pwszConnectionName, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_TYPE Type, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_INFO* pProxyInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionDeleteProxyInfo(uint16_t* pwszConnectionName, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_TYPE Type) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionGetProxyList(uint16_t* pwszConnectionName, win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_LIST* pProxyList) noexcept;
    void __stdcall WIN32_IMPL_DnsConnectionFreeProxyList(win32::Windows::Win32::Dns::DNS_CONNECTION_PROXY_LIST* pProxyList) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionGetNameList(win32::Windows::Win32::Dns::DNS_CONNECTION_NAME_LIST* pNameList) noexcept;
    void __stdcall WIN32_IMPL_DnsConnectionFreeNameList(win32::Windows::Win32::Dns::DNS_CONNECTION_NAME_LIST* pNameList) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionUpdateIfIndexTable(win32::Windows::Win32::Dns::DNS_CONNECTION_IFINDEX_LIST* pConnectionIfIndexEntries) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionSetPolicyEntries(win32::Windows::Win32::Dns::DNS_CONNECTION_POLICY_TAG PolicyEntryTag, win32::Windows::Win32::Dns::DNS_CONNECTION_POLICY_ENTRY_LIST* pPolicyEntryList) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsConnectionDeletePolicyEntries(win32::Windows::Win32::Dns::DNS_CONNECTION_POLICY_TAG PolicyEntryTag) noexcept;
    win32::Windows::Win32::Dns::DNS_SERVICE_INSTANCE* __stdcall WIN32_IMPL_DnsServiceConstructInstance(uint16_t* pServiceName, uint16_t* pHostName, uint32_t* pIp4, win32::Windows::Win32::Dns::IP6_ADDRESS* pIp6, uint16_t wPort, uint16_t wPriority, uint16_t wWeight, uint32_t dwPropertiesCount, uint16_t** keys, uint16_t** values) noexcept;
    win32::Windows::Win32::Dns::DNS_SERVICE_INSTANCE* __stdcall WIN32_IMPL_DnsServiceCopyInstance(win32::Windows::Win32::Dns::DNS_SERVICE_INSTANCE* pOrig) noexcept;
    void __stdcall WIN32_IMPL_DnsServiceFreeInstance(win32::Windows::Win32::Dns::DNS_SERVICE_INSTANCE* pInstance) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsServiceBrowse(win32::Windows::Win32::Dns::DNS_SERVICE_BROWSE_REQUEST* pRequest, win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancel) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsServiceBrowseCancel(win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancelHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsServiceResolve(win32::Windows::Win32::Dns::DNS_SERVICE_RESOLVE_REQUEST* pRequest, win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancel) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsServiceResolveCancel(win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancelHandle) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsServiceRegister(win32::Windows::Win32::Dns::DNS_SERVICE_REGISTER_REQUEST* pRequest, win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancel) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsServiceDeRegister(win32::Windows::Win32::Dns::DNS_SERVICE_REGISTER_REQUEST* pRequest, win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancel) noexcept;
    uint32_t __stdcall WIN32_IMPL_DnsServiceRegisterCancel(win32::Windows::Win32::Dns::DNS_SERVICE_CANCEL* pCancelHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsStartMulticastQuery(win32::Windows::Win32::Dns::MDNS_QUERY_REQUEST* pQueryRequest, win32::Windows::Win32::Dns::MDNS_QUERY_HANDLE* pHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_DnsStopMulticastQuery(win32::Windows::Win32::Dns::MDNS_QUERY_HANDLE* pHandle) noexcept;
}
WIN32_IMPL_LINK(DnsQueryConfig, 24)
WIN32_IMPL_LINK(DnsRecordCopyEx, 12)
WIN32_IMPL_LINK(DnsRecordSetCopyEx, 12)
WIN32_IMPL_LINK(DnsRecordCompare, 8)
WIN32_IMPL_LINK(DnsRecordSetCompare, 16)
WIN32_IMPL_LINK(DnsRecordSetDetach, 4)
WIN32_IMPL_LINK(DnsFree, 8)
WIN32_IMPL_LINK(DnsQuery_A, 24)
WIN32_IMPL_LINK(DnsQuery_UTF8, 24)
WIN32_IMPL_LINK(DnsQuery_W, 24)
WIN32_IMPL_LINK(DnsQueryEx, 12)
WIN32_IMPL_LINK(DnsCancelQuery, 4)
WIN32_IMPL_LINK(DnsAcquireContextHandle_W, 12)
WIN32_IMPL_LINK(DnsAcquireContextHandle_A, 12)
WIN32_IMPL_LINK(DnsReleaseContextHandle, 4)
WIN32_IMPL_LINK(DnsModifyRecordsInSet_W, 24)
WIN32_IMPL_LINK(DnsModifyRecordsInSet_A, 24)
WIN32_IMPL_LINK(DnsModifyRecordsInSet_UTF8, 24)
WIN32_IMPL_LINK(DnsReplaceRecordSetW, 20)
WIN32_IMPL_LINK(DnsReplaceRecordSetA, 20)
WIN32_IMPL_LINK(DnsReplaceRecordSetUTF8, 20)
WIN32_IMPL_LINK(DnsValidateName_W, 8)
WIN32_IMPL_LINK(DnsValidateName_A, 8)
WIN32_IMPL_LINK(DnsValidateName_UTF8, 8)
WIN32_IMPL_LINK(DnsNameCompare_A, 8)
WIN32_IMPL_LINK(DnsNameCompare_W, 8)
WIN32_IMPL_LINK(DnsWriteQuestionToBuffer_W, 24)
WIN32_IMPL_LINK(DnsWriteQuestionToBuffer_UTF8, 24)
WIN32_IMPL_LINK(DnsExtractRecordsFromMessage_W, 12)
WIN32_IMPL_LINK(DnsExtractRecordsFromMessage_UTF8, 12)
WIN32_IMPL_LINK(DnsGetProxyInformation, 20)
WIN32_IMPL_LINK(DnsFreeProxyName, 4)
WIN32_IMPL_LINK(DnsConnectionGetProxyInfoForHostUrl, 20)
WIN32_IMPL_LINK(DnsConnectionFreeProxyInfoEx, 4)
WIN32_IMPL_LINK(DnsConnectionGetProxyInfo, 12)
WIN32_IMPL_LINK(DnsConnectionFreeProxyInfo, 4)
WIN32_IMPL_LINK(DnsConnectionSetProxyInfo, 12)
WIN32_IMPL_LINK(DnsConnectionDeleteProxyInfo, 8)
WIN32_IMPL_LINK(DnsConnectionGetProxyList, 8)
WIN32_IMPL_LINK(DnsConnectionFreeProxyList, 4)
WIN32_IMPL_LINK(DnsConnectionGetNameList, 4)
WIN32_IMPL_LINK(DnsConnectionFreeNameList, 4)
WIN32_IMPL_LINK(DnsConnectionUpdateIfIndexTable, 4)
WIN32_IMPL_LINK(DnsConnectionSetPolicyEntries, 8)
WIN32_IMPL_LINK(DnsConnectionDeletePolicyEntries, 4)
WIN32_IMPL_LINK(DnsServiceConstructInstance, 40)
WIN32_IMPL_LINK(DnsServiceCopyInstance, 4)
WIN32_IMPL_LINK(DnsServiceFreeInstance, 4)
WIN32_IMPL_LINK(DnsServiceBrowse, 8)
WIN32_IMPL_LINK(DnsServiceBrowseCancel, 4)
WIN32_IMPL_LINK(DnsServiceResolve, 8)
WIN32_IMPL_LINK(DnsServiceResolveCancel, 4)
WIN32_IMPL_LINK(DnsServiceRegister, 8)
WIN32_IMPL_LINK(DnsServiceDeRegister, 8)
WIN32_IMPL_LINK(DnsServiceRegisterCancel, 4)
WIN32_IMPL_LINK(DnsStartMulticastQuery, 8)
WIN32_IMPL_LINK(DnsStopMulticastQuery, 4)

#pragma endregion abi_methods

#endif
