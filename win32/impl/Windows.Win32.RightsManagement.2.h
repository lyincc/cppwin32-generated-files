// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_RightsManagement_2_H
#define WIN32_Windows_Win32_RightsManagement_2_H
#include "win32/impl/Windows.Win32.RightsManagement.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_DRMSetGlobalOptions(win32::Windows::Win32::RightsManagement::DRMGLOBALOPTIONS eGlobalOptions, void* pvdata, uint32_t dwlen) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetClientVersion(win32::Windows::Win32::RightsManagement::DRM_CLIENT_VERSION_INFO* pDRMClientVersionInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMInitEnvironment(win32::Windows::Win32::RightsManagement::DRMSECURITYPROVIDERTYPE eSecurityProviderType, win32::Windows::Win32::RightsManagement::DRMSPECTYPE eSpecification, uint16_t* wszSecurityProvider, uint16_t* wszManifestCredentials, uint16_t* wszMachineCredentials, uint32_t* phEnv, uint32_t* phDefaultLibrary) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMLoadLibrary(uint32_t hEnv, win32::Windows::Win32::RightsManagement::DRMSPECTYPE eSpecification, uint16_t* wszLibraryProvider, uint16_t* wszCredentials, uint32_t* phLibrary) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateEnablingPrincipal(uint32_t hEnv, uint32_t hLibrary, uint16_t* wszObject, win32::Windows::Win32::RightsManagement::DRMID* pidPrincipal, uint16_t* wszCredentials, uint32_t* phEnablingPrincipal) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCloseHandle(uint32_t handle) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCloseEnvironmentHandle(uint32_t hEnv) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDuplicateHandle(uint32_t hToCopy, uint32_t* phCopy) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDuplicateEnvironmentHandle(uint32_t hToCopy, uint32_t* phCopy) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMRegisterRevocationList(uint32_t hEnv, uint16_t* wszRevocationList) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCheckSecurity(uint32_t hEnv, uint32_t cLevel) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMRegisterContent(win32::Windows::Win32::SystemServices::BOOL fRegister) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMEncrypt(uint32_t hCryptoProvider, uint32_t iPosition, uint32_t cNumInBytes, uint8_t* pbInData, uint32_t* pcNumOutBytes, uint8_t* pbOutData) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDecrypt(uint32_t hCryptoProvider, uint32_t iPosition, uint32_t cNumInBytes, uint8_t* pbInData, uint32_t* pcNumOutBytes, uint8_t* pbOutData) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateBoundLicense(uint32_t hEnv, win32::Windows::Win32::RightsManagement::DRMBOUNDLICENSEPARAMS* pParams, uint16_t* wszLicenseChain, uint32_t* phBoundLicense, uint32_t* phErrorLog) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateEnablingBitsDecryptor(uint32_t hBoundLicense, uint16_t* wszRight, uint32_t hAuxLib, uint16_t* wszAuxPlug, uint32_t* phDecryptor) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateEnablingBitsEncryptor(uint32_t hBoundLicense, uint16_t* wszRight, uint32_t hAuxLib, uint16_t* wszAuxPlug, uint32_t* phEncryptor) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAttest(uint32_t hEnablingPrincipal, uint16_t* wszData, win32::Windows::Win32::RightsManagement::DRMATTESTTYPE eType, uint32_t* pcAttestedBlob, uint16_t* wszAttestedBlob) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetTime(uint32_t hEnv, win32::Windows::Win32::RightsManagement::DRMTIMETYPE eTimerIdType, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* poTimeObject) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetInfo(uint32_t handle, uint16_t* wszAttribute, win32::Windows::Win32::RightsManagement::DRMENCODINGTYPE* peEncoding, uint32_t* pcBuffer, uint8_t* pbBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetEnvironmentInfo(uint32_t handle, uint16_t* wszAttribute, win32::Windows::Win32::RightsManagement::DRMENCODINGTYPE* peEncoding, uint32_t* pcBuffer, uint8_t* pbBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetProcAddress(uint32_t hLibrary, uint16_t* wszProcName, win32::Windows::Win32::SystemServices::FARPROC** ppfnProcAddress) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetBoundLicenseObjectCount(uint32_t hQueryRoot, uint16_t* wszSubObjectType, uint32_t* pcSubObjects) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetBoundLicenseObject(uint32_t hQueryRoot, uint16_t* wszSubObjectType, uint32_t iWhich, uint32_t* phSubObject) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetBoundLicenseAttributeCount(uint32_t hQueryRoot, uint16_t* wszAttribute, uint32_t* pcAttributes) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetBoundLicenseAttribute(uint32_t hQueryRoot, uint16_t* wszAttribute, uint32_t iWhich, win32::Windows::Win32::RightsManagement::DRMENCODINGTYPE* peEncoding, uint32_t* pcBuffer, uint8_t* pbBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateClientSession(win32::Windows::Win32::RightsManagement::DRMCALLBACK* pfnCallback, uint32_t uCallbackVersion, uint16_t* wszGroupIDProviderType, uint16_t* wszGroupID, uint32_t* phClient) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMIsActivated(uint32_t hClient, uint32_t uFlags, win32::Windows::Win32::RightsManagement::DRM_ACTSERV_INFO* pActServInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMActivate(uint32_t hClient, uint32_t uFlags, uint32_t uLangID, win32::Windows::Win32::RightsManagement::DRM_ACTSERV_INFO* pActServInfo, void* pvContext, win32::Windows::Win32::WindowsAndMessaging::HWND hParentWnd) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetServiceLocation(uint32_t hClient, uint32_t uServiceType, uint32_t uServiceLocation, uint16_t* wszIssuanceLicense, uint32_t* puServiceURLLength, uint16_t* wszServiceURL) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateLicenseStorageSession(uint32_t hEnv, uint32_t hDefaultLibrary, uint32_t hClient, uint32_t uFlags, uint16_t* wszIssuanceLicense, uint32_t* phLicenseStorage) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAddLicense(uint32_t hLicenseStorage, uint32_t uFlags, uint16_t* wszLicense) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAcquireAdvisories(uint32_t hLicenseStorage, uint16_t* wszLicense, uint16_t* wszURL, void* pvContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMEnumerateLicense(uint32_t hSession, uint32_t uFlags, uint32_t uIndex, int32_t* pfSharedFlag, uint32_t* puCertificateDataLen, uint16_t* wszCertificateData) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAcquireLicense(uint32_t hSession, uint32_t uFlags, uint16_t* wszGroupIdentityCredential, uint16_t* wszRequestedRights, uint16_t* wszCustomData, uint16_t* wszURL, void* pvContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDeleteLicense(uint32_t hSession, uint16_t* wszLicenseId) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCloseSession(uint32_t hSession) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDuplicateSession(uint32_t hSessionIn, uint32_t* phSessionOut) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetSecurityProvider(uint32_t uFlags, uint32_t* puTypeLen, uint16_t* wszType, uint32_t* puPathLen, uint16_t* wszPath) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMEncode(uint16_t* wszAlgID, uint32_t uDataLen, uint8_t* pbDecodedData, uint32_t* puEncodedStringLen, uint16_t* wszEncodedString) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDecode(uint16_t* wszAlgID, uint16_t* wszEncodedString, uint32_t* puDecodedDataLen, uint8_t* pbDecodedData) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMConstructCertificateChain(uint32_t cCertificates, uint16_t** rgwszCertificates, uint32_t* pcChain, uint16_t* wszChain) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMParseUnboundLicense(uint16_t* wszCertificate, uint32_t* phQueryRoot) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCloseQueryHandle(uint32_t hQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUnboundLicenseObjectCount(uint32_t hQueryRoot, uint16_t* wszSubObjectType, uint32_t* pcSubObjects) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUnboundLicenseObject(uint32_t hQueryRoot, uint16_t* wszSubObjectType, uint32_t iIndex, uint32_t* phSubQuery) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUnboundLicenseAttributeCount(uint32_t hQueryRoot, uint16_t* wszAttributeType, uint32_t* pcAttributes) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUnboundLicenseAttribute(uint32_t hQueryRoot, uint16_t* wszAttributeType, uint32_t iWhich, win32::Windows::Win32::RightsManagement::DRMENCODINGTYPE* peEncoding, uint32_t* pcBuffer, uint8_t* pbBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetCertificateChainCount(uint16_t* wszChain, uint32_t* pcCertCount) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDeconstructCertificateChain(uint16_t* wszChain, uint32_t iWhich, uint32_t* pcCert, uint16_t* wszCert) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMVerify(uint16_t* wszData, uint32_t* pcAttestedData, uint16_t* wszAttestedData, win32::Windows::Win32::RightsManagement::DRMATTESTTYPE* peType, uint32_t* pcPrincipal, uint16_t* wszPrincipal, uint32_t* pcManifest, uint16_t* wszManifest) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateUser(uint16_t* wszUserName, uint16_t* wszUserId, uint16_t* wszUserIdType, uint32_t* phUser) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateRight(uint16_t* wszRightName, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstFrom, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstUntil, uint32_t cExtendedInfo, uint16_t** pwszExtendedInfoName, uint16_t** pwszExtendedInfoValue, uint32_t* phRight) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMCreateIssuanceLicense(win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstTimeFrom, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstTimeUntil, uint16_t* wszReferralInfoName, uint16_t* wszReferralInfoURL, uint32_t hOwner, uint16_t* wszIssuanceLicense, uint32_t hBoundLicense, uint32_t* phIssuanceLicense) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAddRightWithUser(uint32_t hIssuanceLicense, uint32_t hRight, uint32_t hUser) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMClearAllRights(uint32_t hIssuanceLicense) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetMetaData(uint32_t hIssuanceLicense, uint16_t* wszContentId, uint16_t* wszContentIdType, uint16_t* wszSKUId, uint16_t* wszSKUIdType, uint16_t* wszContentType, uint16_t* wszContentName) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetUsagePolicy(uint32_t hIssuanceLicense, win32::Windows::Win32::RightsManagement::DRM_USAGEPOLICY_TYPE eUsagePolicyType, win32::Windows::Win32::SystemServices::BOOL fDelete, win32::Windows::Win32::SystemServices::BOOL fExclusion, uint16_t* wszName, uint16_t* wszMinVersion, uint16_t* wszMaxVersion, uint16_t* wszPublicKey, uint16_t* wszDigestAlgorithm, uint8_t* pbDigest, uint32_t cbDigest) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetRevocationPoint(uint32_t hIssuanceLicense, win32::Windows::Win32::SystemServices::BOOL fDelete, uint16_t* wszId, uint16_t* wszIdType, uint16_t* wszURL, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstFrequency, uint16_t* wszName, uint16_t* wszPublicKey) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetApplicationSpecificData(uint32_t hIssuanceLicense, win32::Windows::Win32::SystemServices::BOOL fDelete, uint16_t* wszName, uint16_t* wszValue) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetNameAndDescription(uint32_t hIssuanceLicense, win32::Windows::Win32::SystemServices::BOOL fDelete, uint32_t lcid, uint16_t* wszName, uint16_t* wszDescription) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMSetIntervalTime(uint32_t hIssuanceLicense, uint32_t cDays) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetIssuanceLicenseTemplate(uint32_t hIssuanceLicense, uint32_t* puIssuanceLicenseTemplateLength, uint16_t* wszIssuanceLicenseTemplate) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetSignedIssuanceLicense(uint32_t hEnv, uint32_t hIssuanceLicense, uint32_t uFlags, uint8_t* pbSymKey, uint32_t cbSymKey, uint16_t* wszSymKeyType, uint16_t* wszClientLicensorCertificate, win32::Windows::Win32::RightsManagement::DRMCALLBACK* pfnCallback, uint16_t* wszURL, void* pvContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetSignedIssuanceLicenseEx(uint32_t hEnv, uint32_t hIssuanceLicense, uint32_t uFlags, uint8_t* pbSymKey, uint32_t cbSymKey, uint16_t* wszSymKeyType, void* pvReserved, uint32_t hEnablingPrincipal, uint32_t hBoundLicenseCLC, win32::Windows::Win32::RightsManagement::DRMCALLBACK* pfnCallback, void* pvContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMClosePubHandle(uint32_t hPub) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMDuplicatePubHandle(uint32_t hPubIn, uint32_t* phPubOut) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUserInfo(uint32_t hUser, uint32_t* puUserNameLength, uint16_t* wszUserName, uint32_t* puUserIdLength, uint16_t* wszUserId, uint32_t* puUserIdTypeLength, uint16_t* wszUserIdType) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetRightInfo(uint32_t hRight, uint32_t* puRightNameLength, uint16_t* wszRightName, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstFrom, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstUntil) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetRightExtendedInfo(uint32_t hRight, uint32_t uIndex, uint32_t* puExtendedInfoNameLength, uint16_t* wszExtendedInfoName, uint32_t* puExtendedInfoValueLength, uint16_t* wszExtendedInfoValue) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUsers(uint32_t hIssuanceLicense, uint32_t uIndex, uint32_t* phUser) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUserRights(uint32_t hIssuanceLicense, uint32_t hUser, uint32_t uIndex, uint32_t* phRight) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetMetaData(uint32_t hIssuanceLicense, uint32_t* puContentIdLength, uint16_t* wszContentId, uint32_t* puContentIdTypeLength, uint16_t* wszContentIdType, uint32_t* puSKUIdLength, uint16_t* wszSKUId, uint32_t* puSKUIdTypeLength, uint16_t* wszSKUIdType, uint32_t* puContentTypeLength, uint16_t* wszContentType, uint32_t* puContentNameLength, uint16_t* wszContentName) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetApplicationSpecificData(uint32_t hIssuanceLicense, uint32_t uIndex, uint32_t* puNameLength, uint16_t* wszName, uint32_t* puValueLength, uint16_t* wszValue) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetIssuanceLicenseInfo(uint32_t hIssuanceLicense, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstTimeFrom, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstTimeUntil, uint32_t uFlags, uint32_t* puDistributionPointNameLength, uint16_t* wszDistributionPointName, uint32_t* puDistributionPointURLLength, uint16_t* wszDistributionPointURL, uint32_t* phOwner, int32_t* pfOfficial) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetRevocationPoint(uint32_t hIssuanceLicense, uint32_t* puIdLength, uint16_t* wszId, uint32_t* puIdTypeLength, uint16_t* wszIdType, uint32_t* puURLLength, uint16_t* wszRL, win32::Windows::Win32::WindowsProgramming::SYSTEMTIME* pstFrequency, uint32_t* puNameLength, uint16_t* wszName, uint32_t* puPublicKeyLength, uint16_t* wszPublicKey) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetUsagePolicy(uint32_t hIssuanceLicense, uint32_t uIndex, win32::Windows::Win32::RightsManagement::DRM_USAGEPOLICY_TYPE* peUsagePolicyType, int32_t* pfExclusion, uint32_t* puNameLength, uint16_t* wszName, uint32_t* puMinVersionLength, uint16_t* wszMinVersion, uint32_t* puMaxVersionLength, uint16_t* wszMaxVersion, uint32_t* puPublicKeyLength, uint16_t* wszPublicKey, uint32_t* puDigestAlgorithmLength, uint16_t* wszDigestAlgorithm, uint32_t* pcbDigest, uint8_t* pbDigest) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetNameAndDescription(uint32_t hIssuanceLicense, uint32_t uIndex, uint32_t* pulcid, uint32_t* puNameLength, uint16_t* wszName, uint32_t* puDescriptionLength, uint16_t* wszDescription) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetOwnerLicense(uint32_t hIssuanceLicense, uint32_t* puOwnerLicenseLength, uint16_t* wszOwnerLicense) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMGetIntervalTime(uint32_t hIssuanceLicense, uint32_t* pcDays) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMRepair() noexcept;
    int32_t __stdcall WIN32_IMPL_DRMRegisterProtectedWindow(uint32_t hEnv, win32::Windows::Win32::WindowsAndMessaging::HWND hwnd) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMIsWindowProtected(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd, int32_t* pfProtected) noexcept;
    int32_t __stdcall WIN32_IMPL_DRMAcquireIssuanceLicenseTemplate(uint32_t hClient, uint32_t uFlags, void* pvReserved, uint32_t cTemplates, uint16_t** pwszTemplateIds, uint16_t* wszUrl, void* pvContext) noexcept;
}
WIN32_IMPL_LINK(DRMSetGlobalOptions, 12)
WIN32_IMPL_LINK(DRMGetClientVersion, 4)
WIN32_IMPL_LINK(DRMInitEnvironment, 28)
WIN32_IMPL_LINK(DRMLoadLibrary, 20)
WIN32_IMPL_LINK(DRMCreateEnablingPrincipal, 24)
WIN32_IMPL_LINK(DRMCloseHandle, 4)
WIN32_IMPL_LINK(DRMCloseEnvironmentHandle, 4)
WIN32_IMPL_LINK(DRMDuplicateHandle, 8)
WIN32_IMPL_LINK(DRMDuplicateEnvironmentHandle, 8)
WIN32_IMPL_LINK(DRMRegisterRevocationList, 8)
WIN32_IMPL_LINK(DRMCheckSecurity, 8)
WIN32_IMPL_LINK(DRMRegisterContent, 4)
WIN32_IMPL_LINK(DRMEncrypt, 24)
WIN32_IMPL_LINK(DRMDecrypt, 24)
WIN32_IMPL_LINK(DRMCreateBoundLicense, 20)
WIN32_IMPL_LINK(DRMCreateEnablingBitsDecryptor, 20)
WIN32_IMPL_LINK(DRMCreateEnablingBitsEncryptor, 20)
WIN32_IMPL_LINK(DRMAttest, 20)
WIN32_IMPL_LINK(DRMGetTime, 12)
WIN32_IMPL_LINK(DRMGetInfo, 20)
WIN32_IMPL_LINK(DRMGetEnvironmentInfo, 20)
WIN32_IMPL_LINK(DRMGetProcAddress, 12)
WIN32_IMPL_LINK(DRMGetBoundLicenseObjectCount, 12)
WIN32_IMPL_LINK(DRMGetBoundLicenseObject, 16)
WIN32_IMPL_LINK(DRMGetBoundLicenseAttributeCount, 12)
WIN32_IMPL_LINK(DRMGetBoundLicenseAttribute, 24)
WIN32_IMPL_LINK(DRMCreateClientSession, 20)
WIN32_IMPL_LINK(DRMIsActivated, 12)
WIN32_IMPL_LINK(DRMActivate, 24)
WIN32_IMPL_LINK(DRMGetServiceLocation, 24)
WIN32_IMPL_LINK(DRMCreateLicenseStorageSession, 24)
WIN32_IMPL_LINK(DRMAddLicense, 12)
WIN32_IMPL_LINK(DRMAcquireAdvisories, 16)
WIN32_IMPL_LINK(DRMEnumerateLicense, 24)
WIN32_IMPL_LINK(DRMAcquireLicense, 28)
WIN32_IMPL_LINK(DRMDeleteLicense, 8)
WIN32_IMPL_LINK(DRMCloseSession, 4)
WIN32_IMPL_LINK(DRMDuplicateSession, 8)
WIN32_IMPL_LINK(DRMGetSecurityProvider, 20)
WIN32_IMPL_LINK(DRMEncode, 20)
WIN32_IMPL_LINK(DRMDecode, 16)
WIN32_IMPL_LINK(DRMConstructCertificateChain, 16)
WIN32_IMPL_LINK(DRMParseUnboundLicense, 8)
WIN32_IMPL_LINK(DRMCloseQueryHandle, 4)
WIN32_IMPL_LINK(DRMGetUnboundLicenseObjectCount, 12)
WIN32_IMPL_LINK(DRMGetUnboundLicenseObject, 16)
WIN32_IMPL_LINK(DRMGetUnboundLicenseAttributeCount, 12)
WIN32_IMPL_LINK(DRMGetUnboundLicenseAttribute, 24)
WIN32_IMPL_LINK(DRMGetCertificateChainCount, 8)
WIN32_IMPL_LINK(DRMDeconstructCertificateChain, 16)
WIN32_IMPL_LINK(DRMVerify, 32)
WIN32_IMPL_LINK(DRMCreateUser, 16)
WIN32_IMPL_LINK(DRMCreateRight, 28)
WIN32_IMPL_LINK(DRMCreateIssuanceLicense, 32)
WIN32_IMPL_LINK(DRMAddRightWithUser, 12)
WIN32_IMPL_LINK(DRMClearAllRights, 4)
WIN32_IMPL_LINK(DRMSetMetaData, 28)
WIN32_IMPL_LINK(DRMSetUsagePolicy, 44)
WIN32_IMPL_LINK(DRMSetRevocationPoint, 32)
WIN32_IMPL_LINK(DRMSetApplicationSpecificData, 16)
WIN32_IMPL_LINK(DRMSetNameAndDescription, 20)
WIN32_IMPL_LINK(DRMSetIntervalTime, 8)
WIN32_IMPL_LINK(DRMGetIssuanceLicenseTemplate, 12)
WIN32_IMPL_LINK(DRMGetSignedIssuanceLicense, 40)
WIN32_IMPL_LINK(DRMGetSignedIssuanceLicenseEx, 44)
WIN32_IMPL_LINK(DRMClosePubHandle, 4)
WIN32_IMPL_LINK(DRMDuplicatePubHandle, 8)
WIN32_IMPL_LINK(DRMGetUserInfo, 28)
WIN32_IMPL_LINK(DRMGetRightInfo, 20)
WIN32_IMPL_LINK(DRMGetRightExtendedInfo, 24)
WIN32_IMPL_LINK(DRMGetUsers, 12)
WIN32_IMPL_LINK(DRMGetUserRights, 16)
WIN32_IMPL_LINK(DRMGetMetaData, 52)
WIN32_IMPL_LINK(DRMGetApplicationSpecificData, 24)
WIN32_IMPL_LINK(DRMGetIssuanceLicenseInfo, 40)
WIN32_IMPL_LINK(DRMGetRevocationPoint, 48)
WIN32_IMPL_LINK(DRMGetUsagePolicy, 64)
WIN32_IMPL_LINK(DRMGetNameAndDescription, 28)
WIN32_IMPL_LINK(DRMGetOwnerLicense, 12)
WIN32_IMPL_LINK(DRMGetIntervalTime, 8)
WIN32_IMPL_LINK(DRMRepair, 0)
WIN32_IMPL_LINK(DRMRegisterProtectedWindow, 8)
WIN32_IMPL_LINK(DRMIsWindowProtected, 8)
WIN32_IMPL_LINK(DRMAcquireIssuanceLicenseTemplate, 28)

#pragma endregion abi_methods

#endif
