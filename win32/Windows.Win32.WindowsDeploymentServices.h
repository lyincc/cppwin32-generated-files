// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsDeploymentServices_H
#define WIN32_Windows_Win32_WindowsDeploymentServices_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.WindowsDeploymentServices.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::WindowsDeploymentServices
{
#pragma region methods
    inline int32_t WdsCliClose(Windows::Win32::SystemServices::HANDLE Handle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliClose(Handle);
        return win32_impl_result;
    }
    inline int32_t WdsCliRegisterTrace(Windows::Win32::WindowsDeploymentServices::PFN_WdsCliTraceFunction* pfn)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliRegisterTrace(pfn);
        return win32_impl_result;
    }
    inline int32_t WdsCliFreeStringArray(uint16_t** ppwszArray, uint32_t ulCount)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliFreeStringArray(ppwszArray, ulCount);
        return win32_impl_result;
    }
    inline int32_t WdsCliFindFirstImage(Windows::Win32::SystemServices::HANDLE hSession, intptr_t* phFindHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliFindFirstImage(hSession, phFindHandle);
        return win32_impl_result;
    }
    inline int32_t WdsCliFindNextImage(Windows::Win32::SystemServices::HANDLE Handle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliFindNextImage(Handle);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetEnumerationFlags(Windows::Win32::SystemServices::HANDLE Handle, uint32_t* pdwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetEnumerationFlags(Handle, pdwFlags);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageHandleFromFindHandle(Windows::Win32::SystemServices::HANDLE FindHandle, intptr_t* phImageHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageHandleFromFindHandle(FindHandle, phImageHandle);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageHandleFromTransferHandle(Windows::Win32::SystemServices::HANDLE hTransfer, intptr_t* phImageHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageHandleFromTransferHandle(hTransfer, phImageHandle);
        return win32_impl_result;
    }
    inline int32_t WdsCliCreateSession(uint16_t* pwszServer, Windows::Win32::WindowsDeploymentServices::WDS_CLI_CRED* pCred, intptr_t* phSession)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliCreateSession(pwszServer, pCred, phSession);
        return win32_impl_result;
    }
    inline int32_t WdsCliAuthorizeSession(Windows::Win32::SystemServices::HANDLE hSession, Windows::Win32::WindowsDeploymentServices::WDS_CLI_CRED* pCred)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliAuthorizeSession(hSession, pCred);
        return win32_impl_result;
    }
    inline int32_t WdsCliInitializeLog(Windows::Win32::SystemServices::HANDLE hSession, uint32_t ulClientArchitecture, uint16_t* pwszClientId, uint16_t* pwszClientAddress)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliInitializeLog(hSession, ulClientArchitecture, pwszClientId, pwszClientAddress);
        return win32_impl_result;
    }
    inline int32_t WdsCliLog(Windows::Win32::SystemServices::HANDLE hSession, uint32_t ulLogLevel, uint32_t ulMessageCode)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliLog(hSession, ulLogLevel, ulMessageCode);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageName(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageName(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageDescription(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageDescription(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageType(Windows::Win32::SystemServices::HANDLE hIfh, Windows::Win32::WindowsDeploymentServices::WDS_CLI_IMAGE_TYPE* pImageType)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageType(hIfh, pImageType);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageFiles(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t*** pppwszFiles, uint32_t* pdwCount)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageFiles(hIfh, pppwszFiles, pdwCount);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageLanguage(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageLanguage(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageLanguages(Windows::Win32::SystemServices::HANDLE hIfh, int8_t*** pppszValues, uint32_t* pdwNumValues)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageLanguages(hIfh, pppszValues, pdwNumValues);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageVersion(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageVersion(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImagePath(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImagePath(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageIndex(Windows::Win32::SystemServices::HANDLE hIfh, uint32_t* pdwValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageIndex(hIfh, pdwValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageArchitecture(Windows::Win32::SystemServices::HANDLE hIfh, uint32_t* pdwValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageArchitecture(hIfh, pdwValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageLastModifiedTime(Windows::Win32::SystemServices::HANDLE hIfh, Windows::Win32::WindowsProgramming::SYSTEMTIME** ppSysTimeValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageLastModifiedTime(hIfh, ppSysTimeValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageSize(Windows::Win32::SystemServices::HANDLE hIfh, uint64_t* pullValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageSize(hIfh, pullValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageHalName(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageHalName(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageGroup(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageGroup(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageNamespace(Windows::Win32::SystemServices::HANDLE hIfh, uint16_t** ppwszValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageNamespace(hIfh, ppwszValue);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetImageParameter(Windows::Win32::SystemServices::HANDLE hIfh, Windows::Win32::WindowsDeploymentServices::WDS_CLI_IMAGE_PARAM_TYPE ParamType, void* pResponse, uint32_t uResponseLen)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetImageParameter(hIfh, ParamType, pResponse, uResponseLen);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetTransferSize(Windows::Win32::SystemServices::HANDLE hIfh, uint64_t* pullValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetTransferSize(hIfh, pullValue);
        return win32_impl_result;
    }
    inline void WdsCliSetTransferBufferSize(uint32_t ulSizeInBytes)
    {
        WIN32_IMPL_WdsCliSetTransferBufferSize(ulSizeInBytes);
    }
    inline int32_t WdsCliTransferImage(Windows::Win32::SystemServices::HANDLE hImage, uint16_t* pwszLocalPath, uint32_t dwFlags, uint32_t dwReserved, Windows::Win32::WindowsDeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, intptr_t* phTransfer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliTransferImage(hImage, pwszLocalPath, dwFlags, dwReserved, pfnWdsCliCallback, pvUserData, phTransfer);
        return win32_impl_result;
    }
    inline int32_t WdsCliTransferFile(uint16_t* pwszServer, uint16_t* pwszNamespace, uint16_t* pwszRemoteFilePath, uint16_t* pwszLocalFilePath, uint32_t dwFlags, uint32_t dwReserved, Windows::Win32::WindowsDeploymentServices::PFN_WdsCliCallback* pfnWdsCliCallback, void* pvUserData, intptr_t* phTransfer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliTransferFile(pwszServer, pwszNamespace, pwszRemoteFilePath, pwszLocalFilePath, dwFlags, dwReserved, pfnWdsCliCallback, pvUserData, phTransfer);
        return win32_impl_result;
    }
    inline int32_t WdsCliCancelTransfer(Windows::Win32::SystemServices::HANDLE hTransfer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliCancelTransfer(hTransfer);
        return win32_impl_result;
    }
    inline int32_t WdsCliWaitForTransfer(Windows::Win32::SystemServices::HANDLE hTransfer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliWaitForTransfer(hTransfer);
        return win32_impl_result;
    }
    inline int32_t WdsCliObtainDriverPackages(Windows::Win32::SystemServices::HANDLE hImage, uint16_t** ppwszServerName, uint16_t*** pppwszDriverPackages, uint32_t* pulCount)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliObtainDriverPackages(hImage, ppwszServerName, pppwszDriverPackages, pulCount);
        return win32_impl_result;
    }
    inline int32_t WdsCliObtainDriverPackagesEx(Windows::Win32::SystemServices::HANDLE hSession, uint16_t* pwszMachineInfo, uint16_t** ppwszServerName, uint16_t*** pppwszDriverPackages, uint32_t* pulCount)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliObtainDriverPackagesEx(hSession, pwszMachineInfo, ppwszServerName, pppwszDriverPackages, pulCount);
        return win32_impl_result;
    }
    inline int32_t WdsCliGetDriverQueryXml(uint16_t* pwszWinDirPath, uint16_t** ppwszDriverQuery)
    {
        auto win32_impl_result = WIN32_IMPL_WdsCliGetDriverQueryXml(pwszWinDirPath, ppwszDriverQuery);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderRegister(uint16_t* pszProviderName, uint16_t* pszModulePath, uint32_t Index, Windows::Win32::SystemServices::BOOL bIsCritical, Windows::Win32::WindowsProgramming::HKEY* phProviderKey)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderRegister(pszProviderName, pszModulePath, Index, bIsCritical, phProviderKey);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderUnRegister(uint16_t* pszProviderName)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderUnRegister(pszProviderName);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderQueryIndex(uint16_t* pszProviderName, uint32_t* puIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderQueryIndex(pszProviderName, puIndex);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderEnumFirst(Windows::Win32::SystemServices::HANDLE* phEnum)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderEnumFirst(phEnum);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderEnumNext(Windows::Win32::SystemServices::HANDLE hEnum, Windows::Win32::WindowsDeploymentServices::PXE_PROVIDER** ppProvider)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderEnumNext(hEnum, ppProvider);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderEnumClose(Windows::Win32::SystemServices::HANDLE hEnum)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderEnumClose(hEnum);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderFreeInfo(Windows::Win32::WindowsDeploymentServices::PXE_PROVIDER* pProvider)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderFreeInfo(pProvider);
        return win32_impl_result;
    }
    inline uint32_t PxeRegisterCallback(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t CallbackType, void* pCallbackFunction, void* pContext)
    {
        auto win32_impl_result = WIN32_IMPL_PxeRegisterCallback(hProvider, CallbackType, pCallbackFunction, pContext);
        return win32_impl_result;
    }
    inline uint32_t PxeSendReply(Windows::Win32::SystemServices::HANDLE hClientRequest, void* pPacket, uint32_t uPacketLen, Windows::Win32::WindowsDeploymentServices::PXE_ADDRESS* pAddress)
    {
        auto win32_impl_result = WIN32_IMPL_PxeSendReply(hClientRequest, pPacket, uPacketLen, pAddress);
        return win32_impl_result;
    }
    inline uint32_t PxeAsyncRecvDone(Windows::Win32::SystemServices::HANDLE hClientRequest, uint32_t Action)
    {
        auto win32_impl_result = WIN32_IMPL_PxeAsyncRecvDone(hClientRequest, Action);
        return win32_impl_result;
    }
    inline uint32_t PxeTrace(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t Severity, uint16_t* pszFormat)
    {
        auto win32_impl_result = WIN32_IMPL_PxeTrace(hProvider, Severity, pszFormat);
        return win32_impl_result;
    }
    inline uint32_t PxeTraceV(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t Severity, uint16_t* pszFormat, int8_t* Params)
    {
        auto win32_impl_result = WIN32_IMPL_PxeTraceV(hProvider, Severity, pszFormat, Params);
        return win32_impl_result;
    }
    inline void* PxePacketAllocate(Windows::Win32::SystemServices::HANDLE hProvider, Windows::Win32::SystemServices::HANDLE hClientRequest, uint32_t uSize)
    {
        auto win32_impl_result = WIN32_IMPL_PxePacketAllocate(hProvider, hClientRequest, uSize);
        return win32_impl_result;
    }
    inline uint32_t PxePacketFree(Windows::Win32::SystemServices::HANDLE hProvider, Windows::Win32::SystemServices::HANDLE hClientRequest, void* pPacket)
    {
        auto win32_impl_result = WIN32_IMPL_PxePacketFree(hProvider, hClientRequest, pPacket);
        return win32_impl_result;
    }
    inline uint32_t PxeProviderSetAttribute(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t Attribute, void* pParameterBuffer, uint32_t uParamLen)
    {
        auto win32_impl_result = WIN32_IMPL_PxeProviderSetAttribute(hProvider, Attribute, pParameterBuffer, uParamLen);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpInitialize(void* pRecvPacket, uint32_t uRecvPacketLen, void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpInitialize(pRecvPacket, uRecvPacketLen, pReplyPacket, uMaxReplyPacketLen, puReplyPacketLen);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6Initialize(void* pRequest, uint32_t cbRequest, void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6Initialize(pRequest, cbRequest, pReply, cbReply, pcbReplyUsed);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpAppendOption(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint8_t bOption, uint8_t bOptionLen, void* pValue)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpAppendOption(pReplyPacket, uMaxReplyPacketLen, puReplyPacketLen, bOption, bOptionLen, pValue);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6AppendOption(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t wOptionType, uint16_t cbOption, void* pOption)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6AppendOption(pReply, cbReply, pcbReplyUsed, wOptionType, cbOption, pOption);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpAppendOptionRaw(void* pReplyPacket, uint32_t uMaxReplyPacketLen, uint32_t* puReplyPacketLen, uint16_t uBufferLen, void* pBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpAppendOptionRaw(pReplyPacket, uMaxReplyPacketLen, puReplyPacketLen, uBufferLen, pBuffer);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6AppendOptionRaw(void* pReply, uint32_t cbReply, uint32_t* pcbReplyUsed, uint16_t cbBuffer, void* pBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6AppendOptionRaw(pReply, cbReply, pcbReplyUsed, cbBuffer, pBuffer);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpIsValid(void* pPacket, uint32_t uPacketLen, Windows::Win32::SystemServices::BOOL bRequestPacket, int32_t* pbPxeOptionPresent)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpIsValid(pPacket, uPacketLen, bRequestPacket, pbPxeOptionPresent);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6IsValid(void* pPacket, uint32_t uPacketLen, Windows::Win32::SystemServices::BOOL bRequestPacket, int32_t* pbPxeOptionPresent)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6IsValid(pPacket, uPacketLen, bRequestPacket, pbPxeOptionPresent);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpGetOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint8_t bOption, uint8_t* pbOptionLen, void** ppOptionValue)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpGetOptionValue(pPacket, uPacketLen, uInstance, bOption, pbOptionLen, ppOptionValue);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6GetOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t uInstance, uint16_t wOption, uint16_t* pwOptionLen, void** ppOptionValue)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6GetOptionValue(pPacket, uPacketLen, uInstance, wOption, pwOptionLen, ppOptionValue);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpGetVendorOptionValue(void* pPacket, uint32_t uPacketLen, uint8_t bOption, uint32_t uInstance, uint8_t* pbOptionLen, void** ppOptionValue)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpGetVendorOptionValue(pPacket, uPacketLen, bOption, uInstance, pbOptionLen, ppOptionValue);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6GetVendorOptionValue(void* pPacket, uint32_t uPacketLen, uint32_t dwEnterpriseNumber, uint16_t wOption, uint32_t uInstance, uint16_t* pwOptionLen, void** ppOptionValue)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6GetVendorOptionValue(pPacket, uPacketLen, dwEnterpriseNumber, wOption, uInstance, pwOptionLen, ppOptionValue);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6ParseRelayForw(void* pRelayForwPacket, uint32_t uRelayForwPacketLen, Windows::Win32::WindowsDeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint32_t* pnRelayMessages, uint8_t** ppInnerPacket, uint32_t* pcbInnerPacket)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6ParseRelayForw(pRelayForwPacket, uRelayForwPacketLen, pRelayMessages, nRelayMessages, pnRelayMessages, ppInnerPacket, pcbInnerPacket);
        return win32_impl_result;
    }
    inline uint32_t PxeDhcpv6CreateRelayRepl(Windows::Win32::WindowsDeploymentServices::PXE_DHCPV6_NESTED_RELAY_MESSAGE* pRelayMessages, uint32_t nRelayMessages, uint8_t* pInnerPacket, uint32_t cbInnerPacket, void* pReplyBuffer, uint32_t cbReplyBuffer, uint32_t* pcbReplyBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PxeDhcpv6CreateRelayRepl(pRelayMessages, nRelayMessages, pInnerPacket, cbInnerPacket, pReplyBuffer, cbReplyBuffer, pcbReplyBuffer);
        return win32_impl_result;
    }
    inline uint32_t PxeGetServerInfo(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen)
    {
        auto win32_impl_result = WIN32_IMPL_PxeGetServerInfo(uInfoType, pBuffer, uBufferLen);
        return win32_impl_result;
    }
    inline uint32_t PxeGetServerInfoEx(uint32_t uInfoType, void* pBuffer, uint32_t uBufferLen, uint32_t* puBufferUsed)
    {
        auto win32_impl_result = WIN32_IMPL_PxeGetServerInfoEx(uInfoType, pBuffer, uBufferLen, puBufferUsed);
        return win32_impl_result;
    }
    inline int32_t WdsTransportServerRegisterCallback(Windows::Win32::SystemServices::HANDLE hProvider, Windows::Win32::WindowsDeploymentServices::TRANSPORTPROVIDER_CALLBACK_ID CallbackId, void* pfnCallback)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerRegisterCallback(hProvider, CallbackId, pfnCallback);
        return win32_impl_result;
    }
    inline int32_t WdsTransportServerCompleteRead(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t ulBytesRead, void* pvUserData, int32_t hReadResult)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerCompleteRead(hProvider, ulBytesRead, pvUserData, hReadResult);
        return win32_impl_result;
    }
    inline int32_t WdsTransportServerTrace(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t Severity, uint16_t* pwszFormat)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerTrace(hProvider, Severity, pwszFormat);
        return win32_impl_result;
    }
    inline int32_t WdsTransportServerTraceV(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t Severity, uint16_t* pwszFormat, int8_t* Params)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerTraceV(hProvider, Severity, pwszFormat, Params);
        return win32_impl_result;
    }
    inline void* WdsTransportServerAllocateBuffer(Windows::Win32::SystemServices::HANDLE hProvider, uint32_t ulBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerAllocateBuffer(hProvider, ulBufferSize);
        return win32_impl_result;
    }
    inline int32_t WdsTransportServerFreeBuffer(Windows::Win32::SystemServices::HANDLE hProvider, void* pvBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportServerFreeBuffer(hProvider, pvBuffer);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientInitialize()
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientInitialize();
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientInitializeSession(Windows::Win32::WindowsDeploymentServices::WDS_TRANSPORTCLIENT_REQUEST* pSessionRequest, void* pCallerData, intptr_t* hSessionKey)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientInitializeSession(pSessionRequest, pCallerData, hSessionKey);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientRegisterCallback(Windows::Win32::SystemServices::HANDLE hSessionKey, Windows::Win32::WindowsDeploymentServices::TRANSPORTCLIENT_CALLBACK_ID CallbackId, void* pfnCallback)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientRegisterCallback(hSessionKey, CallbackId, pfnCallback);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientStartSession(Windows::Win32::SystemServices::HANDLE hSessionKey)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientStartSession(hSessionKey);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientCompleteReceive(Windows::Win32::SystemServices::HANDLE hSessionKey, uint32_t ulSize, Windows::Win32::SystemServices::ULARGE_INTEGER* pullOffset)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientCompleteReceive(hSessionKey, ulSize, pullOffset);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientCancelSession(Windows::Win32::SystemServices::HANDLE hSessionKey)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientCancelSession(hSessionKey);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientCancelSessionEx(Windows::Win32::SystemServices::HANDLE hSessionKey, uint32_t dwErrorCode)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientCancelSessionEx(hSessionKey, dwErrorCode);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientWaitForCompletion(Windows::Win32::SystemServices::HANDLE hSessionKey, uint32_t uTimeout)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientWaitForCompletion(hSessionKey, uTimeout);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientQueryStatus(Windows::Win32::SystemServices::HANDLE hSessionKey, uint32_t* puStatus, uint32_t* puErrorCode)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientQueryStatus(hSessionKey, puStatus, puErrorCode);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientCloseSession(Windows::Win32::SystemServices::HANDLE hSessionKey)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientCloseSession(hSessionKey);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientAddRefBuffer(void* pvBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientAddRefBuffer(pvBuffer);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientReleaseBuffer(void* pvBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientReleaseBuffer(pvBuffer);
        return win32_impl_result;
    }
    inline uint32_t WdsTransportClientShutdown()
    {
        auto win32_impl_result = WIN32_IMPL_WdsTransportClientShutdown();
        return win32_impl_result;
    }
    inline uint32_t WdsBpParseInitialize(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, Windows::Win32::SystemServices::HANDLE* phHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpParseInitialize(pPacket, uPacketLen, pbPacketType, phHandle);
        return win32_impl_result;
    }
    inline uint32_t WdsBpParseInitializev6(void* pPacket, uint32_t uPacketLen, uint8_t* pbPacketType, Windows::Win32::SystemServices::HANDLE* phHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpParseInitializev6(pPacket, uPacketLen, pbPacketType, phHandle);
        return win32_impl_result;
    }
    inline uint32_t WdsBpInitialize(uint8_t bPacketType, Windows::Win32::SystemServices::HANDLE* phHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpInitialize(bPacketType, phHandle);
        return win32_impl_result;
    }
    inline uint32_t WdsBpCloseHandle(Windows::Win32::SystemServices::HANDLE hHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpCloseHandle(hHandle);
        return win32_impl_result;
    }
    inline uint32_t WdsBpQueryOption(Windows::Win32::SystemServices::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue, uint32_t* puBytes)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpQueryOption(hHandle, uOption, uValueLen, pValue, puBytes);
        return win32_impl_result;
    }
    inline uint32_t WdsBpAddOption(Windows::Win32::SystemServices::HANDLE hHandle, uint32_t uOption, uint32_t uValueLen, void* pValue)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpAddOption(hHandle, uOption, uValueLen, pValue);
        return win32_impl_result;
    }
    inline uint32_t WdsBpGetOptionBuffer(Windows::Win32::SystemServices::HANDLE hHandle, uint32_t uBufferLen, void* pBuffer, uint32_t* puBytes)
    {
        auto win32_impl_result = WIN32_IMPL_WdsBpGetOptionBuffer(hHandle, uBufferLen, pBuffer, puBytes);
        return win32_impl_result;
    }

    inline constexpr int32_t WdsCliFlagEnumFilterVersion = 1;
    inline constexpr int32_t WdsCliFlagEnumFilterFirmware = 2;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_ERROR = 1;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_STARTED = 2;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_FINISHED = 3;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_IMAGE_SELECTED = 4;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_APPLY_STARTED = 5;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_APPLY_FINISHED = 6;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_GENERIC_MESSAGE = 7;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_UNATTEND_MODE = 8;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_TRANSFER_START = 9;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_TRANSFER_END = 10;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_TRANSFER_DOWNGRADE = 11;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_DOMAINJOINERROR = 12;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_POST_ACTIONS_START = 13;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_POST_ACTIONS_END = 14;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_APPLY_STARTED_2 = 15;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_APPLY_FINISHED_2 = 16;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_DOMAINJOINERROR_2 = 17;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_DRIVER_PACKAGE_NOT_ACCESSIBLE = 18;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_START = 19;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_END = 20;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_FAILURE = 21;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_IMAGE_SELECTED2 = 22;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_IMAGE_SELECTED3 = 23;
    inline constexpr int32_t WDS_LOG_TYPE_CLIENT_MAX_CODE = 24;
    inline constexpr int32_t WDS_LOG_LEVEL_DISABLED = 0;
    inline constexpr int32_t WDS_LOG_LEVEL_ERROR = 1;
    inline constexpr int32_t WDS_LOG_LEVEL_WARNING = 2;
    inline constexpr int32_t WDS_LOG_LEVEL_INFO = 3;
    inline constexpr int32_t WDS_CLI_MSG_START = 0;
    inline constexpr int32_t WDS_CLI_MSG_COMPLETE = 1;
    inline constexpr int32_t WDS_CLI_MSG_PROGRESS = 2;
    inline constexpr int32_t WDS_CLI_MSG_TEXT = 3;
#pragma endregion methods

}
#endif
