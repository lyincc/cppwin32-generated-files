// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Sync_2_H
#define WIN32_Windows_Win32_Sync_2_H
#include "win32/impl/Windows.Win32.Sync.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    void __stdcall WIN32_IMPL_EnterCriticalSection(win32::Windows::Win32::SystemServices::RTL_CRITICAL_SECTION* lpCriticalSection) noexcept;
    win32::Windows::Win32::SystemServices::NamespaceHandle __stdcall WIN32_IMPL_CreatePrivateNamespaceA(win32::Windows::Win32::SystemServices::SECURITY_ATTRIBUTES* lpPrivateNamespaceAttributes, void* lpBoundaryDescriptor, int8_t* lpAliasPrefix) noexcept;
    win32::Windows::Win32::SystemServices::NamespaceHandle __stdcall WIN32_IMPL_OpenPrivateNamespaceA(void* lpBoundaryDescriptor, int8_t* lpAliasPrefix) noexcept;
}
WIN32_IMPL_LINK(EnterCriticalSection, 4)
WIN32_IMPL_LINK(CreatePrivateNamespaceA, 12)
WIN32_IMPL_LINK(OpenPrivateNamespaceA, 8)

#pragma endregion abi_methods

#endif
