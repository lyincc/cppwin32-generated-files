// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Fax_H
#define WIN32_Windows_Win32_Fax_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Fax.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Fax
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL FaxConnectFaxServerA(int8_t* MachineName, intptr_t* FaxHandle)
    {
        auto win32_impl_result = WIN32_IMPL_FaxConnectFaxServerA(MachineName, FaxHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxConnectFaxServerW(uint16_t* MachineName, intptr_t* FaxHandle)
    {
        auto win32_impl_result = WIN32_IMPL_FaxConnectFaxServerW(MachineName, FaxHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxClose(Windows::Win32::SystemServices::HANDLE FaxHandle)
    {
        auto win32_impl_result = WIN32_IMPL_FaxClose(FaxHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxOpenPort(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t DeviceId, uint32_t Flags, intptr_t* FaxPortHandle)
    {
        auto win32_impl_result = WIN32_IMPL_FaxOpenPort(FaxHandle, DeviceId, Flags, FaxPortHandle);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxCompleteJobParamsA(Windows::Win32::Fax::FAX_JOB_PARAMA** JobParams, Windows::Win32::Fax::FAX_COVERPAGE_INFOA** CoverpageInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxCompleteJobParamsA(JobParams, CoverpageInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxCompleteJobParamsW(Windows::Win32::Fax::FAX_JOB_PARAMW** JobParams, Windows::Win32::Fax::FAX_COVERPAGE_INFOW** CoverpageInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxCompleteJobParamsW(JobParams, CoverpageInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSendDocumentA(Windows::Win32::SystemServices::HANDLE FaxHandle, int8_t* FileName, Windows::Win32::Fax::FAX_JOB_PARAMA* JobParams, Windows::Win32::Fax::FAX_COVERPAGE_INFOA* CoverpageInfo, uint32_t* FaxJobId)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSendDocumentA(FaxHandle, FileName, JobParams, CoverpageInfo, FaxJobId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSendDocumentW(Windows::Win32::SystemServices::HANDLE FaxHandle, uint16_t* FileName, Windows::Win32::Fax::FAX_JOB_PARAMW* JobParams, Windows::Win32::Fax::FAX_COVERPAGE_INFOW* CoverpageInfo, uint32_t* FaxJobId)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSendDocumentW(FaxHandle, FileName, JobParams, CoverpageInfo, FaxJobId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSendDocumentForBroadcastA(Windows::Win32::SystemServices::HANDLE FaxHandle, int8_t* FileName, uint32_t* FaxJobId, Windows::Win32::Fax::PFAX_RECIPIENT_CALLBACKA* FaxRecipientCallback, void* Context)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSendDocumentForBroadcastA(FaxHandle, FileName, FaxJobId, FaxRecipientCallback, Context);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSendDocumentForBroadcastW(Windows::Win32::SystemServices::HANDLE FaxHandle, uint16_t* FileName, uint32_t* FaxJobId, Windows::Win32::Fax::PFAX_RECIPIENT_CALLBACKW* FaxRecipientCallback, void* Context)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSendDocumentForBroadcastW(FaxHandle, FileName, FaxJobId, FaxRecipientCallback, Context);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumJobsA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_JOB_ENTRYA** JobEntry, uint32_t* JobsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumJobsA(FaxHandle, JobEntry, JobsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumJobsW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_JOB_ENTRYW** JobEntry, uint32_t* JobsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumJobsW(FaxHandle, JobEntry, JobsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetJobA(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId, Windows::Win32::Fax::FAX_JOB_ENTRYA** JobEntry)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetJobA(FaxHandle, JobId, JobEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetJobW(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId, Windows::Win32::Fax::FAX_JOB_ENTRYW** JobEntry)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetJobW(FaxHandle, JobId, JobEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetJobA(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId, uint32_t Command, Windows::Win32::Fax::FAX_JOB_ENTRYA* JobEntry)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetJobA(FaxHandle, JobId, Command, JobEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetJobW(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId, uint32_t Command, Windows::Win32::Fax::FAX_JOB_ENTRYW* JobEntry)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetJobW(FaxHandle, JobId, Command, JobEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetPageData(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId, uint8_t** Buffer, uint32_t* BufferSize, uint32_t* ImageWidth, uint32_t* ImageHeight)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetPageData(FaxHandle, JobId, Buffer, BufferSize, ImageWidth, ImageHeight);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetDeviceStatusA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_DEVICE_STATUSA** DeviceStatus)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetDeviceStatusA(FaxPortHandle, DeviceStatus);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetDeviceStatusW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_DEVICE_STATUSW** DeviceStatus)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetDeviceStatusW(FaxPortHandle, DeviceStatus);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxAbort(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t JobId)
    {
        auto win32_impl_result = WIN32_IMPL_FaxAbort(FaxHandle, JobId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetConfigurationA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_CONFIGURATIONA** FaxConfig)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetConfigurationA(FaxHandle, FaxConfig);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetConfigurationW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_CONFIGURATIONW** FaxConfig)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetConfigurationW(FaxHandle, FaxConfig);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetConfigurationA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_CONFIGURATIONA* FaxConfig)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetConfigurationA(FaxHandle, FaxConfig);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetConfigurationW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_CONFIGURATIONW* FaxConfig)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetConfigurationW(FaxHandle, FaxConfig);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetLoggingCategoriesA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_LOG_CATEGORYA** Categories, uint32_t* NumberCategories)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetLoggingCategoriesA(FaxHandle, Categories, NumberCategories);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetLoggingCategoriesW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_LOG_CATEGORYW** Categories, uint32_t* NumberCategories)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetLoggingCategoriesW(FaxHandle, Categories, NumberCategories);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetLoggingCategoriesA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_LOG_CATEGORYA* Categories, uint32_t NumberCategories)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetLoggingCategoriesA(FaxHandle, Categories, NumberCategories);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetLoggingCategoriesW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_LOG_CATEGORYW* Categories, uint32_t NumberCategories)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetLoggingCategoriesW(FaxHandle, Categories, NumberCategories);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumPortsA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_PORT_INFOA** PortInfo, uint32_t* PortsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumPortsA(FaxHandle, PortInfo, PortsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumPortsW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_PORT_INFOW** PortInfo, uint32_t* PortsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumPortsW(FaxHandle, PortInfo, PortsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetPortA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_PORT_INFOA** PortInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetPortA(FaxPortHandle, PortInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetPortW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_PORT_INFOW** PortInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetPortW(FaxPortHandle, PortInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetPortA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_PORT_INFOA* PortInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetPortA(FaxPortHandle, PortInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetPortW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_PORT_INFOW* PortInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetPortW(FaxPortHandle, PortInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumRoutingMethodsA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_ROUTING_METHODA** RoutingMethod, uint32_t* MethodsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumRoutingMethodsA(FaxPortHandle, RoutingMethod, MethodsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumRoutingMethodsW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, Windows::Win32::Fax::FAX_ROUTING_METHODW** RoutingMethod, uint32_t* MethodsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumRoutingMethodsW(FaxPortHandle, RoutingMethod, MethodsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnableRoutingMethodA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, int8_t* RoutingGuid, Windows::Win32::SystemServices::BOOL Enabled)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnableRoutingMethodA(FaxPortHandle, RoutingGuid, Enabled);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnableRoutingMethodW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, uint16_t* RoutingGuid, Windows::Win32::SystemServices::BOOL Enabled)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnableRoutingMethodW(FaxPortHandle, RoutingGuid, Enabled);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumGlobalRoutingInfoA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_GLOBAL_ROUTING_INFOA** RoutingInfo, uint32_t* MethodsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumGlobalRoutingInfoA(FaxHandle, RoutingInfo, MethodsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxEnumGlobalRoutingInfoW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_GLOBAL_ROUTING_INFOW** RoutingInfo, uint32_t* MethodsReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FaxEnumGlobalRoutingInfoW(FaxHandle, RoutingInfo, MethodsReturned);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetGlobalRoutingInfoA(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_GLOBAL_ROUTING_INFOA* RoutingInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetGlobalRoutingInfoA(FaxHandle, RoutingInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetGlobalRoutingInfoW(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::Fax::FAX_GLOBAL_ROUTING_INFOW* RoutingInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetGlobalRoutingInfoW(FaxHandle, RoutingInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetRoutingInfoA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, int8_t* RoutingGuid, uint8_t** RoutingInfoBuffer, uint32_t* RoutingInfoBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetRoutingInfoA(FaxPortHandle, RoutingGuid, RoutingInfoBuffer, RoutingInfoBufferSize);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxGetRoutingInfoW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, uint16_t* RoutingGuid, uint8_t** RoutingInfoBuffer, uint32_t* RoutingInfoBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FaxGetRoutingInfoW(FaxPortHandle, RoutingGuid, RoutingInfoBuffer, RoutingInfoBufferSize);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetRoutingInfoA(Windows::Win32::SystemServices::HANDLE FaxPortHandle, int8_t* RoutingGuid, uint8_t* RoutingInfoBuffer, uint32_t RoutingInfoBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetRoutingInfoA(FaxPortHandle, RoutingGuid, RoutingInfoBuffer, RoutingInfoBufferSize);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxSetRoutingInfoW(Windows::Win32::SystemServices::HANDLE FaxPortHandle, uint16_t* RoutingGuid, uint8_t* RoutingInfoBuffer, uint32_t RoutingInfoBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FaxSetRoutingInfoW(FaxPortHandle, RoutingGuid, RoutingInfoBuffer, RoutingInfoBufferSize);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxInitializeEventQueue(Windows::Win32::SystemServices::HANDLE FaxHandle, Windows::Win32::SystemServices::HANDLE CompletionPort, size_t CompletionKey, Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t MessageStart)
    {
        auto win32_impl_result = WIN32_IMPL_FaxInitializeEventQueue(FaxHandle, CompletionPort, CompletionKey, hWnd, MessageStart);
        return win32_impl_result;
    }
    inline void FaxFreeBuffer(void* Buffer)
    {
        WIN32_IMPL_FaxFreeBuffer(Buffer);
    }
    inline Windows::Win32::SystemServices::BOOL FaxStartPrintJobA(int8_t* PrinterName, Windows::Win32::Fax::FAX_PRINT_INFOA* PrintInfo, uint32_t* FaxJobId, Windows::Win32::Fax::FAX_CONTEXT_INFOA* FaxContextInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxStartPrintJobA(PrinterName, PrintInfo, FaxJobId, FaxContextInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxStartPrintJobW(uint16_t* PrinterName, Windows::Win32::Fax::FAX_PRINT_INFOW* PrintInfo, uint32_t* FaxJobId, Windows::Win32::Fax::FAX_CONTEXT_INFOW* FaxContextInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxStartPrintJobW(PrinterName, PrintInfo, FaxJobId, FaxContextInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxPrintCoverPageA(Windows::Win32::Fax::FAX_CONTEXT_INFOA* FaxContextInfo, Windows::Win32::Fax::FAX_COVERPAGE_INFOA* CoverPageInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxPrintCoverPageA(FaxContextInfo, CoverPageInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxPrintCoverPageW(Windows::Win32::Fax::FAX_CONTEXT_INFOW* FaxContextInfo, Windows::Win32::Fax::FAX_COVERPAGE_INFOW* CoverPageInfo)
    {
        auto win32_impl_result = WIN32_IMPL_FaxPrintCoverPageW(FaxContextInfo, CoverPageInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxRegisterServiceProviderW(uint16_t* DeviceProvider, uint16_t* FriendlyName, uint16_t* ImageName, uint16_t* TspName)
    {
        auto win32_impl_result = WIN32_IMPL_FaxRegisterServiceProviderW(DeviceProvider, FriendlyName, ImageName, TspName);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxUnregisterServiceProviderW(uint16_t* DeviceProvider)
    {
        auto win32_impl_result = WIN32_IMPL_FaxUnregisterServiceProviderW(DeviceProvider);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxRegisterRoutingExtensionW(Windows::Win32::SystemServices::HANDLE FaxHandle, uint16_t* ExtensionName, uint16_t* FriendlyName, uint16_t* ImageName, Windows::Win32::Fax::PFAX_ROUTING_INSTALLATION_CALLBACKW* CallBack, void* Context)
    {
        auto win32_impl_result = WIN32_IMPL_FaxRegisterRoutingExtensionW(FaxHandle, ExtensionName, FriendlyName, ImageName, CallBack, Context);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FaxAccessCheck(Windows::Win32::SystemServices::HANDLE FaxHandle, uint32_t AccessMask)
    {
        auto win32_impl_result = WIN32_IMPL_FaxAccessCheck(FaxHandle, AccessMask);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL CanSendToFaxRecipient()
    {
        auto win32_impl_result = WIN32_IMPL_CanSendToFaxRecipient();
        return win32_impl_result;
    }
    inline uint32_t SendToFaxRecipient(Windows::Win32::Fax::SendToMode sndMode, uint16_t* lpFileName)
    {
        auto win32_impl_result = WIN32_IMPL_SendToFaxRecipient(sndMode, lpFileName);
        return win32_impl_result;
    }

    inline constexpr int32_t lDEFAULT_PREFETCH_SIZE = 100;
    inline constexpr uint16_t wcharREASSIGN_RECIPIENTS_DELIMITER = 0x3b;
#pragma endregion methods

}
#endif
