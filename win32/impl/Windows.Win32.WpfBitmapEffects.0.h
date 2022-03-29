// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WpfBitmapEffects_0_H
#define WIN32_Windows_Win32_WpfBitmapEffects_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WpfBitmapEffects
{
#pragma region enums
#pragma endregion enums

#pragma region forward_declarations
    struct MILMatrixF;
    struct MilMatrix3x2D;
    struct MilPoint2D;
    struct MilRectD;
    struct IMILBitmapEffect;
    struct IMILBitmapEffectConnections;
    struct IMILBitmapEffectConnectionsInfo;
    struct IMILBitmapEffectConnector;
    struct IMILBitmapEffectConnectorInfo;
    struct IMILBitmapEffectEvents;
    struct IMILBitmapEffectFactory;
    struct IMILBitmapEffectGroup;
    struct IMILBitmapEffectGroupImpl;
    struct IMILBitmapEffectImpl;
    struct IMILBitmapEffectInputConnector;
    struct IMILBitmapEffectInteriorInputConnector;
    struct IMILBitmapEffectInteriorOutputConnector;
    struct IMILBitmapEffectOutputConnector;
    struct IMILBitmapEffectOutputConnectorImpl;
    struct IMILBitmapEffectPrimitive;
    struct IMILBitmapEffectPrimitiveImpl;
    struct IMILBitmapEffectRenderContext;
    struct IMILBitmapEffectRenderContextImpl;
    struct IMILBitmapEffects;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffect>{ 0x8A6FF321,0xC944,0x4A1B,{ 0x99,0x44,0x99,0x54,0xAF,0x30,0x12,0x58 } }; // 8A6FF321-C944-4A1B-9944-9954AF301258
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectConnections>{ 0xC2B5D861,0x9B1A,0x4374,{ 0x89,0xB0,0xDE,0xC4,0x87,0x4D,0x6A,0x81 } }; // C2B5D861-9B1A-4374-89B0-DEC4874D6A81
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectConnectionsInfo>{ 0x476B538A,0xC765,0x4237,{ 0xBA,0x4A,0xD6,0xA8,0x80,0xFF,0x0C,0xFC } }; // 476B538A-C765-4237-BA4A-D6A880FF0CFC
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectConnector>{ 0xF59567B3,0x76C1,0x4D47,{ 0xBA,0x1E,0x79,0xF9,0x55,0xE3,0x50,0xEF } }; // F59567B3-76C1-4D47-BA1E-79F955E350EF
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectConnectorInfo>{ 0xF66D2E4B,0xB46B,0x42FC,{ 0x85,0x9E,0x3D,0xA0,0xEC,0xDB,0x3C,0x43 } }; // F66D2E4B-B46B-42FC-859E-3DA0ECDB3C43
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectEvents>{ 0x2E880DD8,0xF8CE,0x457B,{ 0x81,0x99,0xD6,0x0B,0xB3,0xD7,0xEF,0x98 } }; // 2E880DD8-F8CE-457B-8199-D60BB3D7EF98
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectFactory>{ 0x33A9DF34,0xA403,0x4EC7,{ 0xB0,0x7E,0xBC,0x06,0x82,0x37,0x08,0x45 } }; // 33A9DF34-A403-4EC7-B07E-BC0682370845
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectGroup>{ 0x2F952360,0x698A,0x4AC6,{ 0x81,0xA1,0xBC,0xFD,0xF0,0x8E,0xB8,0xE8 } }; // 2F952360-698A-4AC6-81A1-BCFDF08EB8E8
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectGroupImpl>{ 0x78FED518,0x1CFC,0x4807,{ 0x8B,0x85,0x6B,0x6E,0x51,0x39,0x8F,0x62 } }; // 78FED518-1CFC-4807-8B85-6B6E51398F62
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectImpl>{ 0xCC2468F2,0x9936,0x47BE,{ 0xB4,0xAF,0x06,0xB5,0xDF,0x5D,0xBC,0xBB } }; // CC2468F2-9936-47BE-B4AF-06B5DF5DBCBB
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectInputConnector>{ 0xA9B4ECAA,0x7A3C,0x45E7,{ 0x85,0x73,0xF4,0xB8,0x1B,0x60,0xDD,0x6C } }; // A9B4ECAA-7A3C-45E7-8573-F4B81B60DD6C
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectInteriorInputConnector>{ 0x20287E9E,0x86A2,0x4E15,{ 0x95,0x3D,0xEB,0x14,0x38,0xA5,0xB8,0x42 } }; // 20287E9E-86A2-4E15-953D-EB1438A5B842
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectInteriorOutputConnector>{ 0x00BBB6DC,0xACC9,0x4BFC,{ 0xB3,0x44,0x8B,0xEE,0x38,0x3D,0xFE,0xFA } }; // 00BBB6DC-ACC9-4BFC-B344-8BEE383DFEFA
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectOutputConnector>{ 0x92957AAD,0x841B,0x4866,{ 0x82,0xEC,0x87,0x52,0x46,0x8B,0x07,0xFD } }; // 92957AAD-841B-4866-82EC-8752468B07FD
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectOutputConnectorImpl>{ 0x21FAE777,0x8B39,0x4BFA,{ 0x9F,0x2D,0xF3,0x94,0x1E,0xD3,0x69,0x13 } }; // 21FAE777-8B39-4BFA-9F2D-F3941ED36913
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectPrimitive>{ 0x67E31025,0x3091,0x4DFC,{ 0x98,0xD6,0xDD,0x49,0x45,0x51,0x46,0x1D } }; // 67E31025-3091-4DFC-98D6-DD494551461D
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectPrimitiveImpl>{ 0xCE41E00B,0xEFA6,0x44E7,{ 0xB0,0x07,0xDD,0x04,0x2E,0x3A,0xE1,0x26 } }; // CE41E00B-EFA6-44E7-B007-DD042E3AE126
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectRenderContext>{ 0x12A2EC7E,0x2D33,0x44B2,{ 0xB3,0x34,0x1A,0xBB,0x78,0x46,0xE3,0x90 } }; // 12A2EC7E-2D33-44B2-B334-1ABB7846E390
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffectRenderContextImpl>{ 0x4D25ACCB,0x797D,0x4FD2,{ 0xB1,0x28,0xDF,0xFE,0xFF,0x84,0xFC,0xC3 } }; // 4D25ACCB-797D-4FD2-B128-DFFEFF84FCC3
    template <> inline constexpr guid guid_v<Windows::Win32::WpfBitmapEffects::IMILBitmapEffects>{ 0x51AC3DCE,0x67C5,0x448B,{ 0x91,0x80,0xAD,0x3E,0xAB,0xDD,0xD5,0xDD } }; // 51AC3DCE-67C5-448B-9180-AD3EABDDD5DD
#pragma endregion guids

}
#endif
