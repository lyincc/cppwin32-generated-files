// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_HiDpi_0_H
#define WIN32_Windows_Win32_HiDpi_0_H
WIN32_EXPORT namespace win32::Windows::Win32::HiDpi
{
#pragma region enums
    enum class DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS : int32_t
    {
        DCDC_DEFAULT = 0,
        DCDC_DISABLE_FONT_UPDATE = 1,
        DCDC_DISABLE_RELAYOUT = 2,
    };
    enum class DIALOG_DPI_CHANGE_BEHAVIORS : int32_t
    {
        DDC_DEFAULT = 0,
        DDC_DISABLE_ALL = 1,
        DDC_DISABLE_RESIZE = 2,
        DDC_DISABLE_CONTROL_RELAYOUT = 4,
    };
    enum class DPI_AWARENESS : int32_t
    {
        DPI_AWARENESS_INVALID = -1,
        DPI_AWARENESS_UNAWARE = 0,
        DPI_AWARENESS_SYSTEM_AWARE = 1,
        DPI_AWARENESS_PER_MONITOR_AWARE = 2,
    };
    enum class DPI_HOSTING_BEHAVIOR : int32_t
    {
        DPI_HOSTING_BEHAVIOR_INVALID = -1,
        DPI_HOSTING_BEHAVIOR_DEFAULT = 0,
        DPI_HOSTING_BEHAVIOR_MIXED = 1,
    };
    enum class MONITOR_DPI_TYPE : int32_t
    {
        MDT_EFFECTIVE_DPI = 0,
        MDT_ANGULAR_DPI = 1,
        MDT_RAW_DPI = 2,
        MDT_DEFAULT = 0,
    };
    enum class PROCESS_DPI_AWARENESS : int32_t
    {
        PROCESS_DPI_UNAWARE = 0,
        PROCESS_SYSTEM_DPI_AWARE = 1,
        PROCESS_PER_MONITOR_DPI_AWARE = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
