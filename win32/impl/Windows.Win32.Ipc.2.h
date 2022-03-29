// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Ipc_2_H
#define WIN32_Windows_Win32_Ipc_2_H
#include "win32/impl/Windows.Win32.Ipc.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::HANDLE __stdcall WIN32_IMPL_CreateNamedPipeA(int8_t* lpName, uint32_t dwOpenMode, uint32_t dwPipeMode, uint32_t nMaxInstances, uint32_t nOutBufferSize, uint32_t nInBufferSize, uint32_t nDefaultTimeOut, win32::Windows::Win32::SystemServices::SECURITY_ATTRIBUTES* lpSecurityAttributes) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WaitNamedPipeA(int8_t* lpNamedPipeName, uint32_t nTimeOut) noexcept;
}
WIN32_IMPL_LINK(CreateNamedPipeA, 32)
WIN32_IMPL_LINK(WaitNamedPipeA, 8)

#pragma endregion abi_methods

#endif
