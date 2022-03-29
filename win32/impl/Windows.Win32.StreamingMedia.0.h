// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_StreamingMedia_0_H
#define WIN32_Windows_Win32_StreamingMedia_0_H
WIN32_EXPORT namespace win32::Windows::Win32::StreamingMedia
{
#pragma region enums
    enum class MF_MEDIASOURCE_STATUS_INFO : int32_t
    {
        MF_MEDIASOURCE_STATUS_INFO_FULLYSUPPORTED = 0,
        MF_MEDIASOURCE_STATUS_INFO_UNKNOWN = 1,
    };
    enum class MF_TRANSFER_VIDEO_FRAME_FLAGS : int32_t
    {
        MF_TRANSFER_VIDEO_FRAME_DEFAULT = 0,
        MF_TRANSFER_VIDEO_FRAME_STRETCH = 1,
        MF_TRANSFER_VIDEO_FRAME_IGNORE_PAR = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CapturedMetadataExposureCompensation;
    struct CapturedMetadataISOGains;
    struct CapturedMetadataWhiteBalanceGains;
    struct FaceCharacterization;
    struct FaceCharacterizationBlobHeader;
    struct FaceRectInfo;
    struct FaceRectInfoBlobHeader;
    struct HistogramBlobHeader;
    struct HistogramDataHeader;
    struct HistogramGrid;
    struct HistogramHeader;
    struct MetadataTimeStamps;
    struct IMFDeviceTransform;
    struct IMFDeviceTransformCallback;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::StreamingMedia::IMFDeviceTransform>{ 0xD818FBD8,0xFC46,0x42F2,{ 0x87,0xAC,0x1E,0xA2,0xD1,0xF9,0xBF,0x32 } }; // D818FBD8-FC46-42F2-87AC-1EA2D1F9BF32
    template <> inline constexpr guid guid_v<Windows::Win32::StreamingMedia::IMFDeviceTransformCallback>{ 0x6D5CB646,0x29EC,0x41FB,{ 0x81,0x79,0x8C,0x4C,0x6D,0x75,0x08,0x11 } }; // 6D5CB646-29EC-41FB-8179-8C4C6D750811
#pragma endregion guids

}
#endif
