// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_UsbDrivers_2_H
#define WIN32_Windows_Win32_UsbDrivers_2_H
#include "win32/impl/Windows.Win32.UsbDrivers.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_Initialize(win32::Windows::Win32::SystemServices::HANDLE DeviceHandle, void** InterfaceHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_Free(void* InterfaceHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetAssociatedInterface(void* InterfaceHandle, uint8_t AssociatedInterfaceIndex, void** AssociatedInterfaceHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetDescriptor(void* InterfaceHandle, uint8_t DescriptorType, uint8_t Index, uint16_t LanguageID, uint8_t* Buffer, uint32_t BufferLength, uint32_t* LengthTransferred) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_QueryInterfaceSettings(void* InterfaceHandle, uint8_t AlternateInterfaceNumber, win32::Windows::Win32::UsbDrivers::USB_INTERFACE_DESCRIPTOR* UsbAltInterfaceDescriptor) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_QueryDeviceInformation(void* InterfaceHandle, uint32_t InformationType, uint32_t* BufferLength, void* Buffer) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_SetCurrentAlternateSetting(void* InterfaceHandle, uint8_t SettingNumber) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetCurrentAlternateSetting(void* InterfaceHandle, uint8_t* SettingNumber) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_QueryPipe(void* InterfaceHandle, uint8_t AlternateInterfaceNumber, uint8_t PipeIndex, win32::Windows::Win32::UsbDrivers::WINUSB_PIPE_INFORMATION* PipeInformation) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_QueryPipeEx(void* InterfaceHandle, uint8_t AlternateSettingNumber, uint8_t PipeIndex, win32::Windows::Win32::UsbDrivers::WINUSB_PIPE_INFORMATION_EX* PipeInformationEx) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_SetPipePolicy(void* InterfaceHandle, uint8_t PipeID, uint32_t PolicyType, uint32_t ValueLength, void* Value) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetPipePolicy(void* InterfaceHandle, uint8_t PipeID, uint32_t PolicyType, uint32_t* ValueLength, void* Value) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_ReadPipe(void* InterfaceHandle, uint8_t PipeID, uint8_t* Buffer, uint32_t BufferLength, uint32_t* LengthTransferred, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_WritePipe(void* InterfaceHandle, uint8_t PipeID, uint8_t* Buffer, uint32_t BufferLength, uint32_t* LengthTransferred, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_ControlTransfer(void* InterfaceHandle, win32::Windows::Win32::UsbDrivers::WINUSB_SETUP_PACKET SetupPacket, uint8_t* Buffer, uint32_t BufferLength, uint32_t* LengthTransferred, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_ResetPipe(void* InterfaceHandle, uint8_t PipeID) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_AbortPipe(void* InterfaceHandle, uint8_t PipeID) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_FlushPipe(void* InterfaceHandle, uint8_t PipeID) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_SetPowerPolicy(void* InterfaceHandle, uint32_t PolicyType, uint32_t ValueLength, void* Value) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetPowerPolicy(void* InterfaceHandle, uint32_t PolicyType, uint32_t* ValueLength, void* Value) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetOverlappedResult(void* InterfaceHandle, win32::Windows::Win32::SystemServices::OVERLAPPED* lpOverlapped, uint32_t* lpNumberOfBytesTransferred, win32::Windows::Win32::SystemServices::BOOL bWait) noexcept;
    win32::Windows::Win32::UsbDrivers::USB_INTERFACE_DESCRIPTOR* __stdcall WIN32_IMPL_WinUsb_ParseConfigurationDescriptor(win32::Windows::Win32::UsbDrivers::USB_CONFIGURATION_DESCRIPTOR* ConfigurationDescriptor, void* StartPosition, int32_t InterfaceNumber, int32_t AlternateSetting, int32_t InterfaceClass, int32_t InterfaceSubClass, int32_t InterfaceProtocol) noexcept;
    win32::Windows::Win32::UsbDrivers::USB_COMMON_DESCRIPTOR* __stdcall WIN32_IMPL_WinUsb_ParseDescriptors(void* DescriptorBuffer, uint32_t TotalLength, void* StartPosition, int32_t DescriptorType) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetCurrentFrameNumber(void* InterfaceHandle, uint32_t* CurrentFrameNumber, win32::Windows::Win32::SystemServices::LARGE_INTEGER* TimeStamp) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetAdjustedFrameNumber(uint32_t* CurrentFrameNumber, win32::Windows::Win32::SystemServices::LARGE_INTEGER TimeStamp) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_RegisterIsochBuffer(void* InterfaceHandle, uint8_t PipeID, uint8_t* Buffer, uint32_t BufferLength, void** IsochBufferHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_UnregisterIsochBuffer(void* IsochBufferHandle) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_WriteIsochPipe(void* BufferHandle, uint32_t Offset, uint32_t Length, uint32_t* FrameNumber, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_ReadIsochPipe(void* BufferHandle, uint32_t Offset, uint32_t Length, uint32_t* FrameNumber, uint32_t NumberOfPackets, win32::Windows::Win32::UsbDrivers::USBD_ISO_PACKET_DESCRIPTOR* IsoPacketDescriptors, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_WriteIsochPipeAsap(void* BufferHandle, uint32_t Offset, uint32_t Length, win32::Windows::Win32::SystemServices::BOOL ContinueStream, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_ReadIsochPipeAsap(void* BufferHandle, uint32_t Offset, uint32_t Length, win32::Windows::Win32::SystemServices::BOOL ContinueStream, uint32_t NumberOfPackets, win32::Windows::Win32::UsbDrivers::USBD_ISO_PACKET_DESCRIPTOR* IsoPacketDescriptors, win32::Windows::Win32::SystemServices::OVERLAPPED* Overlapped) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_StartTrackingForTimeSync(void* InterfaceHandle, win32::Windows::Win32::UsbDrivers::USB_START_TRACKING_FOR_TIME_SYNC_INFORMATION* StartTrackingInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_GetCurrentFrameNumberAndQpc(void* InterfaceHandle, win32::Windows::Win32::UsbDrivers::USB_FRAME_NUMBER_AND_QPC_FOR_TIME_SYNC_INFORMATION* FrameQpcInfo) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_WinUsb_StopTrackingForTimeSync(void* InterfaceHandle, win32::Windows::Win32::UsbDrivers::USB_STOP_TRACKING_FOR_TIME_SYNC_INFORMATION* StopTrackingInfo) noexcept;
}
WIN32_IMPL_LINK(WinUsb_Initialize, 8)
WIN32_IMPL_LINK(WinUsb_Free, 4)
WIN32_IMPL_LINK(WinUsb_GetAssociatedInterface, 12)
WIN32_IMPL_LINK(WinUsb_GetDescriptor, 28)
WIN32_IMPL_LINK(WinUsb_QueryInterfaceSettings, 12)
WIN32_IMPL_LINK(WinUsb_QueryDeviceInformation, 16)
WIN32_IMPL_LINK(WinUsb_SetCurrentAlternateSetting, 8)
WIN32_IMPL_LINK(WinUsb_GetCurrentAlternateSetting, 8)
WIN32_IMPL_LINK(WinUsb_QueryPipe, 16)
WIN32_IMPL_LINK(WinUsb_QueryPipeEx, 16)
WIN32_IMPL_LINK(WinUsb_SetPipePolicy, 20)
WIN32_IMPL_LINK(WinUsb_GetPipePolicy, 20)
WIN32_IMPL_LINK(WinUsb_ReadPipe, 24)
WIN32_IMPL_LINK(WinUsb_WritePipe, 24)
WIN32_IMPL_LINK(WinUsb_ControlTransfer, 24)
WIN32_IMPL_LINK(WinUsb_ResetPipe, 8)
WIN32_IMPL_LINK(WinUsb_AbortPipe, 8)
WIN32_IMPL_LINK(WinUsb_FlushPipe, 8)
WIN32_IMPL_LINK(WinUsb_SetPowerPolicy, 16)
WIN32_IMPL_LINK(WinUsb_GetPowerPolicy, 16)
WIN32_IMPL_LINK(WinUsb_GetOverlappedResult, 16)
WIN32_IMPL_LINK(WinUsb_ParseConfigurationDescriptor, 28)
WIN32_IMPL_LINK(WinUsb_ParseDescriptors, 16)
WIN32_IMPL_LINK(WinUsb_GetCurrentFrameNumber, 12)
WIN32_IMPL_LINK(WinUsb_GetAdjustedFrameNumber, 8)
WIN32_IMPL_LINK(WinUsb_RegisterIsochBuffer, 20)
WIN32_IMPL_LINK(WinUsb_UnregisterIsochBuffer, 4)
WIN32_IMPL_LINK(WinUsb_WriteIsochPipe, 20)
WIN32_IMPL_LINK(WinUsb_ReadIsochPipe, 28)
WIN32_IMPL_LINK(WinUsb_WriteIsochPipeAsap, 20)
WIN32_IMPL_LINK(WinUsb_ReadIsochPipeAsap, 28)
WIN32_IMPL_LINK(WinUsb_StartTrackingForTimeSync, 8)
WIN32_IMPL_LINK(WinUsb_GetCurrentFrameNumberAndQpc, 8)
WIN32_IMPL_LINK(WinUsb_StopTrackingForTimeSync, 8)

#pragma endregion abi_methods

#endif
