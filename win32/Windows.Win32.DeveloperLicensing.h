// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DeveloperLicensing_H
#define WIN32_Windows_Win32_DeveloperLicensing_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.DeveloperLicensing.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::DeveloperLicensing
{
#pragma region methods
    inline int32_t CheckDeveloperLicense(Windows::Win32::WindowsProgramming::FILETIME* pExpiration)
    {
        auto win32_impl_result = WIN32_IMPL_CheckDeveloperLicense(pExpiration);
        return win32_impl_result;
    }
    inline int32_t AcquireDeveloperLicense(Windows::Win32::WindowsAndMessaging::HWND hwndParent, Windows::Win32::WindowsProgramming::FILETIME* pExpiration)
    {
        auto win32_impl_result = WIN32_IMPL_AcquireDeveloperLicense(hwndParent, pExpiration);
        return win32_impl_result;
    }
    inline int32_t RemoveDeveloperLicense(Windows::Win32::WindowsAndMessaging::HWND hwndParent)
    {
        auto win32_impl_result = WIN32_IMPL_RemoveDeveloperLicense(hwndParent);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
