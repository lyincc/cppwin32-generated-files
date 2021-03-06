// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_InstallableFileSystems_2_H
#define WIN32_Windows_Win32_InstallableFileSystems_2_H
#include "win32/impl/Windows.Win32.InstallableFileSystems.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_FilterLoad(uint16_t* lpFilterName) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterUnload(uint16_t* lpFilterName) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterCreate(uint16_t* lpFilterName, win32::Windows::Win32::InstallableFileSystems::HFILTER* hFilter) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterClose(win32::Windows::Win32::InstallableFileSystems::HFILTER hFilter) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceCreate(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName, win32::Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE* hInstance) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceClose(win32::Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE hInstance) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterAttach(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName, uint32_t dwCreatedInstanceNameLength, uint16_t* lpCreatedInstanceName) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterAttachAtAltitude(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpAltitude, uint16_t* lpInstanceName, uint32_t dwCreatedInstanceNameLength, uint16_t* lpCreatedInstanceName) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterDetach(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterFindFirst(win32::Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, win32::Windows::Win32::InstallableFileSystems::FilterFindHandle* lpFilterFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterFindNext(win32::Windows::Win32::SystemServices::HANDLE hFilterFind, win32::Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterFindClose(win32::Windows::Win32::SystemServices::HANDLE hFilterFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeFindFirst(win32::Windows::Win32::InstallableFileSystems::FILTER_VOLUME_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, win32::Windows::Win32::InstallableFileSystems::FilterVolumeFindHandle* lpVolumeFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeFindNext(win32::Windows::Win32::SystemServices::HANDLE hVolumeFind, win32::Windows::Win32::InstallableFileSystems::FILTER_VOLUME_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeFindClose(win32::Windows::Win32::SystemServices::HANDLE hVolumeFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceFindFirst(uint16_t* lpFilterName, win32::Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, win32::Windows::Win32::InstallableFileSystems::FilterInstanceFindHandle* lpFilterInstanceFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceFindNext(win32::Windows::Win32::SystemServices::HANDLE hFilterInstanceFind, win32::Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceFindClose(win32::Windows::Win32::SystemServices::HANDLE hFilterInstanceFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeInstanceFindFirst(uint16_t* lpVolumeName, win32::Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, win32::Windows::Win32::InstallableFileSystems::FilterVolumeInstanceFindHandle* lpVolumeInstanceFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeInstanceFindNext(win32::Windows::Win32::SystemServices::HANDLE hVolumeInstanceFind, win32::Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterVolumeInstanceFindClose(win32::Windows::Win32::SystemServices::HANDLE hVolumeInstanceFind) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterGetInformation(win32::Windows::Win32::InstallableFileSystems::HFILTER hFilter, win32::Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterInstanceGetInformation(win32::Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE hInstance, win32::Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterConnectCommunicationPort(uint16_t* lpPortName, uint32_t dwOptions, void* lpContext, uint16_t wSizeOfContext, win32::Windows::Win32::SystemServices::SECURITY_ATTRIBUTES* lpSecurityAttributes, win32::Windows::Win32::SystemServices::HANDLE* hPort) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterSendMessage(win32::Windows::Win32::SystemServices::HANDLE hPort, void* lpInBuffer, uint32_t dwInBufferSize, void* lpOutBuffer, uint32_t dwOutBufferSize, uint32_t* lpBytesReturned) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterGetMessage(win32::Windows::Win32::SystemServices::HANDLE hPort, win32::Windows::Win32::InstallableFileSystems::FILTER_MESSAGE_HEADER* lpMessageBuffer, uint32_t dwMessageBufferSize, win32::Windows::Win32::SystemServices::OVERLAPPED* lpOverlapped) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterReplyMessage(win32::Windows::Win32::SystemServices::HANDLE hPort, win32::Windows::Win32::InstallableFileSystems::FILTER_REPLY_HEADER* lpReplyBuffer, uint32_t dwReplyBufferSize) noexcept;
    int32_t __stdcall WIN32_IMPL_FilterGetDosName(uint16_t* lpVolumeName, uint16_t* lpDosName, uint32_t dwDosNameBufferSize) noexcept;
    uint16_t __stdcall WIN32_IMPL_RtlCaptureStackBackTrace(uint32_t FramesToSkip, uint32_t FramesToCapture, void** BackTrace, uint32_t* BackTraceHash) noexcept;
}
WIN32_IMPL_LINK(FilterLoad, 4)
WIN32_IMPL_LINK(FilterUnload, 4)
WIN32_IMPL_LINK(FilterCreate, 8)
WIN32_IMPL_LINK(FilterClose, 4)
WIN32_IMPL_LINK(FilterInstanceCreate, 16)
WIN32_IMPL_LINK(FilterInstanceClose, 4)
WIN32_IMPL_LINK(FilterAttach, 20)
WIN32_IMPL_LINK(FilterAttachAtAltitude, 24)
WIN32_IMPL_LINK(FilterDetach, 12)
WIN32_IMPL_LINK(FilterFindFirst, 20)
WIN32_IMPL_LINK(FilterFindNext, 20)
WIN32_IMPL_LINK(FilterFindClose, 4)
WIN32_IMPL_LINK(FilterVolumeFindFirst, 20)
WIN32_IMPL_LINK(FilterVolumeFindNext, 20)
WIN32_IMPL_LINK(FilterVolumeFindClose, 4)
WIN32_IMPL_LINK(FilterInstanceFindFirst, 24)
WIN32_IMPL_LINK(FilterInstanceFindNext, 20)
WIN32_IMPL_LINK(FilterInstanceFindClose, 4)
WIN32_IMPL_LINK(FilterVolumeInstanceFindFirst, 24)
WIN32_IMPL_LINK(FilterVolumeInstanceFindNext, 20)
WIN32_IMPL_LINK(FilterVolumeInstanceFindClose, 4)
WIN32_IMPL_LINK(FilterGetInformation, 20)
WIN32_IMPL_LINK(FilterInstanceGetInformation, 20)
WIN32_IMPL_LINK(FilterConnectCommunicationPort, 24)
WIN32_IMPL_LINK(FilterSendMessage, 24)
WIN32_IMPL_LINK(FilterGetMessage, 16)
WIN32_IMPL_LINK(FilterReplyMessage, 12)
WIN32_IMPL_LINK(FilterGetDosName, 12)
WIN32_IMPL_LINK(RtlCaptureStackBackTrace, 16)

#pragma endregion abi_methods

#endif
