// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DeveloperLicensing_2_H
#define WIN32_Windows_Win32_DeveloperLicensing_2_H
#include "win32/impl/Windows.Win32.DeveloperLicensing.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_CheckDeveloperLicense(win32::Windows::Win32::WindowsProgramming::FILETIME* pExpiration) noexcept;
    int32_t __stdcall WIN32_IMPL_AcquireDeveloperLicense(win32::Windows::Win32::WindowsAndMessaging::HWND hwndParent, win32::Windows::Win32::WindowsProgramming::FILETIME* pExpiration) noexcept;
    int32_t __stdcall WIN32_IMPL_RemoveDeveloperLicense(win32::Windows::Win32::WindowsAndMessaging::HWND hwndParent) noexcept;
}
WIN32_IMPL_LINK(CheckDeveloperLicense, 4)
WIN32_IMPL_LINK(AcquireDeveloperLicense, 8)
WIN32_IMPL_LINK(RemoveDeveloperLicense, 4)

#pragma endregion abi_methods

#endif
