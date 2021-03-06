// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_LegacyWindowsEnvironmentFeatures_0_H
#define WIN32_Windows_Win32_LegacyWindowsEnvironmentFeatures_0_H
WIN32_EXPORT namespace win32::Windows::Win32::LegacyWindowsEnvironmentFeatures
{
#pragma region enums
    enum class _ColumnSortOrder : int32_t
    {
        SortOrder_Ascending = 0,
        SortOrder_Descending = 1,
    };
    enum class _reconcilef : int32_t
    {
        RECONCILEF_MAYBOTHERUSER = 1,
        RECONCILEF_FEEDBACKWINDOWVALID = 2,
        RECONCILEF_NORESIDUESOK = 4,
        RECONCILEF_OMITSELFRESIDUE = 8,
        RECONCILEF_RESUMERECONCILIATION = 16,
        RECONCILEF_YOUMAYDOTHEUPDATES = 32,
        RECONCILEF_ONLYYOUWERECHANGED = 64,
        ALL_RECONCILE_FLAGS = 127,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct IADesktopP2;
    struct IActiveDesktopP;
    struct IBriefcaseInitiator;
    struct IEmptyVolumeCache;
    struct IEmptyVolumeCache2;
    struct IEmptyVolumeCacheCallBack;
    struct IReconcilableObject;
    struct IReconcileInitiator;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IADesktopP2>{ 0xB22754E2,0x4574,0x11D1,{ 0x98,0x88,0x00,0x60,0x97,0xDE,0xAC,0xF9 } }; // B22754E2-4574-11D1-9888-006097DEACF9
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IActiveDesktopP>{ 0x52502EE0,0xEC80,0x11D0,{ 0x89,0xAB,0x00,0xC0,0x4F,0xC2,0x97,0x2D } }; // 52502EE0-EC80-11D0-89AB-00C04FC2972D
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IBriefcaseInitiator>{ 0x99180164,0xDA16,0x101A,{ 0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00 } }; // 99180164-DA16-101A-935C-444553540000
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IEmptyVolumeCache>{ 0x8FCE5227,0x04DA,0x11D1,{ 0xA0,0x04,0x00,0x80,0x5F,0x8A,0xBE,0x06 } }; // 8FCE5227-04DA-11D1-A004-00805F8ABE06
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IEmptyVolumeCache2>{ 0x02B7E3BA,0x4DB3,0x11D2,{ 0xB2,0xD9,0x00,0xC0,0x4F,0x8E,0xEC,0x8C } }; // 02B7E3BA-4DB3-11D2-B2D9-00C04F8EEC8C
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IEmptyVolumeCacheCallBack>{ 0x6E793361,0x73C6,0x11D0,{ 0x84,0x69,0x00,0xAA,0x00,0x44,0x29,0x01 } }; // 6E793361-73C6-11D0-8469-00AA00442901
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IReconcilableObject>{ 0x99180162,0xDA16,0x101A,{ 0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00 } }; // 99180162-DA16-101A-935C-444553540000
    template <> inline constexpr guid guid_v<Windows::Win32::LegacyWindowsEnvironmentFeatures::IReconcileInitiator>{ 0x99180161,0xDA16,0x101A,{ 0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00 } }; // 99180161-DA16-101A-935C-444553540000
#pragma endregion guids

}
#endif
