// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Xps_2_H
#define WIN32_Windows_Win32_Xps_2_H
#include "win32/impl/Windows.Win32.Xps.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_DeviceCapabilitiesA(int8_t* pDevice, int8_t* pPort, uint16_t fwCapability, int8_t* pOutput, win32::Windows::Win32::Xps::DEVMODEA* pDevMode) noexcept;
    int32_t __stdcall WIN32_IMPL_DeviceCapabilitiesW(uint16_t* pDevice, uint16_t* pPort, uint16_t fwCapability, uint16_t* pOutput, win32::Windows::Win32::DisplayDevices::DEVMODEW* pDevMode) noexcept;
    int32_t __stdcall WIN32_IMPL_Escape(win32::Windows::Win32::Gdi::HDC hdc, int32_t iEscape, int32_t cjIn, int8_t* pvIn, void* pvOut) noexcept;
    int32_t __stdcall WIN32_IMPL_ExtEscape(win32::Windows::Win32::Gdi::HDC hdc, int32_t iEscape, int32_t cjInput, int8_t* lpInData, int32_t cjOutput, int8_t* lpOutData) noexcept;
    int32_t __stdcall WIN32_IMPL_StartDocA(win32::Windows::Win32::Gdi::HDC hdc, win32::Windows::Win32::Xps::DOCINFOA* lpdi) noexcept;
    int32_t __stdcall WIN32_IMPL_StartDocW(win32::Windows::Win32::Gdi::HDC hdc, win32::Windows::Win32::Xps::DOCINFOW* lpdi) noexcept;
    int32_t __stdcall WIN32_IMPL_EndDoc(win32::Windows::Win32::Gdi::HDC hdc) noexcept;
    int32_t __stdcall WIN32_IMPL_StartPage(win32::Windows::Win32::Gdi::HDC hdc) noexcept;
    int32_t __stdcall WIN32_IMPL_EndPage(win32::Windows::Win32::Gdi::HDC hdc) noexcept;
    int32_t __stdcall WIN32_IMPL_AbortDoc(win32::Windows::Win32::Gdi::HDC hdc) noexcept;
    int32_t __stdcall WIN32_IMPL_SetAbortProc(win32::Windows::Win32::Gdi::HDC hdc, win32::Windows::Win32::Xps::ABORTPROC* proc) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_PrintWindow(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd, win32::Windows::Win32::Gdi::HDC hdcBlt, uint32_t nFlags) noexcept;
    int32_t __stdcall WIN32_IMPL_PTQuerySchemaVersionSupport(uint16_t* pszPrinterName, uint32_t* pMaxVersion) noexcept;
    int32_t __stdcall WIN32_IMPL_PTOpenProvider(uint16_t* pszPrinterName, uint32_t dwVersion, win32::Windows::Win32::Xps::HPTPROVIDER__** phProvider) noexcept;
    int32_t __stdcall WIN32_IMPL_PTOpenProviderEx(uint16_t* pszPrinterName, uint32_t dwMaxVersion, uint32_t dwPrefVersion, win32::Windows::Win32::Xps::HPTPROVIDER__** phProvider, uint32_t* pUsedVersion) noexcept;
    int32_t __stdcall WIN32_IMPL_PTCloseProvider(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider) noexcept;
    int32_t __stdcall WIN32_IMPL_PTReleaseMemory(void* pBuffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PTGetPrintCapabilities(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, win32::Windows::Win32::StructuredStorage::IStream* pPrintTicket, win32::Windows::Win32::StructuredStorage::IStream* pCapabilities, win32::Windows::Win32::Automation::BSTR* pbstrErrorMessage) noexcept;
    int32_t __stdcall WIN32_IMPL_PTGetPrintDeviceCapabilities(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, win32::Windows::Win32::StructuredStorage::IStream* pPrintTicket, win32::Windows::Win32::StructuredStorage::IStream* pDeviceCapabilities, win32::Windows::Win32::Automation::BSTR* pbstrErrorMessage) noexcept;
    int32_t __stdcall WIN32_IMPL_PTGetPrintDeviceResources(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, uint16_t* pszLocaleName, win32::Windows::Win32::StructuredStorage::IStream* pPrintTicket, win32::Windows::Win32::StructuredStorage::IStream* pDeviceResources, win32::Windows::Win32::Automation::BSTR* pbstrErrorMessage) noexcept;
    int32_t __stdcall WIN32_IMPL_PTMergeAndValidatePrintTicket(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, win32::Windows::Win32::StructuredStorage::IStream* pBaseTicket, win32::Windows::Win32::StructuredStorage::IStream* pDeltaTicket, win32::Windows::Win32::Xps::EPrintTicketScope scope, win32::Windows::Win32::StructuredStorage::IStream* pResultTicket, win32::Windows::Win32::Automation::BSTR* pbstrErrorMessage) noexcept;
    int32_t __stdcall WIN32_IMPL_PTConvertPrintTicketToDevMode(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, win32::Windows::Win32::StructuredStorage::IStream* pPrintTicket, win32::Windows::Win32::Xps::EDefaultDevmodeType baseDevmodeType, win32::Windows::Win32::Xps::EPrintTicketScope scope, uint32_t* pcbDevmode, win32::Windows::Win32::Xps::DEVMODEA** ppDevmode, win32::Windows::Win32::Automation::BSTR* pbstrErrorMessage) noexcept;
    int32_t __stdcall WIN32_IMPL_PTConvertDevModeToPrintTicket(win32::Windows::Win32::Xps::HPTPROVIDER__* hProvider, uint32_t cbDevmode, win32::Windows::Win32::Xps::DEVMODEA* pDevmode, win32::Windows::Win32::Xps::EPrintTicketScope scope, win32::Windows::Win32::StructuredStorage::IStream* pPrintTicket) noexcept;
}
WIN32_IMPL_LINK(DeviceCapabilitiesA, 20)
WIN32_IMPL_LINK(DeviceCapabilitiesW, 20)
WIN32_IMPL_LINK(Escape, 20)
WIN32_IMPL_LINK(ExtEscape, 24)
WIN32_IMPL_LINK(StartDocA, 8)
WIN32_IMPL_LINK(StartDocW, 8)
WIN32_IMPL_LINK(EndDoc, 4)
WIN32_IMPL_LINK(StartPage, 4)
WIN32_IMPL_LINK(EndPage, 4)
WIN32_IMPL_LINK(AbortDoc, 4)
WIN32_IMPL_LINK(SetAbortProc, 8)
WIN32_IMPL_LINK(PrintWindow, 12)
WIN32_IMPL_LINK(PTQuerySchemaVersionSupport, 8)
WIN32_IMPL_LINK(PTOpenProvider, 12)
WIN32_IMPL_LINK(PTOpenProviderEx, 20)
WIN32_IMPL_LINK(PTCloseProvider, 4)
WIN32_IMPL_LINK(PTReleaseMemory, 4)
WIN32_IMPL_LINK(PTGetPrintCapabilities, 16)
WIN32_IMPL_LINK(PTGetPrintDeviceCapabilities, 16)
WIN32_IMPL_LINK(PTGetPrintDeviceResources, 20)
WIN32_IMPL_LINK(PTMergeAndValidatePrintTicket, 24)
WIN32_IMPL_LINK(PTConvertPrintTicketToDevMode, 28)
WIN32_IMPL_LINK(PTConvertDevModeToPrintTicket, 20)

#pragma endregion abi_methods

#endif
