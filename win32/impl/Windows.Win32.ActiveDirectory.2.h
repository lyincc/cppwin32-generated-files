// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_ActiveDirectory_2_H
#define WIN32_Windows_Win32_ActiveDirectory_2_H
#include "win32/impl/Windows.Win32.ActiveDirectory.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_ADsGetObject(uint16_t* lpszPathName, ::win32::guid* riid, void** ppObject) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsBuildEnumerator(win32::Windows::Win32::ActiveDirectory::IADsContainer* pADsContainer, win32::Windows::Win32::Automation::IEnumVARIANT** ppEnumVariant) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsFreeEnumerator(win32::Windows::Win32::Automation::IEnumVARIANT* pEnumVariant) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsEnumerateNext(win32::Windows::Win32::Automation::IEnumVARIANT* pEnumVariant, uint32_t cElements, win32::Windows::Win32::Automation::VARIANT* pvar, uint32_t* pcElementsFetched) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsBuildVarArrayStr(uint16_t** lppPathNames, uint32_t dwPathNames, win32::Windows::Win32::Automation::VARIANT* pVar) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsBuildVarArrayInt(uint32_t* lpdwObjectTypes, uint32_t dwObjectTypes, win32::Windows::Win32::Automation::VARIANT* pVar) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsOpenObject(uint16_t* lpszPathName, uint16_t* lpszUserName, uint16_t* lpszPassword, uint32_t dwReserved, ::win32::guid* riid, void** ppObject) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsGetLastError(uint32_t* lpError, uint16_t* lpErrorBuf, uint32_t dwErrorBufLen, uint16_t* lpNameBuf, uint32_t dwNameBufLen) noexcept;
    void __stdcall WIN32_IMPL_ADsSetLastError(uint32_t dwErr, uint16_t* pszError, uint16_t* pszProvider) noexcept;
    void* __stdcall WIN32_IMPL_AllocADsMem(uint32_t cb) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_FreeADsMem(void* pMem) noexcept;
    void* __stdcall WIN32_IMPL_ReallocADsMem(void* pOldMem, uint32_t cbOld, uint32_t cbNew) noexcept;
    uint16_t* __stdcall WIN32_IMPL_AllocADsStr(uint16_t* pStr) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_FreeADsStr(uint16_t* pStr) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ReallocADsStr(uint16_t** ppStr, uint16_t* pStr) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsEncodeBinaryData(uint8_t* pbSrcData, uint32_t dwSrcLen, uint16_t** ppszDestData) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsDecodeBinaryData(uint16_t* szSrcData, uint8_t** ppbDestData, uint32_t* pdwDestLen) noexcept;
    int32_t __stdcall WIN32_IMPL_PropVariantToAdsType(win32::Windows::Win32::Automation::VARIANT* pVariant, uint32_t dwNumVariant, win32::Windows::Win32::ActiveDirectory::ADSVALUE** ppAdsValues, uint32_t* pdwNumValues) noexcept;
    int32_t __stdcall WIN32_IMPL_AdsTypeToPropVariant(win32::Windows::Win32::ActiveDirectory::ADSVALUE* pAdsValues, uint32_t dwNumValues, win32::Windows::Win32::Automation::VARIANT* pVariant) noexcept;
    void __stdcall WIN32_IMPL_AdsFreeAdsValues(win32::Windows::Win32::ActiveDirectory::ADSVALUE* pAdsValues, uint32_t dwNumValues) noexcept;
    int32_t __stdcall WIN32_IMPL_BinarySDToSecurityDescriptor(void* pSecurityDescriptor, win32::Windows::Win32::Automation::VARIANT* pVarsec, uint16_t* pszServerName, uint16_t* userName, uint16_t* passWord, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_SecurityDescriptorToBinarySD(win32::Windows::Win32::Automation::VARIANT vVarSecDes, void** ppSecurityDescriptor, uint32_t* pdwSDLength, uint16_t* pszServerName, uint16_t* userName, uint16_t* passWord, uint32_t dwFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_DsBrowseForContainerW(win32::Windows::Win32::ActiveDirectory::DSBROWSEINFOW* pInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_DsBrowseForContainerA(win32::Windows::Win32::ActiveDirectory::DSBROWSEINFOA* pInfo) noexcept;
    win32::Windows::Win32::Gdi::HICON __stdcall WIN32_IMPL_DsGetIcon(uint32_t dwFlags, uint16_t* pszObjectClass, int32_t cxImage, int32_t cyImage) noexcept;
    int32_t __stdcall WIN32_IMPL_DsGetFriendlyClassName(uint16_t* pszObjectClass, uint16_t* pszBuffer, uint32_t cchBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_ADsPropCreateNotifyObj(win32::Windows::Win32::Com::IDataObject* pAppThdDataObj, uint16_t* pwzADsObjName, win32::Windows::Win32::WindowsAndMessaging::HWND* phNotifyObj) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropGetInitInfo(win32::Windows::Win32::WindowsAndMessaging::HWND hNotifyObj, win32::Windows::Win32::ActiveDirectory::ADSPROPINITPARAMS* pInitParams) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropSetHwndWithTitle(win32::Windows::Win32::WindowsAndMessaging::HWND hNotifyObj, win32::Windows::Win32::WindowsAndMessaging::HWND hPage, int8_t* ptzTitle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropSetHwnd(win32::Windows::Win32::WindowsAndMessaging::HWND hNotifyObj, win32::Windows::Win32::WindowsAndMessaging::HWND hPage) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropCheckIfWritable(uint16_t* pwzAttr, win32::Windows::Win32::ActiveDirectory::ADS_ATTR_INFO* pWritableAttrs) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropSendErrorMessage(win32::Windows::Win32::WindowsAndMessaging::HWND hNotifyObj, win32::Windows::Win32::ActiveDirectory::ADSPROPERROR* pError) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_ADsPropShowErrorDialog(win32::Windows::Win32::WindowsAndMessaging::HWND hNotifyObj, win32::Windows::Win32::WindowsAndMessaging::HWND hPage) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMakeSpnW(uint16_t* ServiceClass, uint16_t* ServiceName, uint16_t* InstanceName, uint16_t InstancePort, uint16_t* Referrer, uint32_t* pcSpnLength, uint16_t* pszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMakeSpnA(int8_t* ServiceClass, int8_t* ServiceName, int8_t* InstanceName, uint16_t InstancePort, int8_t* Referrer, uint32_t* pcSpnLength, int8_t* pszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpnA(int8_t* pszSpn, uint32_t* pcServiceClass, int8_t* ServiceClass, uint32_t* pcServiceName, int8_t* ServiceName, uint32_t* pcInstanceName, int8_t* InstanceName, uint16_t* pInstancePort) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpnW(uint16_t* pszSpn, uint32_t* pcServiceClass, uint16_t* ServiceClass, uint32_t* pcServiceName, uint16_t* ServiceName, uint32_t* pcInstanceName, uint16_t* InstanceName, uint16_t* pInstancePort) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsQuoteRdnValueW(uint32_t cUnquotedRdnValueLength, uint16_t* psUnquotedRdnValue, uint32_t* pcQuotedRdnValueLength, uint16_t* psQuotedRdnValue) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsQuoteRdnValueA(uint32_t cUnquotedRdnValueLength, int8_t* psUnquotedRdnValue, uint32_t* pcQuotedRdnValueLength, int8_t* psQuotedRdnValue) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsUnquoteRdnValueW(uint32_t cQuotedRdnValueLength, uint16_t* psQuotedRdnValue, uint32_t* pcUnquotedRdnValueLength, uint16_t* psUnquotedRdnValue) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsUnquoteRdnValueA(uint32_t cQuotedRdnValueLength, int8_t* psQuotedRdnValue, uint32_t* pcUnquotedRdnValueLength, int8_t* psUnquotedRdnValue) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetRdnW(uint16_t** ppDN, uint32_t* pcDN, uint16_t** ppKey, uint32_t* pcKey, uint16_t** ppVal, uint32_t* pcVal) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsCrackUnquotedMangledRdnW(uint16_t* pszRDN, uint32_t cchRDN, ::win32::guid* pGuid, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR* peDsMangleFor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsCrackUnquotedMangledRdnA(int8_t* pszRDN, uint32_t cchRDN, ::win32::guid* pGuid, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR* peDsMangleFor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsIsMangledRdnValueW(uint16_t* pszRdn, uint32_t cRdn, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR eDsMangleForDesired) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsIsMangledRdnValueA(int8_t* pszRdn, uint32_t cRdn, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR eDsMangleForDesired) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsIsMangledDnA(int8_t* pszDn, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR eDsMangleFor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_DsIsMangledDnW(uint16_t* pszDn, win32::Windows::Win32::ActiveDirectory::DS_MANGLE_FOR eDsMangleFor) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpn2A(int8_t* pszSpn, uint32_t cSpn, uint32_t* pcServiceClass, int8_t* ServiceClass, uint32_t* pcServiceName, int8_t* ServiceName, uint32_t* pcInstanceName, int8_t* InstanceName, uint16_t* pInstancePort) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpn2W(uint16_t* pszSpn, uint32_t cSpn, uint32_t* pcServiceClass, uint16_t* ServiceClass, uint32_t* pcServiceName, uint16_t* ServiceName, uint32_t* pcInstanceName, uint16_t* InstanceName, uint16_t* pInstancePort) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpn3W(uint16_t* pszSpn, uint32_t cSpn, uint32_t* pcHostName, uint16_t* HostName, uint32_t* pcInstanceName, uint16_t* InstanceName, uint16_t* pPortNumber, uint32_t* pcDomainName, uint16_t* DomainName, uint32_t* pcRealmName, uint16_t* RealmName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackSpn4W(uint16_t* pszSpn, uint32_t cSpn, uint32_t* pcHostName, uint16_t* HostName, uint32_t* pcInstanceName, uint16_t* InstanceName, uint32_t* pcPortName, uint16_t* PortName, uint32_t* pcDomainName, uint16_t* DomainName, uint32_t* pcRealmName, uint16_t* RealmName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindW(uint16_t* DomainControllerName, uint16_t* DnsDomainName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindA(int8_t* DomainControllerName, int8_t* DnsDomainName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithCredW(uint16_t* DomainControllerName, uint16_t* DnsDomainName, void* AuthIdentity, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithCredA(int8_t* DomainControllerName, int8_t* DnsDomainName, void* AuthIdentity, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithSpnW(uint16_t* DomainControllerName, uint16_t* DnsDomainName, void* AuthIdentity, uint16_t* ServicePrincipalName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithSpnA(int8_t* DomainControllerName, int8_t* DnsDomainName, void* AuthIdentity, int8_t* ServicePrincipalName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithSpnExW(uint16_t* DomainControllerName, uint16_t* DnsDomainName, void* AuthIdentity, uint16_t* ServicePrincipalName, uint32_t BindFlags, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindWithSpnExA(int8_t* DomainControllerName, int8_t* DnsDomainName, void* AuthIdentity, int8_t* ServicePrincipalName, uint32_t BindFlags, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindByInstanceW(uint16_t* ServerName, uint16_t* Annotation, ::win32::guid* InstanceGuid, uint16_t* DnsDomainName, void* AuthIdentity, uint16_t* ServicePrincipalName, uint32_t BindFlags, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindByInstanceA(int8_t* ServerName, int8_t* Annotation, ::win32::guid* InstanceGuid, int8_t* DnsDomainName, void* AuthIdentity, int8_t* ServicePrincipalName, uint32_t BindFlags, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindToISTGW(uint16_t* SiteName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindToISTGA(int8_t* SiteName, win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsBindingSetTimeout(win32::Windows::Win32::SystemServices::HANDLE hDS, uint32_t cTimeoutSecs) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsUnBindW(win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsUnBindA(win32::Windows::Win32::SystemServices::HANDLE* phDS) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMakePasswordCredentialsW(uint16_t* User, uint16_t* Domain, uint16_t* Password, void** pAuthIdentity) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMakePasswordCredentialsA(int8_t* User, int8_t* Domain, int8_t* Password, void** pAuthIdentity) noexcept;
    void __stdcall WIN32_IMPL_DsFreePasswordCredentials(void* AuthIdentity) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackNamesW(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_NAME_FLAGS flags, win32::Windows::Win32::ActiveDirectory::DS_NAME_FORMAT formatOffered, win32::Windows::Win32::ActiveDirectory::DS_NAME_FORMAT formatDesired, uint32_t cNames, uint16_t** rpNames, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppResult) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsCrackNamesA(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_NAME_FLAGS flags, win32::Windows::Win32::ActiveDirectory::DS_NAME_FORMAT formatOffered, win32::Windows::Win32::ActiveDirectory::DS_NAME_FORMAT formatDesired, uint32_t cNames, int8_t** rpNames, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppResult) noexcept;
    void __stdcall WIN32_IMPL_DsFreeNameResultW(win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW* pResult) noexcept;
    void __stdcall WIN32_IMPL_DsFreeNameResultA(win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA* pResult) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetSpnA(win32::Windows::Win32::ActiveDirectory::DS_SPN_NAME_TYPE ServiceType, int8_t* ServiceClass, int8_t* ServiceName, uint16_t InstancePort, uint16_t cInstanceNames, int8_t** pInstanceNames, uint16_t* pInstancePorts, uint32_t* pcSpn, int8_t*** prpszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetSpnW(win32::Windows::Win32::ActiveDirectory::DS_SPN_NAME_TYPE ServiceType, uint16_t* ServiceClass, uint16_t* ServiceName, uint16_t InstancePort, uint16_t cInstanceNames, uint16_t** pInstanceNames, uint16_t* pInstancePorts, uint32_t* pcSpn, uint16_t*** prpszSpn) noexcept;
    void __stdcall WIN32_IMPL_DsFreeSpnArrayA(uint32_t cSpn, int8_t** rpszSpn) noexcept;
    void __stdcall WIN32_IMPL_DsFreeSpnArrayW(uint32_t cSpn, uint16_t** rpszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsWriteAccountSpnA(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_SPN_WRITE_OP Operation, int8_t* pszAccount, uint32_t cSpn, int8_t** rpszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsWriteAccountSpnW(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_SPN_WRITE_OP Operation, uint16_t* pszAccount, uint32_t cSpn, uint16_t** rpszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsClientMakeSpnForTargetServerW(uint16_t* ServiceClass, uint16_t* ServiceName, uint32_t* pcSpnLength, uint16_t* pszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsClientMakeSpnForTargetServerA(int8_t* ServiceClass, int8_t* ServiceName, uint32_t* pcSpnLength, int8_t* pszSpn) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsServerRegisterSpnA(win32::Windows::Win32::ActiveDirectory::DS_SPN_WRITE_OP Operation, int8_t* ServiceClass, int8_t* UserObjectDN) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsServerRegisterSpnW(win32::Windows::Win32::ActiveDirectory::DS_SPN_WRITE_OP Operation, uint16_t* ServiceClass, uint16_t* UserObjectDN) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaSyncA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, ::win32::guid* pUuidDsaSrc, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaSyncW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, ::win32::guid* pUuidDsaSrc, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaAddA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, int8_t* SourceDsaDn, int8_t* TransportDn, int8_t* SourceDsaAddress, win32::Windows::Win32::ActiveDirectory::SCHEDULE* pSchedule, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaAddW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, uint16_t* SourceDsaDn, uint16_t* TransportDn, uint16_t* SourceDsaAddress, win32::Windows::Win32::ActiveDirectory::SCHEDULE* pSchedule, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaDelA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, int8_t* DsaSrc, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaDelW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, uint16_t* DsaSrc, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaModifyA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, ::win32::guid* pUuidSourceDsa, int8_t* TransportDn, int8_t* SourceDsaAddress, win32::Windows::Win32::ActiveDirectory::SCHEDULE* pSchedule, uint32_t ReplicaFlags, uint32_t ModifyFields, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaModifyW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, ::win32::guid* pUuidSourceDsa, uint16_t* TransportDn, uint16_t* SourceDsaAddress, win32::Windows::Win32::ActiveDirectory::SCHEDULE* pSchedule, uint32_t ReplicaFlags, uint32_t ModifyFields, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaUpdateRefsA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, int8_t* DsaDest, ::win32::guid* pUuidDsaDest, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaUpdateRefsW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, uint16_t* DsaDest, ::win32::guid* pUuidDsaDest, uint32_t Options) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaSyncAllA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* pszNameContext, uint32_t ulFlags, win32::Windows::Win32::SystemServices::BOOL*********** pFnCallBack, void* pCallbackData, win32::Windows::Win32::ActiveDirectory::DS_REPSYNCALL_ERRINFOA*** pErrors) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaSyncAllW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* pszNameContext, uint32_t ulFlags, win32::Windows::Win32::SystemServices::BOOL*********** pFnCallBack, void* pCallbackData, win32::Windows::Win32::ActiveDirectory::DS_REPSYNCALL_ERRINFOW*** pErrors) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsRemoveDsServerW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* ServerDN, uint16_t* DomainDN, int32_t* fLastDcInDomain, win32::Windows::Win32::SystemServices::BOOL fCommit) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsRemoveDsServerA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* ServerDN, int8_t* DomainDN, int32_t* fLastDcInDomain, win32::Windows::Win32::SystemServices::BOOL fCommit) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsRemoveDsDomainW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* DomainDN) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsRemoveDsDomainA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* DomainDN) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListSitesA(win32::Windows::Win32::SystemServices::HANDLE hDs, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppSites) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListSitesW(win32::Windows::Win32::SystemServices::HANDLE hDs, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppSites) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListServersInSiteA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppServers) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListServersInSiteW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppServers) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListDomainsInSiteA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppDomains) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListDomainsInSiteW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppDomains) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListServersForDomainInSiteA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* domain, int8_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppServers) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListServersForDomainInSiteW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* domain, uint16_t* site, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppServers) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListInfoForServerA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* server, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListInfoForServerW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* server, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListRolesA(win32::Windows::Win32::SystemServices::HANDLE hDs, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTA** ppRoles) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsListRolesW(win32::Windows::Win32::SystemServices::HANDLE hDs, win32::Windows::Win32::ActiveDirectory::DS_NAME_RESULTW** ppRoles) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsQuerySitesByCostW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* pwszFromSite, uint16_t** rgwszToSites, uint32_t cToSites, uint32_t dwFlags, win32::Windows::Win32::ActiveDirectory::DS_SITE_COST_INFO** prgSiteInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsQuerySitesByCostA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* pszFromSite, int8_t** rgszToSites, uint32_t cToSites, uint32_t dwFlags, win32::Windows::Win32::ActiveDirectory::DS_SITE_COST_INFO** prgSiteInfo) noexcept;
    void __stdcall WIN32_IMPL_DsQuerySitesFree(win32::Windows::Win32::ActiveDirectory::DS_SITE_COST_INFO* rgSiteInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMapSchemaGuidsA(win32::Windows::Win32::SystemServices::HANDLE hDs, uint32_t cGuids, ::win32::guid* rGuids, win32::Windows::Win32::ActiveDirectory::DS_SCHEMA_GUID_MAPA** ppGuidMap) noexcept;
    void __stdcall WIN32_IMPL_DsFreeSchemaGuidMapA(win32::Windows::Win32::ActiveDirectory::DS_SCHEMA_GUID_MAPA* pGuidMap) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMapSchemaGuidsW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint32_t cGuids, ::win32::guid* rGuids, win32::Windows::Win32::ActiveDirectory::DS_SCHEMA_GUID_MAPW** ppGuidMap) noexcept;
    void __stdcall WIN32_IMPL_DsFreeSchemaGuidMapW(win32::Windows::Win32::ActiveDirectory::DS_SCHEMA_GUID_MAPW* pGuidMap) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDomainControllerInfoA(win32::Windows::Win32::SystemServices::HANDLE hDs, int8_t* DomainName, uint32_t InfoLevel, uint32_t* pcOut, void** ppInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDomainControllerInfoW(win32::Windows::Win32::SystemServices::HANDLE hDs, uint16_t* DomainName, uint32_t InfoLevel, uint32_t* pcOut, void** ppInfo) noexcept;
    void __stdcall WIN32_IMPL_DsFreeDomainControllerInfoA(uint32_t InfoLevel, uint32_t cInfo, void* pInfo) noexcept;
    void __stdcall WIN32_IMPL_DsFreeDomainControllerInfoW(uint32_t InfoLevel, uint32_t cInfo, void* pInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaConsistencyCheck(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_KCC_TASKID TaskID, uint32_t dwFlags) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaVerifyObjectsW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint16_t* NameContext, ::win32::guid* pUuidDsaSrc, uint32_t ulOptions) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaVerifyObjectsA(win32::Windows::Win32::SystemServices::HANDLE hDS, int8_t* NameContext, ::win32::guid* pUuidDsaSrc, uint32_t ulOptions) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaGetInfoW(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_REPL_INFO_TYPE InfoType, uint16_t* pszObject, ::win32::guid* puuidForSourceDsaObjGuid, void** ppInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsReplicaGetInfo2W(win32::Windows::Win32::SystemServices::HANDLE hDS, win32::Windows::Win32::ActiveDirectory::DS_REPL_INFO_TYPE InfoType, uint16_t* pszObject, ::win32::guid* puuidForSourceDsaObjGuid, uint16_t* pszAttributeName, uint16_t* pszValue, uint32_t dwFlags, uint32_t dwEnumerationContext, void** ppInfo) noexcept;
    void __stdcall WIN32_IMPL_DsReplicaFreeInfo(win32::Windows::Win32::ActiveDirectory::DS_REPL_INFO_TYPE InfoType, void* pInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddSidHistoryW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint32_t Flags, uint16_t* SrcDomain, uint16_t* SrcPrincipal, uint16_t* SrcDomainController, void* SrcDomainCreds, uint16_t* DstDomain, uint16_t* DstPrincipal) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddSidHistoryA(win32::Windows::Win32::SystemServices::HANDLE hDS, uint32_t Flags, int8_t* SrcDomain, int8_t* SrcPrincipal, int8_t* SrcDomainController, void* SrcDomainCreds, int8_t* DstDomain, int8_t* DstPrincipal) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsInheritSecurityIdentityW(win32::Windows::Win32::SystemServices::HANDLE hDS, uint32_t Flags, uint16_t* SrcPrincipal, uint16_t* DstPrincipal) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsInheritSecurityIdentityA(win32::Windows::Win32::SystemServices::HANDLE hDS, uint32_t Flags, int8_t* SrcPrincipal, int8_t* DstPrincipal) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsRoleGetPrimaryDomainInformation(uint16_t* lpServer, win32::Windows::Win32::ActiveDirectory::DSROLE_PRIMARY_DOMAIN_INFO_LEVEL InfoLevel, uint8_t** Buffer) noexcept;
    void __stdcall WIN32_IMPL_DsRoleFreeMemory(void* Buffer) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcNameA(int8_t* ComputerName, int8_t* DomainName, ::win32::guid* DomainGuid, int8_t* SiteName, uint32_t Flags, win32::Windows::Win32::ActiveDirectory::DOMAIN_CONTROLLER_INFOA** DomainControllerInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcNameW(uint16_t* ComputerName, uint16_t* DomainName, ::win32::guid* DomainGuid, uint16_t* SiteName, uint32_t Flags, win32::Windows::Win32::ActiveDirectory::DOMAIN_CONTROLLER_INFOW** DomainControllerInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetSiteNameA(int8_t* ComputerName, int8_t** SiteName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetSiteNameW(uint16_t* ComputerName, uint16_t** SiteName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsValidateSubnetNameW(uint16_t* SubnetName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsValidateSubnetNameA(int8_t* SubnetName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddressToSiteNamesW(uint16_t* ComputerName, uint32_t EntryCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS* SocketAddresses, uint16_t*** SiteNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddressToSiteNamesA(int8_t* ComputerName, uint32_t EntryCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS* SocketAddresses, int8_t*** SiteNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddressToSiteNamesExW(uint16_t* ComputerName, uint32_t EntryCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS* SocketAddresses, uint16_t*** SiteNames, uint16_t*** SubnetNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsAddressToSiteNamesExA(int8_t* ComputerName, uint32_t EntryCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS* SocketAddresses, int8_t*** SiteNames, int8_t*** SubnetNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsEnumerateDomainTrustsW(uint16_t* ServerName, uint32_t Flags, win32::Windows::Win32::ActiveDirectory::DS_DOMAIN_TRUSTSW** Domains, uint32_t* DomainCount) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsEnumerateDomainTrustsA(int8_t* ServerName, uint32_t Flags, win32::Windows::Win32::ActiveDirectory::DS_DOMAIN_TRUSTSA** Domains, uint32_t* DomainCount) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetForestTrustInformationW(uint16_t* ServerName, uint16_t* TrustedDomainName, uint32_t Flags, win32::Windows::Win32::Security::LSA_FOREST_TRUST_INFORMATION** ForestTrustInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsMergeForestTrustInformationW(uint16_t* DomainName, win32::Windows::Win32::Security::LSA_FOREST_TRUST_INFORMATION* NewForestTrustInfo, win32::Windows::Win32::Security::LSA_FOREST_TRUST_INFORMATION* OldForestTrustInfo, win32::Windows::Win32::Security::LSA_FOREST_TRUST_INFORMATION** MergedForestTrustInfo) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcSiteCoverageW(uint16_t* ServerName, uint32_t* EntryCount, uint16_t*** SiteNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcSiteCoverageA(int8_t* ServerName, uint32_t* EntryCount, int8_t*** SiteNames) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsDeregisterDnsHostRecordsW(uint16_t* ServerName, uint16_t* DnsDomainName, ::win32::guid* DomainGuid, ::win32::guid* DsaGuid, uint16_t* DnsHostName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsDeregisterDnsHostRecordsA(int8_t* ServerName, int8_t* DnsDomainName, ::win32::guid* DomainGuid, ::win32::guid* DsaGuid, int8_t* DnsHostName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcOpenW(uint16_t* DnsName, uint32_t OptionFlags, uint16_t* SiteName, ::win32::guid* DomainGuid, uint16_t* DnsForestName, uint32_t DcFlags, win32::Windows::Win32::ActiveDirectory::GetDcContextHandle* RetGetDcContext) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcOpenA(int8_t* DnsName, uint32_t OptionFlags, int8_t* SiteName, ::win32::guid* DomainGuid, int8_t* DnsForestName, uint32_t DcFlags, win32::Windows::Win32::ActiveDirectory::GetDcContextHandle* RetGetDcContext) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcNextW(win32::Windows::Win32::SystemServices::HANDLE GetDcContextHandle, uint32_t* SockAddressCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS** SockAddresses, uint16_t** DnsHostName) noexcept;
    uint32_t __stdcall WIN32_IMPL_DsGetDcNextA(win32::Windows::Win32::SystemServices::HANDLE GetDcContextHandle, uint32_t* SockAddressCount, win32::Windows::Win32::WinSock::SOCKET_ADDRESS** SockAddresses, int8_t** DnsHostName) noexcept;
    void __stdcall WIN32_IMPL_DsGetDcCloseW(win32::Windows::Win32::SystemServices::HANDLE GetDcContextHandle) noexcept;
}
WIN32_IMPL_LINK(ADsGetObject, 12)
WIN32_IMPL_LINK(ADsBuildEnumerator, 8)
WIN32_IMPL_LINK(ADsFreeEnumerator, 4)
WIN32_IMPL_LINK(ADsEnumerateNext, 16)
WIN32_IMPL_LINK(ADsBuildVarArrayStr, 12)
WIN32_IMPL_LINK(ADsBuildVarArrayInt, 12)
WIN32_IMPL_LINK(ADsOpenObject, 24)
WIN32_IMPL_LINK(ADsGetLastError, 20)
WIN32_IMPL_LINK(ADsSetLastError, 12)
WIN32_IMPL_LINK(AllocADsMem, 4)
WIN32_IMPL_LINK(FreeADsMem, 4)
WIN32_IMPL_LINK(ReallocADsMem, 12)
WIN32_IMPL_LINK(AllocADsStr, 4)
WIN32_IMPL_LINK(FreeADsStr, 4)
WIN32_IMPL_LINK(ReallocADsStr, 8)
WIN32_IMPL_LINK(ADsEncodeBinaryData, 12)
WIN32_IMPL_LINK(ADsDecodeBinaryData, 12)
WIN32_IMPL_LINK(PropVariantToAdsType, 16)
WIN32_IMPL_LINK(AdsTypeToPropVariant, 12)
WIN32_IMPL_LINK(AdsFreeAdsValues, 8)
WIN32_IMPL_LINK(BinarySDToSecurityDescriptor, 24)
WIN32_IMPL_LINK(SecurityDescriptorToBinarySD, 28)
WIN32_IMPL_LINK(DsBrowseForContainerW, 4)
WIN32_IMPL_LINK(DsBrowseForContainerA, 4)
WIN32_IMPL_LINK(DsGetIcon, 16)
WIN32_IMPL_LINK(DsGetFriendlyClassName, 12)
WIN32_IMPL_LINK(ADsPropCreateNotifyObj, 12)
WIN32_IMPL_LINK(ADsPropGetInitInfo, 8)
WIN32_IMPL_LINK(ADsPropSetHwndWithTitle, 12)
WIN32_IMPL_LINK(ADsPropSetHwnd, 8)
WIN32_IMPL_LINK(ADsPropCheckIfWritable, 8)
WIN32_IMPL_LINK(ADsPropSendErrorMessage, 8)
WIN32_IMPL_LINK(ADsPropShowErrorDialog, 8)
WIN32_IMPL_LINK(DsMakeSpnW, 28)
WIN32_IMPL_LINK(DsMakeSpnA, 28)
WIN32_IMPL_LINK(DsCrackSpnA, 32)
WIN32_IMPL_LINK(DsCrackSpnW, 32)
WIN32_IMPL_LINK(DsQuoteRdnValueW, 16)
WIN32_IMPL_LINK(DsQuoteRdnValueA, 16)
WIN32_IMPL_LINK(DsUnquoteRdnValueW, 16)
WIN32_IMPL_LINK(DsUnquoteRdnValueA, 16)
WIN32_IMPL_LINK(DsGetRdnW, 24)
WIN32_IMPL_LINK(DsCrackUnquotedMangledRdnW, 16)
WIN32_IMPL_LINK(DsCrackUnquotedMangledRdnA, 16)
WIN32_IMPL_LINK(DsIsMangledRdnValueW, 12)
WIN32_IMPL_LINK(DsIsMangledRdnValueA, 12)
WIN32_IMPL_LINK(DsIsMangledDnA, 8)
WIN32_IMPL_LINK(DsIsMangledDnW, 8)
WIN32_IMPL_LINK(DsCrackSpn2A, 36)
WIN32_IMPL_LINK(DsCrackSpn2W, 36)
WIN32_IMPL_LINK(DsCrackSpn3W, 44)
WIN32_IMPL_LINK(DsCrackSpn4W, 48)
WIN32_IMPL_LINK(DsBindW, 12)
WIN32_IMPL_LINK(DsBindA, 12)
WIN32_IMPL_LINK(DsBindWithCredW, 16)
WIN32_IMPL_LINK(DsBindWithCredA, 16)
WIN32_IMPL_LINK(DsBindWithSpnW, 20)
WIN32_IMPL_LINK(DsBindWithSpnA, 20)
WIN32_IMPL_LINK(DsBindWithSpnExW, 24)
WIN32_IMPL_LINK(DsBindWithSpnExA, 24)
WIN32_IMPL_LINK(DsBindByInstanceW, 32)
WIN32_IMPL_LINK(DsBindByInstanceA, 32)
WIN32_IMPL_LINK(DsBindToISTGW, 8)
WIN32_IMPL_LINK(DsBindToISTGA, 8)
WIN32_IMPL_LINK(DsBindingSetTimeout, 8)
WIN32_IMPL_LINK(DsUnBindW, 4)
WIN32_IMPL_LINK(DsUnBindA, 4)
WIN32_IMPL_LINK(DsMakePasswordCredentialsW, 16)
WIN32_IMPL_LINK(DsMakePasswordCredentialsA, 16)
WIN32_IMPL_LINK(DsFreePasswordCredentials, 4)
WIN32_IMPL_LINK(DsCrackNamesW, 28)
WIN32_IMPL_LINK(DsCrackNamesA, 28)
WIN32_IMPL_LINK(DsFreeNameResultW, 4)
WIN32_IMPL_LINK(DsFreeNameResultA, 4)
WIN32_IMPL_LINK(DsGetSpnA, 36)
WIN32_IMPL_LINK(DsGetSpnW, 36)
WIN32_IMPL_LINK(DsFreeSpnArrayA, 8)
WIN32_IMPL_LINK(DsFreeSpnArrayW, 8)
WIN32_IMPL_LINK(DsWriteAccountSpnA, 20)
WIN32_IMPL_LINK(DsWriteAccountSpnW, 20)
WIN32_IMPL_LINK(DsClientMakeSpnForTargetServerW, 16)
WIN32_IMPL_LINK(DsClientMakeSpnForTargetServerA, 16)
WIN32_IMPL_LINK(DsServerRegisterSpnA, 12)
WIN32_IMPL_LINK(DsServerRegisterSpnW, 12)
WIN32_IMPL_LINK(DsReplicaSyncA, 16)
WIN32_IMPL_LINK(DsReplicaSyncW, 16)
WIN32_IMPL_LINK(DsReplicaAddA, 28)
WIN32_IMPL_LINK(DsReplicaAddW, 28)
WIN32_IMPL_LINK(DsReplicaDelA, 16)
WIN32_IMPL_LINK(DsReplicaDelW, 16)
WIN32_IMPL_LINK(DsReplicaModifyA, 36)
WIN32_IMPL_LINK(DsReplicaModifyW, 36)
WIN32_IMPL_LINK(DsReplicaUpdateRefsA, 20)
WIN32_IMPL_LINK(DsReplicaUpdateRefsW, 20)
WIN32_IMPL_LINK(DsReplicaSyncAllA, 24)
WIN32_IMPL_LINK(DsReplicaSyncAllW, 24)
WIN32_IMPL_LINK(DsRemoveDsServerW, 20)
WIN32_IMPL_LINK(DsRemoveDsServerA, 20)
WIN32_IMPL_LINK(DsRemoveDsDomainW, 8)
WIN32_IMPL_LINK(DsRemoveDsDomainA, 8)
WIN32_IMPL_LINK(DsListSitesA, 8)
WIN32_IMPL_LINK(DsListSitesW, 8)
WIN32_IMPL_LINK(DsListServersInSiteA, 12)
WIN32_IMPL_LINK(DsListServersInSiteW, 12)
WIN32_IMPL_LINK(DsListDomainsInSiteA, 12)
WIN32_IMPL_LINK(DsListDomainsInSiteW, 12)
WIN32_IMPL_LINK(DsListServersForDomainInSiteA, 16)
WIN32_IMPL_LINK(DsListServersForDomainInSiteW, 16)
WIN32_IMPL_LINK(DsListInfoForServerA, 12)
WIN32_IMPL_LINK(DsListInfoForServerW, 12)
WIN32_IMPL_LINK(DsListRolesA, 8)
WIN32_IMPL_LINK(DsListRolesW, 8)
WIN32_IMPL_LINK(DsQuerySitesByCostW, 24)
WIN32_IMPL_LINK(DsQuerySitesByCostA, 24)
WIN32_IMPL_LINK(DsQuerySitesFree, 4)
WIN32_IMPL_LINK(DsMapSchemaGuidsA, 16)
WIN32_IMPL_LINK(DsFreeSchemaGuidMapA, 4)
WIN32_IMPL_LINK(DsMapSchemaGuidsW, 16)
WIN32_IMPL_LINK(DsFreeSchemaGuidMapW, 4)
WIN32_IMPL_LINK(DsGetDomainControllerInfoA, 20)
WIN32_IMPL_LINK(DsGetDomainControllerInfoW, 20)
WIN32_IMPL_LINK(DsFreeDomainControllerInfoA, 12)
WIN32_IMPL_LINK(DsFreeDomainControllerInfoW, 12)
WIN32_IMPL_LINK(DsReplicaConsistencyCheck, 12)
WIN32_IMPL_LINK(DsReplicaVerifyObjectsW, 16)
WIN32_IMPL_LINK(DsReplicaVerifyObjectsA, 16)
WIN32_IMPL_LINK(DsReplicaGetInfoW, 20)
WIN32_IMPL_LINK(DsReplicaGetInfo2W, 36)
WIN32_IMPL_LINK(DsReplicaFreeInfo, 8)
WIN32_IMPL_LINK(DsAddSidHistoryW, 32)
WIN32_IMPL_LINK(DsAddSidHistoryA, 32)
WIN32_IMPL_LINK(DsInheritSecurityIdentityW, 16)
WIN32_IMPL_LINK(DsInheritSecurityIdentityA, 16)
WIN32_IMPL_LINK(DsRoleGetPrimaryDomainInformation, 12)
WIN32_IMPL_LINK(DsRoleFreeMemory, 4)
WIN32_IMPL_LINK(DsGetDcNameA, 24)
WIN32_IMPL_LINK(DsGetDcNameW, 24)
WIN32_IMPL_LINK(DsGetSiteNameA, 8)
WIN32_IMPL_LINK(DsGetSiteNameW, 8)
WIN32_IMPL_LINK(DsValidateSubnetNameW, 4)
WIN32_IMPL_LINK(DsValidateSubnetNameA, 4)
WIN32_IMPL_LINK(DsAddressToSiteNamesW, 16)
WIN32_IMPL_LINK(DsAddressToSiteNamesA, 16)
WIN32_IMPL_LINK(DsAddressToSiteNamesExW, 20)
WIN32_IMPL_LINK(DsAddressToSiteNamesExA, 20)
WIN32_IMPL_LINK(DsEnumerateDomainTrustsW, 16)
WIN32_IMPL_LINK(DsEnumerateDomainTrustsA, 16)
WIN32_IMPL_LINK(DsGetForestTrustInformationW, 16)
WIN32_IMPL_LINK(DsMergeForestTrustInformationW, 16)
WIN32_IMPL_LINK(DsGetDcSiteCoverageW, 12)
WIN32_IMPL_LINK(DsGetDcSiteCoverageA, 12)
WIN32_IMPL_LINK(DsDeregisterDnsHostRecordsW, 20)
WIN32_IMPL_LINK(DsDeregisterDnsHostRecordsA, 20)
WIN32_IMPL_LINK(DsGetDcOpenW, 28)
WIN32_IMPL_LINK(DsGetDcOpenA, 28)
WIN32_IMPL_LINK(DsGetDcNextW, 16)
WIN32_IMPL_LINK(DsGetDcNextA, 16)
WIN32_IMPL_LINK(DsGetDcCloseW, 4)

#pragma endregion abi_methods

#endif
