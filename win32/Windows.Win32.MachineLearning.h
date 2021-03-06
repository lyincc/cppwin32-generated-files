// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_MachineLearning_H
#define WIN32_Windows_Win32_MachineLearning_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.MachineLearning.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::MachineLearning
{
#pragma region methods
    inline int32_t WinMLCreateRuntime(Windows::Win32::MachineLearning::IWinMLRuntime** runtime)
    {
        auto win32_impl_result = WIN32_IMPL_WinMLCreateRuntime(runtime);
        return win32_impl_result;
    }
    inline int32_t MLCreateOperatorRegistry(Windows::Win32::MachineLearning::IMLOperatorRegistry** registry)
    {
        auto win32_impl_result = WIN32_IMPL_MLCreateOperatorRegistry(registry);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
