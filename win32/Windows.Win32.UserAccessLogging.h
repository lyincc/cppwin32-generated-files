// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UserAccessLogging_H
#define WIN32_Windows_Win32_UserAccessLogging_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.UserAccessLogging.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::UserAccessLogging
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL DoMsCtfMonitor(uint32_t dwFlags, Windows::Win32::SystemServices::HANDLE hEventForServiceStop)
    {
        auto win32_impl_result = WIN32_IMPL_DoMsCtfMonitor(dwFlags, hEventForServiceStop);
        return win32_impl_result;
    }
    inline int32_t UalStart(Windows::Win32::UserAccessLogging::UAL_DATA_BLOB* Data)
    {
        auto win32_impl_result = WIN32_IMPL_UalStart(Data);
        return win32_impl_result;
    }
    inline int32_t UalStop(Windows::Win32::UserAccessLogging::UAL_DATA_BLOB* Data)
    {
        auto win32_impl_result = WIN32_IMPL_UalStop(Data);
        return win32_impl_result;
    }
    inline int32_t UalInstrument(Windows::Win32::UserAccessLogging::UAL_DATA_BLOB* Data)
    {
        auto win32_impl_result = WIN32_IMPL_UalInstrument(Data);
        return win32_impl_result;
    }
    inline int32_t UalRegisterProduct(uint16_t* wszProductName, uint16_t* wszRoleName, uint16_t* wszGuid)
    {
        auto win32_impl_result = WIN32_IMPL_UalRegisterProduct(wszProductName, wszRoleName, wszGuid);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
