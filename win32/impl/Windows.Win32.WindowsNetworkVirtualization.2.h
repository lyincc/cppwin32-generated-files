// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsNetworkVirtualization_2_H
#define WIN32_Windows_Win32_WindowsNetworkVirtualization_2_H
#include "win32/impl/Windows.Win32.WindowsNetworkVirtualization.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_WnvOpen() noexcept;
    uint32_t __stdcall WIN32_IMPL_WnvRequestNotification(win32::Windows::Win32::SystemServices::HANDLE WnvHandle, win32::Windows::Win32::WindowsNetworkVirtualization::WNV_NOTIFICATION_PARAM* NotificationParam, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped, uint32_t* BytesTransferred) noexcept;
}
WIN32_IMPL_LINK(WnvOpen, 0)
WIN32_IMPL_LINK(WnvRequestNotification, 16)

#pragma endregion abi_methods

#endif
