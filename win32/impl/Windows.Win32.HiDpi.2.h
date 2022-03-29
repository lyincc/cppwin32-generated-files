// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_HiDpi_2_H
#define WIN32_Windows_Win32_HiDpi_2_H
#include "win32/impl/Windows.Win32.HiDpi.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    intptr_t __stdcall WIN32_IMPL_OpenThemeDataForDpi(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd, uint16_t* pszClassList, uint32_t dpi) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetDialogControlDpiChangeBehavior(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, win32::Windows::Win32::HiDpi::DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS mask, win32::Windows::Win32::HiDpi::DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS values) noexcept;
    win32::Windows::Win32::HiDpi::DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS __stdcall WIN32_IMPL_GetDialogControlDpiChangeBehavior(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetDialogDpiChangeBehavior(win32::Windows::Win32::WindowsAndMessaging::HWND hDlg, win32::Windows::Win32::HiDpi::DIALOG_DPI_CHANGE_BEHAVIORS mask, win32::Windows::Win32::HiDpi::DIALOG_DPI_CHANGE_BEHAVIORS values) noexcept;
    win32::Windows::Win32::HiDpi::DIALOG_DPI_CHANGE_BEHAVIORS __stdcall WIN32_IMPL_GetDialogDpiChangeBehavior(win32::Windows::Win32::WindowsAndMessaging::HWND hDlg) noexcept;
    int32_t __stdcall WIN32_IMPL_GetSystemMetricsForDpi(int32_t nIndex, uint32_t dpi) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_AdjustWindowRectExForDpi(win32::Windows::Win32::DisplayDevices::RECT* lpRect, uint32_t dwStyle, win32::Windows::Win32::SystemServices::BOOL bMenu, uint32_t dwExStyle, uint32_t dpi) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_LogicalToPhysicalPointForPerMonitorDPI(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, win32::Windows::Win32::DisplayDevices::POINT* lpPoint) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_PhysicalToLogicalPointForPerMonitorDPI(win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, win32::Windows::Win32::DisplayDevices::POINT* lpPoint) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SystemParametersInfoForDpi(uint32_t uiAction, uint32_t uiParam, void* pvParam, uint32_t fWinIni, uint32_t dpi) noexcept;
    intptr_t __stdcall WIN32_IMPL_SetThreadDpiAwarenessContext(intptr_t dpiContext) noexcept;
    intptr_t __stdcall WIN32_IMPL_GetThreadDpiAwarenessContext() noexcept;
    intptr_t __stdcall WIN32_IMPL_GetWindowDpiAwarenessContext(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd) noexcept;
    win32::Windows::Win32::HiDpi::DPI_AWARENESS __stdcall WIN32_IMPL_GetAwarenessFromDpiAwarenessContext(intptr_t value) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDpiFromDpiAwarenessContext(intptr_t value) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_AreDpiAwarenessContextsEqual(intptr_t dpiContextA, intptr_t dpiContextB) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_IsValidDpiAwarenessContext(intptr_t value) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDpiForWindow(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd) noexcept;
    uint32_t __stdcall WIN32_IMPL_GetDpiForSystem() noexcept;
    uint32_t __stdcall WIN32_IMPL_GetSystemDpiForProcess(win32::Windows::Win32::SystemServices::HANDLE hProcess) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_EnableNonClientDpiScaling(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SetProcessDpiAwarenessContext(intptr_t value) noexcept;
    win32::Windows::Win32::HiDpi::DPI_HOSTING_BEHAVIOR __stdcall WIN32_IMPL_SetThreadDpiHostingBehavior(win32::Windows::Win32::HiDpi::DPI_HOSTING_BEHAVIOR value) noexcept;
    win32::Windows::Win32::HiDpi::DPI_HOSTING_BEHAVIOR __stdcall WIN32_IMPL_GetThreadDpiHostingBehavior() noexcept;
    win32::Windows::Win32::HiDpi::DPI_HOSTING_BEHAVIOR __stdcall WIN32_IMPL_GetWindowDpiHostingBehavior(win32::Windows::Win32::WindowsAndMessaging::HWND hwnd) noexcept;
    int32_t __stdcall WIN32_IMPL_SetProcessDpiAwareness(win32::Windows::Win32::HiDpi::PROCESS_DPI_AWARENESS value) noexcept;
    int32_t __stdcall WIN32_IMPL_GetProcessDpiAwareness(win32::Windows::Win32::SystemServices::HANDLE hprocess, win32::Windows::Win32::HiDpi::PROCESS_DPI_AWARENESS* value) noexcept;
    int32_t __stdcall WIN32_IMPL_GetDpiForMonitor(intptr_t hmonitor, win32::Windows::Win32::HiDpi::MONITOR_DPI_TYPE dpiType, uint32_t* dpiX, uint32_t* dpiY) noexcept;
}
WIN32_IMPL_LINK(OpenThemeDataForDpi, 12)
WIN32_IMPL_LINK(SetDialogControlDpiChangeBehavior, 12)
WIN32_IMPL_LINK(GetDialogControlDpiChangeBehavior, 4)
WIN32_IMPL_LINK(SetDialogDpiChangeBehavior, 12)
WIN32_IMPL_LINK(GetDialogDpiChangeBehavior, 4)
WIN32_IMPL_LINK(GetSystemMetricsForDpi, 8)
WIN32_IMPL_LINK(AdjustWindowRectExForDpi, 20)
WIN32_IMPL_LINK(LogicalToPhysicalPointForPerMonitorDPI, 8)
WIN32_IMPL_LINK(PhysicalToLogicalPointForPerMonitorDPI, 8)
WIN32_IMPL_LINK(SystemParametersInfoForDpi, 20)
WIN32_IMPL_LINK(SetThreadDpiAwarenessContext, 4)
WIN32_IMPL_LINK(GetThreadDpiAwarenessContext, 0)
WIN32_IMPL_LINK(GetWindowDpiAwarenessContext, 4)
WIN32_IMPL_LINK(GetAwarenessFromDpiAwarenessContext, 4)
WIN32_IMPL_LINK(GetDpiFromDpiAwarenessContext, 4)
WIN32_IMPL_LINK(AreDpiAwarenessContextsEqual, 8)
WIN32_IMPL_LINK(IsValidDpiAwarenessContext, 4)
WIN32_IMPL_LINK(GetDpiForWindow, 4)
WIN32_IMPL_LINK(GetDpiForSystem, 0)
WIN32_IMPL_LINK(GetSystemDpiForProcess, 4)
WIN32_IMPL_LINK(EnableNonClientDpiScaling, 4)
WIN32_IMPL_LINK(SetProcessDpiAwarenessContext, 4)
WIN32_IMPL_LINK(SetThreadDpiHostingBehavior, 4)
WIN32_IMPL_LINK(GetThreadDpiHostingBehavior, 0)
WIN32_IMPL_LINK(GetWindowDpiHostingBehavior, 4)
WIN32_IMPL_LINK(SetProcessDpiAwareness, 4)
WIN32_IMPL_LINK(GetProcessDpiAwareness, 8)
WIN32_IMPL_LINK(GetDpiForMonitor, 16)

#pragma endregion abi_methods

#endif
