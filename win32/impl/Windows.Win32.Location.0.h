// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Location_0_H
#define WIN32_Windows_Win32_Location_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Location
{
#pragma region enums
    enum class LOCATION_REPORT_STATUS : int32_t
    {
        REPORT_NOT_SUPPORTED = 0,
        REPORT_ERROR = 1,
        REPORT_ACCESS_DENIED = 2,
        REPORT_INITIALIZING = 3,
        REPORT_RUNNING = 4,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CivicAddressReport;
    struct CivicAddressReportFactory;
    struct DefaultLocation;
    struct DispCivicAddressReport;
    struct DispLatLongReport;
    struct ICivicAddressReport;
    struct ICivicAddressReportFactory;
    struct IDefaultLocation;
    struct IDispCivicAddressReport;
    struct IDispLatLongReport;
    struct ILatLongReport;
    struct ILatLongReportFactory;
    struct ILocation;
    struct ILocationEvents;
    struct ILocationPower;
    struct ILocationReport;
    struct ILocationReportFactory;
    struct LatLongReport;
    struct LatLongReportFactory;
    struct Location;
    struct _ICivicAddressReportFactoryEvents;
    struct _ILatLongReportFactoryEvents;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::Location::CivicAddressReport>{ 0xD39E7BDD,0x7D05,0x46B8,{ 0x87,0x21,0x80,0xCF,0x03,0x5F,0x57,0xD7 } }; // D39E7BDD-7D05-46B8-8721-80CF035F57D7
    template <> inline constexpr guid guid_v<Windows::Win32::Location::CivicAddressReportFactory>{ 0x2A11F42C,0x3E81,0x4AD4,{ 0x9C,0xBE,0x45,0x57,0x9D,0x89,0x67,0x1A } }; // 2A11F42C-3E81-4AD4-9CBE-45579D89671A
    template <> inline constexpr guid guid_v<Windows::Win32::Location::DefaultLocation>{ 0x8B7FBFE0,0x5CD7,0x494A,{ 0xAF,0x8C,0x28,0x3A,0x65,0x70,0x75,0x06 } }; // 8B7FBFE0-5CD7-494A-AF8C-283A65707506
    template <> inline constexpr guid guid_v<Windows::Win32::Location::DispCivicAddressReport>{ 0x4C596AEC,0x8544,0x4082,{ 0xBA,0x9F,0xEB,0x0A,0x7D,0x8E,0x65,0xC6 } }; // 4C596AEC-8544-4082-BA9F-EB0A7D8E65C6
    template <> inline constexpr guid guid_v<Windows::Win32::Location::DispLatLongReport>{ 0x7A7C3277,0x8F84,0x4636,{ 0x95,0xB2,0xEB,0xB5,0x50,0x7F,0xF7,0x7E } }; // 7A7C3277-8F84-4636-95B2-EBB5507FF77E
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ICivicAddressReport>{ 0xC0B19F70,0x4ADF,0x445D,{ 0x87,0xF2,0xCA,0xD8,0xFD,0x71,0x17,0x92 } }; // C0B19F70-4ADF-445D-87F2-CAD8FD711792
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ICivicAddressReportFactory>{ 0xBF773B93,0xC64F,0x4BEE,{ 0xBE,0xB2,0x67,0xC0,0xB8,0xDF,0x66,0xE0 } }; // BF773B93-C64F-4BEE-BEB2-67C0B8DF66E0
    template <> inline constexpr guid guid_v<Windows::Win32::Location::IDefaultLocation>{ 0xA65AF77E,0x969A,0x4A2E,{ 0x8A,0xCA,0x33,0xBB,0x7C,0xBB,0x12,0x35 } }; // A65AF77E-969A-4A2E-8ACA-33BB7CBB1235
    template <> inline constexpr guid guid_v<Windows::Win32::Location::IDispCivicAddressReport>{ 0x16FF1A34,0x9E30,0x42C3,{ 0xB4,0x4D,0xE2,0x25,0x13,0xB5,0x76,0x7A } }; // 16FF1A34-9E30-42C3-B44D-E22513B5767A
    template <> inline constexpr guid guid_v<Windows::Win32::Location::IDispLatLongReport>{ 0x8AE32723,0x389B,0x4A11,{ 0x99,0x57,0x5B,0xDD,0x48,0xFC,0x96,0x17 } }; // 8AE32723-389B-4A11-9957-5BDD48FC9617
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILatLongReport>{ 0x7FED806D,0x0EF8,0x4F07,{ 0x80,0xAC,0x36,0xA0,0xBE,0xAE,0x31,0x34 } }; // 7FED806D-0EF8-4F07-80AC-36A0BEAE3134
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILatLongReportFactory>{ 0x3F0804CB,0xB114,0x447D,{ 0x83,0xDD,0x39,0x01,0x74,0xEB,0xB0,0x82 } }; // 3F0804CB-B114-447D-83DD-390174EBB082
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILocation>{ 0xAB2ECE69,0x56D9,0x4F28,{ 0xB5,0x25,0xDE,0x1B,0x0E,0xE4,0x42,0x37 } }; // AB2ECE69-56D9-4F28-B525-DE1B0EE44237
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILocationEvents>{ 0xCAE02BBF,0x798B,0x4508,{ 0xA2,0x07,0x35,0xA7,0x90,0x6D,0xC7,0x3D } }; // CAE02BBF-798B-4508-A207-35A7906DC73D
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILocationPower>{ 0x193E7729,0xAB6B,0x4B12,{ 0x86,0x17,0x75,0x96,0xE1,0xBB,0x19,0x1C } }; // 193E7729-AB6B-4B12-8617-7596E1BB191C
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILocationReport>{ 0xC8B7F7EE,0x75D0,0x4DB9,{ 0xB6,0x2D,0x7A,0x0F,0x36,0x9C,0xA4,0x56 } }; // C8B7F7EE-75D0-4DB9-B62D-7A0F369CA456
    template <> inline constexpr guid guid_v<Windows::Win32::Location::ILocationReportFactory>{ 0x2DAEC322,0x90B2,0x47E4,{ 0xBB,0x08,0x0D,0xA8,0x41,0x93,0x5A,0x6B } }; // 2DAEC322-90B2-47E4-BB08-0DA841935A6B
    template <> inline constexpr guid guid_v<Windows::Win32::Location::LatLongReport>{ 0xED81C073,0x1F84,0x4CA8,{ 0xA1,0x61,0x18,0x3C,0x77,0x6B,0xC6,0x51 } }; // ED81C073-1F84-4CA8-A161-183C776BC651
    template <> inline constexpr guid guid_v<Windows::Win32::Location::LatLongReportFactory>{ 0x9DCC3CC8,0x8609,0x4863,{ 0xBA,0xD4,0x03,0x60,0x1F,0x4C,0x65,0xE8 } }; // 9DCC3CC8-8609-4863-BAD4-03601F4C65E8
    template <> inline constexpr guid guid_v<Windows::Win32::Location::Location>{ 0xE5B8E079,0xEE6D,0x4E33,{ 0xA4,0x38,0xC8,0x7F,0x2E,0x95,0x92,0x54 } }; // E5B8E079-EE6D-4E33-A438-C87F2E959254
    template <> inline constexpr guid guid_v<Windows::Win32::Location::_ICivicAddressReportFactoryEvents>{ 0xC96039FF,0x72EC,0x4617,{ 0x89,0xBD,0x84,0xD8,0x8B,0xED,0xC7,0x22 } }; // C96039FF-72EC-4617-89BD-84D88BEDC722
    template <> inline constexpr guid guid_v<Windows::Win32::Location::_ILatLongReportFactoryEvents>{ 0x16EE6CB7,0xAB3C,0x424B,{ 0x84,0x9F,0x26,0x9B,0xE5,0x51,0xFC,0xBC } }; // 16EE6CB7-AB3C-424B-849F-269BE551FCBC
#pragma endregion guids

}
#endif