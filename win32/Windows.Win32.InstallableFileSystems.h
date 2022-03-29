// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_InstallableFileSystems_H
#define WIN32_Windows_Win32_InstallableFileSystems_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.InstallableFileSystems.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::InstallableFileSystems
{
#pragma region methods
    inline int32_t FilterLoad(uint16_t* lpFilterName)
    {
        auto win32_impl_result = WIN32_IMPL_FilterLoad(lpFilterName);
        return win32_impl_result;
    }
    inline int32_t FilterUnload(uint16_t* lpFilterName)
    {
        auto win32_impl_result = WIN32_IMPL_FilterUnload(lpFilterName);
        return win32_impl_result;
    }
    inline int32_t FilterCreate(uint16_t* lpFilterName, Windows::Win32::InstallableFileSystems::HFILTER* hFilter)
    {
        auto win32_impl_result = WIN32_IMPL_FilterCreate(lpFilterName, hFilter);
        return win32_impl_result;
    }
    inline int32_t FilterClose(Windows::Win32::InstallableFileSystems::HFILTER hFilter)
    {
        auto win32_impl_result = WIN32_IMPL_FilterClose(hFilter);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceCreate(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName, Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE* hInstance)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceCreate(lpFilterName, lpVolumeName, lpInstanceName, hInstance);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceClose(Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE hInstance)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceClose(hInstance);
        return win32_impl_result;
    }
    inline int32_t FilterAttach(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName, uint32_t dwCreatedInstanceNameLength, uint16_t* lpCreatedInstanceName)
    {
        auto win32_impl_result = WIN32_IMPL_FilterAttach(lpFilterName, lpVolumeName, lpInstanceName, dwCreatedInstanceNameLength, lpCreatedInstanceName);
        return win32_impl_result;
    }
    inline int32_t FilterAttachAtAltitude(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpAltitude, uint16_t* lpInstanceName, uint32_t dwCreatedInstanceNameLength, uint16_t* lpCreatedInstanceName)
    {
        auto win32_impl_result = WIN32_IMPL_FilterAttachAtAltitude(lpFilterName, lpVolumeName, lpAltitude, lpInstanceName, dwCreatedInstanceNameLength, lpCreatedInstanceName);
        return win32_impl_result;
    }
    inline int32_t FilterDetach(uint16_t* lpFilterName, uint16_t* lpVolumeName, uint16_t* lpInstanceName)
    {
        auto win32_impl_result = WIN32_IMPL_FilterDetach(lpFilterName, lpVolumeName, lpInstanceName);
        return win32_impl_result;
    }
    inline int32_t FilterFindFirst(Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, Windows::Win32::InstallableFileSystems::FilterFindHandle* lpFilterFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterFindFirst(dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned, lpFilterFind);
        return win32_impl_result;
    }
    inline int32_t FilterFindNext(Windows::Win32::SystemServices::HANDLE hFilterFind, Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterFindNext(hFilterFind, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterFindClose(Windows::Win32::SystemServices::HANDLE hFilterFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterFindClose(hFilterFind);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeFindFirst(Windows::Win32::InstallableFileSystems::FILTER_VOLUME_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, Windows::Win32::InstallableFileSystems::FilterVolumeFindHandle* lpVolumeFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeFindFirst(dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned, lpVolumeFind);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeFindNext(Windows::Win32::SystemServices::HANDLE hVolumeFind, Windows::Win32::InstallableFileSystems::FILTER_VOLUME_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeFindNext(hVolumeFind, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeFindClose(Windows::Win32::SystemServices::HANDLE hVolumeFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeFindClose(hVolumeFind);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceFindFirst(uint16_t* lpFilterName, Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, Windows::Win32::InstallableFileSystems::FilterInstanceFindHandle* lpFilterInstanceFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceFindFirst(lpFilterName, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned, lpFilterInstanceFind);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceFindNext(Windows::Win32::SystemServices::HANDLE hFilterInstanceFind, Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceFindNext(hFilterInstanceFind, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceFindClose(Windows::Win32::SystemServices::HANDLE hFilterInstanceFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceFindClose(hFilterInstanceFind);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeInstanceFindFirst(uint16_t* lpVolumeName, Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned, Windows::Win32::InstallableFileSystems::FilterVolumeInstanceFindHandle* lpVolumeInstanceFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeInstanceFindFirst(lpVolumeName, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned, lpVolumeInstanceFind);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeInstanceFindNext(Windows::Win32::SystemServices::HANDLE hVolumeInstanceFind, Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeInstanceFindNext(hVolumeInstanceFind, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterVolumeInstanceFindClose(Windows::Win32::SystemServices::HANDLE hVolumeInstanceFind)
    {
        auto win32_impl_result = WIN32_IMPL_FilterVolumeInstanceFindClose(hVolumeInstanceFind);
        return win32_impl_result;
    }
    inline int32_t FilterGetInformation(Windows::Win32::InstallableFileSystems::HFILTER hFilter, Windows::Win32::InstallableFileSystems::FILTER_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterGetInformation(hFilter, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterInstanceGetInformation(Windows::Win32::InstallableFileSystems::HFILTER_INSTANCE hInstance, Windows::Win32::InstallableFileSystems::INSTANCE_INFORMATION_CLASS dwInformationClass, void* lpBuffer, uint32_t dwBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterInstanceGetInformation(hInstance, dwInformationClass, lpBuffer, dwBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterConnectCommunicationPort(uint16_t* lpPortName, uint32_t dwOptions, void* lpContext, uint16_t wSizeOfContext, Windows::Win32::SystemServices::SECURITY_ATTRIBUTES* lpSecurityAttributes, Windows::Win32::SystemServices::HANDLE* hPort)
    {
        auto win32_impl_result = WIN32_IMPL_FilterConnectCommunicationPort(lpPortName, dwOptions, lpContext, wSizeOfContext, lpSecurityAttributes, hPort);
        return win32_impl_result;
    }
    inline int32_t FilterSendMessage(Windows::Win32::SystemServices::HANDLE hPort, void* lpInBuffer, uint32_t dwInBufferSize, void* lpOutBuffer, uint32_t dwOutBufferSize, uint32_t* lpBytesReturned)
    {
        auto win32_impl_result = WIN32_IMPL_FilterSendMessage(hPort, lpInBuffer, dwInBufferSize, lpOutBuffer, dwOutBufferSize, lpBytesReturned);
        return win32_impl_result;
    }
    inline int32_t FilterGetMessage(Windows::Win32::SystemServices::HANDLE hPort, Windows::Win32::InstallableFileSystems::FILTER_MESSAGE_HEADER* lpMessageBuffer, uint32_t dwMessageBufferSize, Windows::Win32::SystemServices::OVERLAPPED* lpOverlapped)
    {
        auto win32_impl_result = WIN32_IMPL_FilterGetMessage(hPort, lpMessageBuffer, dwMessageBufferSize, lpOverlapped);
        return win32_impl_result;
    }
    inline int32_t FilterReplyMessage(Windows::Win32::SystemServices::HANDLE hPort, Windows::Win32::InstallableFileSystems::FILTER_REPLY_HEADER* lpReplyBuffer, uint32_t dwReplyBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FilterReplyMessage(hPort, lpReplyBuffer, dwReplyBufferSize);
        return win32_impl_result;
    }
    inline int32_t FilterGetDosName(uint16_t* lpVolumeName, uint16_t* lpDosName, uint32_t dwDosNameBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_FilterGetDosName(lpVolumeName, lpDosName, dwDosNameBufferSize);
        return win32_impl_result;
    }
    inline uint16_t RtlCaptureStackBackTrace(uint32_t FramesToSkip, uint32_t FramesToCapture, void** BackTrace, uint32_t* BackTraceHash)
    {
        auto win32_impl_result = WIN32_IMPL_RtlCaptureStackBackTrace(FramesToSkip, FramesToCapture, BackTrace, BackTraceHash);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
