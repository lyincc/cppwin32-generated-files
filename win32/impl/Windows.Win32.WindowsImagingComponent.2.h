// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsImagingComponent_2_H
#define WIN32_Windows_Win32_WindowsImagingComponent_2_H
#include "win32/impl/Windows.Win32.WindowsImagingComponent.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_WICConvertBitmapSource(::win32::guid* dstFormat, win32::Windows::Win32::WindowsImagingComponent::IWICBitmapSource* pISrc, win32::Windows::Win32::WindowsImagingComponent::IWICBitmapSource** ppIDst) noexcept;
    int32_t __stdcall WIN32_IMPL_WICCreateBitmapFromSection(uint32_t width, uint32_t height, ::win32::guid* pixelFormat, win32::Windows::Win32::SystemServices::HANDLE hSection, uint32_t stride, uint32_t offset, win32::Windows::Win32::WindowsImagingComponent::IWICBitmap** ppIBitmap) noexcept;
    int32_t __stdcall WIN32_IMPL_WICCreateBitmapFromSectionEx(uint32_t width, uint32_t height, ::win32::guid* pixelFormat, win32::Windows::Win32::SystemServices::HANDLE hSection, uint32_t stride, uint32_t offset, win32::Windows::Win32::WindowsImagingComponent::WICSectionAccessLevel desiredAccessLevel, win32::Windows::Win32::WindowsImagingComponent::IWICBitmap** ppIBitmap) noexcept;
    int32_t __stdcall WIN32_IMPL_WICMapGuidToShortName(::win32::guid* guid, uint32_t cchName, uint16_t* wzName, uint32_t* pcchActual) noexcept;
    int32_t __stdcall WIN32_IMPL_WICMapShortNameToGuid(uint16_t* wzName, ::win32::guid* pguid) noexcept;
    int32_t __stdcall WIN32_IMPL_WICMapSchemaToName(::win32::guid* guidMetadataFormat, uint16_t* pwzSchema, uint32_t cchName, uint16_t* wzName, uint32_t* pcchActual) noexcept;
    int32_t __stdcall WIN32_IMPL_WICMatchMetadataContent(::win32::guid* guidContainerFormat, ::win32::guid* pguidVendor, win32::Windows::Win32::StructuredStorage::IStream* pIStream, ::win32::guid* pguidMetadataFormat) noexcept;
    int32_t __stdcall WIN32_IMPL_WICSerializeMetadataContent(::win32::guid* guidContainerFormat, win32::Windows::Win32::WindowsImagingComponent::IWICMetadataWriter* pIWriter, uint32_t dwPersistOptions, win32::Windows::Win32::StructuredStorage::IStream* pIStream) noexcept;
    int32_t __stdcall WIN32_IMPL_WICGetMetadataContentSize(::win32::guid* guidContainerFormat, win32::Windows::Win32::WindowsImagingComponent::IWICMetadataWriter* pIWriter, win32::Windows::Win32::SystemServices::ULARGE_INTEGER* pcbSize) noexcept;
}
WIN32_IMPL_LINK(WICConvertBitmapSource, 12)
WIN32_IMPL_LINK(WICCreateBitmapFromSection, 28)
WIN32_IMPL_LINK(WICCreateBitmapFromSectionEx, 32)
WIN32_IMPL_LINK(WICMapGuidToShortName, 16)
WIN32_IMPL_LINK(WICMapShortNameToGuid, 8)
WIN32_IMPL_LINK(WICMapSchemaToName, 20)
WIN32_IMPL_LINK(WICMatchMetadataContent, 16)
WIN32_IMPL_LINK(WICSerializeMetadataContent, 16)
WIN32_IMPL_LINK(WICGetMetadataContentSize, 12)

#pragma endregion abi_methods

#endif
