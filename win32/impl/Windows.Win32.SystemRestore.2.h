// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_SystemRestore_2_H
#define WIN32_Windows_Win32_SystemRestore_2_H
#include "win32/impl/Windows.Win32.SystemRestore.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SRSetRestorePointA(win32::Windows::Win32::SystemRestore::RESTOREPOINTINFOA* pRestorePtSpec, win32::Windows::Win32::SystemRestore::STATEMGRSTATUS* pSMgrStatus) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_SRSetRestorePointW(win32::Windows::Win32::SystemRestore::RESTOREPOINTINFOW* pRestorePtSpec, win32::Windows::Win32::SystemRestore::STATEMGRSTATUS* pSMgrStatus) noexcept;
}
WIN32_IMPL_LINK(SRSetRestorePointA, 8)
WIN32_IMPL_LINK(SRSetRestorePointW, 8)

#pragma endregion abi_methods

#endif
