// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_HardwareCounterProfiling_H
#define WIN32_Windows_Win32_HardwareCounterProfiling_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.HardwareCounterProfiling.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::HardwareCounterProfiling
{
#pragma region methods
    inline uint32_t EnableThreadProfiling(Windows::Win32::SystemServices::HANDLE ThreadHandle, uint32_t Flags, uint64_t HardwareCounters, Windows::Win32::SystemServices::HANDLE* PerformanceDataHandle)
    {
        auto win32_impl_result = WIN32_IMPL_EnableThreadProfiling(ThreadHandle, Flags, HardwareCounters, PerformanceDataHandle);
        return win32_impl_result;
    }
    inline uint32_t DisableThreadProfiling(Windows::Win32::SystemServices::HANDLE PerformanceDataHandle)
    {
        auto win32_impl_result = WIN32_IMPL_DisableThreadProfiling(PerformanceDataHandle);
        return win32_impl_result;
    }
    inline uint32_t QueryThreadProfiling(Windows::Win32::SystemServices::HANDLE ThreadHandle, uint8_t* Enabled)
    {
        auto win32_impl_result = WIN32_IMPL_QueryThreadProfiling(ThreadHandle, Enabled);
        return win32_impl_result;
    }
    inline uint32_t ReadThreadProfilingData(Windows::Win32::SystemServices::HANDLE PerformanceDataHandle, uint32_t Flags, Windows::Win32::HardwareCounterProfiling::PERFORMANCE_DATA* PerformanceData)
    {
        auto win32_impl_result = WIN32_IMPL_ReadThreadProfilingData(PerformanceDataHandle, Flags, PerformanceData);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
