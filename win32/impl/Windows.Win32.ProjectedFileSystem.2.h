// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_ProjectedFileSystem_2_H
#define WIN32_Windows_Win32_ProjectedFileSystem_2_H
#include "win32/impl/Windows.Win32.ProjectedFileSystem.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_PrjStartVirtualizing(uint16_t* virtualizationRootPath, win32::Windows::Win32::ProjectedFileSystem::PRJ_CALLBACKS* callbacks, void* instanceContext, win32::Windows::Win32::ProjectedFileSystem::PRJ_STARTVIRTUALIZING_OPTIONS* options, win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__** namespaceVirtualizationContext) noexcept;
    void __stdcall WIN32_IMPL_PrjStopVirtualizing(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjClearNegativePathCache(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, uint32_t* totalEntryNumber) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjGetVirtualizationInstanceInfo(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, win32::Windows::Win32::ProjectedFileSystem::PRJ_VIRTUALIZATION_INSTANCE_INFO* virtualizationInstanceInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjMarkDirectoryAsPlaceholder(uint16_t* rootPathName, uint16_t* targetPathName, win32::Windows::Win32::ProjectedFileSystem::PRJ_PLACEHOLDER_VERSION_INFO* versionInfo, ::win32::guid* virtualizationInstanceID) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjWritePlaceholderInfo(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, uint16_t* destinationFileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjWritePlaceholderInfo2(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, uint16_t* destinationFileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::ProjectedFileSystem::PRJ_EXTENDED_INFO* ExtendedInfo) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjUpdateFileIfNeeded(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, uint16_t* destinationFileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_PLACEHOLDER_INFO* placeholderInfo, uint32_t placeholderInfoSize, win32::Windows::Win32::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjDeleteFile(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, uint16_t* destinationFileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_UPDATE_TYPES updateFlags, win32::Windows::Win32::ProjectedFileSystem::PRJ_UPDATE_FAILURE_CAUSES* failureReason) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjWriteFileData(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, ::win32::guid* dataStreamId, void* buffer, uint64_t byteOffset, uint32_t length) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjGetOnDiskFileState(uint16_t* destinationFileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_FILE_STATE* fileState) noexcept;
    void* __stdcall WIN32_IMPL_PrjAllocateAlignedBuffer(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, size_t size) noexcept;
    void __stdcall WIN32_IMPL_PrjFreeAlignedBuffer(void* buffer) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjCompleteCommand(win32::Windows::Win32::ProjectedFileSystem::PRJ_NAMESPACE_VIRTUALIZATION_CONTEXT__* namespaceVirtualizationContext, int32_t commandId, int32_t completionResult, win32::Windows::Win32::ProjectedFileSystem::PRJ_COMPLETE_COMMAND_EXTENDED_PARAMETERS* extendedParameters) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjFillDirEntryBuffer(uint16_t* fileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE__* dirEntryBufferHandle) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjFillDirEntryBuffer2(win32::Windows::Win32::ProjectedFileSystem::PRJ_DIR_ENTRY_BUFFER_HANDLE__* dirEntryBufferHandle, uint16_t* fileName, win32::Windows::Win32::ProjectedFileSystem::PRJ_FILE_BASIC_INFO* fileBasicInfo, win32::Windows::Win32::ProjectedFileSystem::PRJ_EXTENDED_INFO* extendedInfo) noexcept;
    uint8_t __stdcall WIN32_IMPL_PrjFileNameMatch(uint16_t* fileNameToCheck, uint16_t* pattern) noexcept;
    int32_t __stdcall WIN32_IMPL_PrjFileNameCompare(uint16_t* fileName1, uint16_t* fileName2) noexcept;
    uint8_t __stdcall WIN32_IMPL_PrjDoesNameContainWildCards(uint16_t* fileName) noexcept;
}
WIN32_IMPL_LINK(PrjStartVirtualizing, 20)
WIN32_IMPL_LINK(PrjStopVirtualizing, 4)
WIN32_IMPL_LINK(PrjClearNegativePathCache, 8)
WIN32_IMPL_LINK(PrjGetVirtualizationInstanceInfo, 8)
WIN32_IMPL_LINK(PrjMarkDirectoryAsPlaceholder, 16)
WIN32_IMPL_LINK(PrjWritePlaceholderInfo, 16)
WIN32_IMPL_LINK(PrjWritePlaceholderInfo2, 20)
WIN32_IMPL_LINK(PrjUpdateFileIfNeeded, 24)
WIN32_IMPL_LINK(PrjDeleteFile, 16)
WIN32_IMPL_LINK(PrjWriteFileData, 24)
WIN32_IMPL_LINK(PrjGetOnDiskFileState, 8)
WIN32_IMPL_LINK(PrjAllocateAlignedBuffer, 8)
WIN32_IMPL_LINK(PrjFreeAlignedBuffer, 4)
WIN32_IMPL_LINK(PrjCompleteCommand, 16)
WIN32_IMPL_LINK(PrjFillDirEntryBuffer, 12)
WIN32_IMPL_LINK(PrjFillDirEntryBuffer2, 16)
WIN32_IMPL_LINK(PrjFileNameMatch, 8)
WIN32_IMPL_LINK(PrjFileNameCompare, 8)
WIN32_IMPL_LINK(PrjDoesNameContainWildCards, 4)

#pragma endregion abi_methods

#endif
