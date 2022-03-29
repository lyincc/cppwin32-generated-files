// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsSystemAssessmentTool_0_H
#define WIN32_Windows_Win32_WindowsSystemAssessmentTool_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsSystemAssessmentTool
{
#pragma region enums
    enum class WINSAT_ASSESSMENT_STATE : int32_t
    {
        WINSAT_ASSESSMENT_STATE_MIN = 0,
        WINSAT_ASSESSMENT_STATE_UNKNOWN = 0,
        WINSAT_ASSESSMENT_STATE_VALID = 1,
        WINSAT_ASSESSMENT_STATE_INCOHERENT_WITH_HARDWARE = 2,
        WINSAT_ASSESSMENT_STATE_NOT_AVAILABLE = 3,
        WINSAT_ASSESSMENT_STATE_INVALID = 4,
        WINSAT_ASSESSMENT_STATE_MAX = 4,
    };
    enum class WINSAT_ASSESSMENT_TYPE : int32_t
    {
        WINSAT_ASSESSMENT_MEMORY = 0,
        WINSAT_ASSESSMENT_CPU = 1,
        WINSAT_ASSESSMENT_DISK = 2,
        WINSAT_ASSESSMENT_D3D = 3,
        WINSAT_ASSESSMENT_GRAPHICS = 4,
    };
    enum class WINSAT_BITMAP_SIZE : int32_t
    {
        WINSAT_BITMAP_SIZE_SMALL = 0,
        WINSAT_BITMAP_SIZE_NORMAL = 1,
    };
    enum class __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0001 : int32_t
    {
        WINSAT_OEM_DATA_VALID = 0,
        WINSAT_OEM_DATA_NON_SYS_CONFIG_MATCH = 1,
        WINSAT_OEM_DATA_INVALID = 2,
        WINSAT_OEM_NO_DATA_SUPPLIED = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CAccessiblityWinSAT;
    struct CInitiateWinSAT;
    struct CProvideWinSATVisuals;
    struct CQueryAllWinSAT;
    struct CQueryOEMWinSATCustomization;
    struct CQueryWinSAT;
    struct IAccessibleWinSAT;
    struct IInitiateWinSATAssessment;
    struct IProvideWinSATAssessmentInfo;
    struct IProvideWinSATResultsInfo;
    struct IProvideWinSATVisuals;
    struct IQueryAllWinSATAssessments;
    struct IQueryOEMWinSATCustomization;
    struct IQueryRecentWinSATAssessment;
    struct IWinSATInitiateEvents;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CAccessiblityWinSAT>{ 0x6E18F9C6,0xA3EB,0x495A,{ 0x89,0xB7,0x95,0x64,0x82,0xE1,0x9F,0x7A } }; // 6E18F9C6-A3EB-495A-89B7-956482E19F7A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CInitiateWinSAT>{ 0x489331DC,0xF5E0,0x4528,{ 0x9F,0xDA,0x45,0x33,0x1B,0xF4,0xA5,0x71 } }; // 489331DC-F5E0-4528-9FDA-45331BF4A571
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CProvideWinSATVisuals>{ 0x9F377D7E,0xE551,0x44F8,{ 0x9F,0x94,0x9D,0xB3,0x92,0xB0,0x3B,0x7B } }; // 9F377D7E-E551-44F8-9F94-9DB392B03B7B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CQueryAllWinSAT>{ 0x05DF8D13,0xC355,0x47F4,{ 0xA1,0x1E,0x85,0x1B,0x33,0x8C,0xEF,0xB8 } }; // 05DF8D13-C355-47F4-A11E-851B338CEFB8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CQueryOEMWinSATCustomization>{ 0xC47A41B7,0xB729,0x424F,{ 0x9A,0xF9,0x5C,0xB3,0x93,0x4F,0x2D,0xFA } }; // C47A41B7-B729-424F-9AF9-5CB3934F2DFA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::CQueryWinSAT>{ 0xF3BDFAD3,0xF276,0x49E9,{ 0x9B,0x17,0xC4,0x74,0xF4,0x8F,0x07,0x64 } }; // F3BDFAD3-F276-49E9-9B17-C474F48F0764
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IAccessibleWinSAT>{ 0x30E6018A,0x94A8,0x4FF8,{ 0xA6,0x9A,0x71,0xB6,0x74,0x13,0xF0,0x7B } }; // 30E6018A-94A8-4FF8-A69A-71B67413F07B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IInitiateWinSATAssessment>{ 0xD983FC50,0xF5BF,0x49D5,{ 0xB5,0xED,0xCC,0xCB,0x18,0xAA,0x7F,0xC1 } }; // D983FC50-F5BF-49D5-B5ED-CCCB18AA7FC1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IProvideWinSATAssessmentInfo>{ 0x0CD1C380,0x52D3,0x4678,{ 0xAC,0x6F,0xE9,0x29,0xE4,0x80,0xBE,0x9E } }; // 0CD1C380-52D3-4678-AC6F-E929E480BE9E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IProvideWinSATResultsInfo>{ 0xF8334D5D,0x568E,0x4075,{ 0x87,0x5F,0x9D,0xF3,0x41,0x50,0x66,0x40 } }; // F8334D5D-568E-4075-875F-9DF341506640
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IProvideWinSATVisuals>{ 0xA9F4ADE0,0x871A,0x42A3,{ 0xB8,0x13,0x30,0x78,0xD2,0x51,0x62,0xC9 } }; // A9F4ADE0-871A-42A3-B813-3078D25162C9
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IQueryAllWinSATAssessments>{ 0x0B89ED1D,0x6398,0x4FEA,{ 0x87,0xFC,0x56,0x7D,0x8D,0x19,0x17,0x6F } }; // 0B89ED1D-6398-4FEA-87FC-567D8D19176F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IQueryOEMWinSATCustomization>{ 0xBC9A6A9F,0xAD4E,0x420E,{ 0x99,0x53,0xB3,0x46,0x71,0xE9,0xDF,0x22 } }; // BC9A6A9F-AD4E-420E-9953-B34671E9DF22
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IQueryRecentWinSATAssessment>{ 0xF8AD5D1F,0x3B47,0x4BDC,{ 0x93,0x75,0x7C,0x6B,0x1D,0xA4,0xEC,0xA7 } }; // F8AD5D1F-3B47-4BDC-9375-7C6B1DA4ECA7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsSystemAssessmentTool::IWinSATInitiateEvents>{ 0x262A1918,0xBA0D,0x41D5,{ 0x92,0xC2,0xFA,0xB4,0x63,0x3E,0xE7,0x4F } }; // 262A1918-BA0D-41D5-92C2-FAB4633EE74F
#pragma endregion guids

}
#endif
