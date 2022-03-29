// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Audio_2_H
#define WIN32_Windows_Win32_Audio_2_H
#include "win32/impl/Windows.Win32.Audio.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_DirectSoundCreate(::win32::guid* pcGuidDevice, win32::Windows::Win32::Audio::IDirectSound** ppDS, win32::Windows::Win32::Com::IUnknown* pUnkOuter) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundEnumerateA(win32::Windows::Win32::Audio::LPDSENUMCALLBACKA* pDSEnumCallback, void* pContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundEnumerateW(win32::Windows::Win32::Audio::LPDSENUMCALLBACKW* pDSEnumCallback, void* pContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundCaptureCreate(::win32::guid* pcGuidDevice, win32::Windows::Win32::Audio::IDirectSoundCapture** ppDSC, win32::Windows::Win32::Com::IUnknown* pUnkOuter) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundCaptureEnumerateA(win32::Windows::Win32::Audio::LPDSENUMCALLBACKA* pDSEnumCallback, void* pContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundCaptureEnumerateW(win32::Windows::Win32::Audio::LPDSENUMCALLBACKW* pDSEnumCallback, void* pContext) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundCreate8(::win32::guid* pcGuidDevice, win32::Windows::Win32::Audio::IDirectSound8** ppDS8, win32::Windows::Win32::Com::IUnknown* pUnkOuter) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundCaptureCreate8(::win32::guid* pcGuidDevice, win32::Windows::Win32::Audio::IDirectSoundCapture** ppDSC8, win32::Windows::Win32::Com::IUnknown* pUnkOuter) noexcept;
    int32_t __stdcall WIN32_IMPL_DirectSoundFullDuplexCreate(::win32::guid* pcGuidCaptureDevice, ::win32::guid* pcGuidRenderDevice, win32::Windows::Win32::Audio::DSCBUFFERDESC* pcDSCBufferDesc, win32::Windows::Win32::Audio::DSBUFFERDESC* pcDSBufferDesc, win32::Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t dwLevel, win32::Windows::Win32::Audio::IDirectSoundFullDuplex** ppDSFD, win32::Windows::Win32::Audio::IDirectSoundCaptureBuffer8** ppDSCBuffer8, win32::Windows::Win32::Audio::IDirectSoundBuffer8** ppDSBuffer8, win32::Windows::Win32::Com::IUnknown* pUnkOuter) noexcept;
}
WIN32_IMPL_LINK(DirectSoundCreate, 12)
WIN32_IMPL_LINK(DirectSoundEnumerateA, 8)
WIN32_IMPL_LINK(DirectSoundEnumerateW, 8)
WIN32_IMPL_LINK(DirectSoundCaptureCreate, 12)
WIN32_IMPL_LINK(DirectSoundCaptureEnumerateA, 8)
WIN32_IMPL_LINK(DirectSoundCaptureEnumerateW, 8)
WIN32_IMPL_LINK(DirectSoundCreate8, 12)
WIN32_IMPL_LINK(DirectSoundCaptureCreate8, 12)
WIN32_IMPL_LINK(DirectSoundFullDuplexCreate, 40)

#pragma endregion abi_methods

#endif