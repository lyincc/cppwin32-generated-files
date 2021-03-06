// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsMediaDeviceManager_0_H
#define WIN32_Windows_Win32_WindowsMediaDeviceManager_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsMediaDeviceManager
{
#pragma region enums
    enum class WMDMMessage : int32_t
    {
        WMDM_MSG_DEVICE_ARRIVAL = 0,
        WMDM_MSG_DEVICE_REMOVAL = 1,
        WMDM_MSG_MEDIA_ARRIVAL = 2,
        WMDM_MSG_MEDIA_REMOVAL = 3,
    };
    enum class WMDM_ENUM_PROP_VALID_VALUES_FORM : int32_t
    {
        WMDM_ENUM_PROP_VALID_VALUES_ANY = 0,
        WMDM_ENUM_PROP_VALID_VALUES_RANGE = 1,
        WMDM_ENUM_PROP_VALID_VALUES_ENUM = 2,
    };
    enum class WMDM_FIND_SCOPE : int32_t
    {
        WMDM_FIND_SCOPE_GLOBAL = 0,
        WMDM_FIND_SCOPE_IMMEDIATE_CHILDREN = 1,
    };
    enum class WMDM_FORMATCODE : int32_t
    {
        WMDM_FORMATCODE_NOTUSED = 0,
        WMDM_FORMATCODE_ALLIMAGES = -1,
        WMDM_FORMATCODE_UNDEFINED = 12288,
        WMDM_FORMATCODE_ASSOCIATION = 12289,
        WMDM_FORMATCODE_SCRIPT = 12290,
        WMDM_FORMATCODE_EXECUTABLE = 12291,
        WMDM_FORMATCODE_TEXT = 12292,
        WMDM_FORMATCODE_HTML = 12293,
        WMDM_FORMATCODE_DPOF = 12294,
        WMDM_FORMATCODE_AIFF = 12295,
        WMDM_FORMATCODE_WAVE = 12296,
        WMDM_FORMATCODE_MP3 = 12297,
        WMDM_FORMATCODE_AVI = 12298,
        WMDM_FORMATCODE_MPEG = 12299,
        WMDM_FORMATCODE_ASF = 12300,
        WMDM_FORMATCODE_RESERVED_FIRST = 12301,
        WMDM_FORMATCODE_RESERVED_LAST = 14335,
        WMDM_FORMATCODE_IMAGE_UNDEFINED = 14336,
        WMDM_FORMATCODE_IMAGE_EXIF = 14337,
        WMDM_FORMATCODE_IMAGE_TIFFEP = 14338,
        WMDM_FORMATCODE_IMAGE_FLASHPIX = 14339,
        WMDM_FORMATCODE_IMAGE_BMP = 14340,
        WMDM_FORMATCODE_IMAGE_CIFF = 14341,
        WMDM_FORMATCODE_IMAGE_GIF = 14343,
        WMDM_FORMATCODE_IMAGE_JFIF = 14344,
        WMDM_FORMATCODE_IMAGE_PCD = 14345,
        WMDM_FORMATCODE_IMAGE_PICT = 14346,
        WMDM_FORMATCODE_IMAGE_PNG = 14347,
        WMDM_FORMATCODE_IMAGE_TIFF = 14349,
        WMDM_FORMATCODE_IMAGE_TIFFIT = 14350,
        WMDM_FORMATCODE_IMAGE_JP2 = 14351,
        WMDM_FORMATCODE_IMAGE_JPX = 14352,
        WMDM_FORMATCODE_IMAGE_RESERVED_FIRST = 14353,
        WMDM_FORMATCODE_IMAGE_RESERVED_LAST = 16383,
        WMDM_FORMATCODE_UNDEFINEDFIRMWARE = 47106,
        WMDM_FORMATCODE_WBMP = 47107,
        WMDM_FORMATCODE_JPEGXR = 47108,
        WMDM_FORMATCODE_WINDOWSIMAGEFORMAT = 47233,
        WMDM_FORMATCODE_UNDEFINEDAUDIO = 47360,
        WMDM_FORMATCODE_WMA = 47361,
        WMDM_FORMATCODE_OGG = 47362,
        WMDM_FORMATCODE_AAC = 47363,
        WMDM_FORMATCODE_AUDIBLE = 47364,
        WMDM_FORMATCODE_FLAC = 47366,
        WMDM_FORMATCODE_QCELP = 47367,
        WMDM_FORMATCODE_AMR = 47368,
        WMDM_FORMATCODE_UNDEFINEDVIDEO = 47488,
        WMDM_FORMATCODE_WMV = 47489,
        WMDM_FORMATCODE_MP4 = 47490,
        WMDM_FORMATCODE_MP2 = 47491,
        WMDM_FORMATCODE_3GP = 47492,
        WMDM_FORMATCODE_3G2 = 47493,
        WMDM_FORMATCODE_AVCHD = 47494,
        WMDM_FORMATCODE_ATSCTS = 47495,
        WMDM_FORMATCODE_DVBTS = 47496,
        WMDM_FORMATCODE_MKV = 47497,
        WMDM_FORMATCODE_MKA = 47498,
        WMDM_FORMATCODE_MK3D = 47499,
        WMDM_FORMATCODE_UNDEFINEDCOLLECTION = 47616,
        WMDM_FORMATCODE_ABSTRACTMULTIMEDIAALBUM = 47617,
        WMDM_FORMATCODE_ABSTRACTIMAGEALBUM = 47618,
        WMDM_FORMATCODE_ABSTRACTAUDIOALBUM = 47619,
        WMDM_FORMATCODE_ABSTRACTVIDEOALBUM = 47620,
        WMDM_FORMATCODE_ABSTRACTAUDIOVIDEOPLAYLIST = 47621,
        WMDM_FORMATCODE_ABSTRACTCONTACTGROUP = 47622,
        WMDM_FORMATCODE_ABSTRACTMESSAGEFOLDER = 47623,
        WMDM_FORMATCODE_ABSTRACTCHAPTEREDPRODUCTION = 47624,
        WMDM_FORMATCODE_MEDIA_CAST = 47627,
        WMDM_FORMATCODE_WPLPLAYLIST = 47632,
        WMDM_FORMATCODE_M3UPLAYLIST = 47633,
        WMDM_FORMATCODE_MPLPLAYLIST = 47634,
        WMDM_FORMATCODE_ASXPLAYLIST = 47635,
        WMDM_FORMATCODE_PLSPLAYLIST = 47636,
        WMDM_FORMATCODE_UNDEFINEDDOCUMENT = 47744,
        WMDM_FORMATCODE_ABSTRACTDOCUMENT = 47745,
        WMDM_FORMATCODE_XMLDOCUMENT = 47746,
        WMDM_FORMATCODE_MICROSOFTWORDDOCUMENT = 47747,
        WMDM_FORMATCODE_MHTCOMPILEDHTMLDOCUMENT = 47748,
        WMDM_FORMATCODE_MICROSOFTEXCELSPREADSHEET = 47749,
        WMDM_FORMATCODE_MICROSOFTPOWERPOINTDOCUMENT = 47750,
        WMDM_FORMATCODE_UNDEFINEDMESSAGE = 47872,
        WMDM_FORMATCODE_ABSTRACTMESSAGE = 47873,
        WMDM_FORMATCODE_UNDEFINEDCONTACT = 48000,
        WMDM_FORMATCODE_ABSTRACTCONTACT = 48001,
        WMDM_FORMATCODE_VCARD2 = 48002,
        WMDM_FORMATCODE_VCARD3 = 48003,
        WMDM_FORMATCODE_UNDEFINEDCALENDARITEM = 48640,
        WMDM_FORMATCODE_ABSTRACTCALENDARITEM = 48641,
        WMDM_FORMATCODE_VCALENDAR1 = 48642,
        WMDM_FORMATCODE_VCALENDAR2 = 48643,
        WMDM_FORMATCODE_UNDEFINEDWINDOWSEXECUTABLE = 48768,
        WMDM_FORMATCODE_M4A = 1297101889,
        WMDM_FORMATCODE_3GPA = 860311617,
        WMDM_FORMATCODE_3G2A = 860303937,
        WMDM_FORMATCODE_SECTION = 48770,
    };
    enum class WMDM_SESSION_TYPE : int32_t
    {
        WMDM_SESSION_NONE = 0,
        WMDM_SESSION_TRANSFER_TO_DEVICE = 1,
        WMDM_SESSION_TRANSFER_FROM_DEVICE = 16,
        WMDM_SESSION_DELETE = 256,
        WMDM_SESSION_CUSTOM = 4096,
    };
    enum class WMDM_STORAGE_ENUM_MODE : int32_t
    {
        ENUM_MODE_RAW = 0,
        ENUM_MODE_USE_DEVICE_PREF = 1,
        ENUM_MODE_METADATA_VIEWS = 2,
    };
    enum class WMDM_TAG_DATATYPE : int32_t
    {
        WMDM_TYPE_DWORD = 0,
        WMDM_TYPE_STRING = 1,
        WMDM_TYPE_BINARY = 2,
        WMDM_TYPE_BOOL = 3,
        WMDM_TYPE_QWORD = 4,
        WMDM_TYPE_WORD = 5,
        WMDM_TYPE_GUID = 6,
        WMDM_TYPE_DATE = 7,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct MTP_COMMAND_DATA_IN;
    struct MTP_COMMAND_DATA_OUT;
    struct WMDMDATETIME;
    union WMDMDetermineMaxPropStringLen;
    struct WMDM_FORMAT_CAPABILITY;
    struct WMDM_PROP_CONFIG;
    struct WMDM_PROP_DESC;
    struct WMDM_PROP_VALUES_ENUM;
    struct WMDM_PROP_VALUES_RANGE;
    struct WMFILECAPABILITIES;
    struct __MACINFO;
    struct __OPAQUECOMMAND;
    struct __WMDMID;
    struct __WMDMMetadataView;
    struct __WMDMRIGHTS;
    struct _tWAVEFORMATEX;
    struct _tagBITMAPINFOHEADER;
    struct _tagVIDEOINFOHEADER;
    struct IComponentAuthenticate;
    struct IMDSPDevice;
    struct IMDSPDevice2;
    struct IMDSPDevice3;
    struct IMDSPDeviceControl;
    struct IMDSPDirectTransfer;
    struct IMDSPEnumDevice;
    struct IMDSPEnumStorage;
    struct IMDSPObject;
    struct IMDSPObject2;
    struct IMDSPObjectInfo;
    struct IMDSPRevoked;
    struct IMDSPStorage;
    struct IMDSPStorage2;
    struct IMDSPStorage3;
    struct IMDSPStorage4;
    struct IMDSPStorageGlobals;
    struct IMDServiceProvider;
    struct IMDServiceProvider2;
    struct IMDServiceProvider3;
    struct ISCPSecureAuthenticate;
    struct ISCPSecureAuthenticate2;
    struct ISCPSecureExchange;
    struct ISCPSecureExchange2;
    struct ISCPSecureExchange3;
    struct ISCPSecureQuery;
    struct ISCPSecureQuery2;
    struct ISCPSecureQuery3;
    struct ISCPSession;
    struct IWMDMDevice;
    struct IWMDMDevice2;
    struct IWMDMDevice3;
    struct IWMDMDeviceControl;
    struct IWMDMDeviceSession;
    struct IWMDMEnumDevice;
    struct IWMDMEnumStorage;
    struct IWMDMLogger;
    struct IWMDMMetaData;
    struct IWMDMNotification;
    struct IWMDMObjectInfo;
    struct IWMDMOperation;
    struct IWMDMOperation2;
    struct IWMDMOperation3;
    struct IWMDMProgress;
    struct IWMDMProgress2;
    struct IWMDMProgress3;
    struct IWMDMRevoked;
    struct IWMDMStorage;
    struct IWMDMStorage2;
    struct IWMDMStorage3;
    struct IWMDMStorage4;
    struct IWMDMStorageControl;
    struct IWMDMStorageControl2;
    struct IWMDMStorageControl3;
    struct IWMDMStorageGlobals;
    struct IWMDeviceManager;
    struct IWMDeviceManager2;
    struct IWMDeviceManager3;
    struct MediaDevMgr;
    struct MediaDevMgrClassFactory;
    struct WMDMDevice;
    struct WMDMDeviceEnum;
    struct WMDMLogger;
    struct WMDMStorage;
    struct WMDMStorageEnum;
    struct WMDMStorageGlobal;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IComponentAuthenticate>{ 0xA9889C00,0x6D2B,0x11D3,{ 0x84,0x96,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // A9889C00-6D2B-11D3-8496-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPDevice>{ 0x1DCB3A12,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A12-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPDevice2>{ 0x420D16AD,0xC97D,0x4E00,{ 0x82,0xAA,0x00,0xE9,0xF4,0x33,0x5D,0xDD } }; // 420D16AD-C97D-4E00-82AA-00E9F4335DDD
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPDevice3>{ 0x1A839845,0xFC55,0x487C,{ 0x97,0x6F,0xEE,0x38,0xAC,0x0E,0x8C,0x4E } }; // 1A839845-FC55-487C-976F-EE38AC0E8C4E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPDeviceControl>{ 0x1DCB3A14,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A14-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPDirectTransfer>{ 0xC2FE57A8,0x9304,0x478C,{ 0x9E,0xE4,0x47,0xE3,0x97,0xB9,0x12,0xD7 } }; // C2FE57A8-9304-478C-9EE4-47E397B912D7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPEnumDevice>{ 0x1DCB3A11,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A11-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPEnumStorage>{ 0x1DCB3A15,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A15-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPObject>{ 0x1DCB3A18,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A18-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPObject2>{ 0x3F34CD3E,0x5907,0x4341,{ 0x9A,0xF9,0x97,0xF4,0x18,0x7C,0x3A,0xA5 } }; // 3F34CD3E-5907-4341-9AF9-97F4187C3AA5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPObjectInfo>{ 0x1DCB3A19,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A19-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPRevoked>{ 0xA4E8F2D4,0x3F31,0x464D,{ 0xB5,0x3D,0x4F,0xC3,0x35,0x99,0x81,0x84 } }; // A4E8F2D4-3F31-464D-B53D-4FC335998184
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPStorage>{ 0x1DCB3A16,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A16-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPStorage2>{ 0x0A5E07A5,0x6454,0x4451,{ 0x9C,0x36,0x1C,0x6A,0xE7,0xE2,0xB1,0xD6 } }; // 0A5E07A5-6454-4451-9C36-1C6AE7E2B1D6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPStorage3>{ 0x6C669867,0x97ED,0x4A67,{ 0x97,0x06,0x1C,0x55,0x29,0xD2,0xA4,0x14 } }; // 6C669867-97ED-4A67-9706-1C5529D2A414
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPStorage4>{ 0x3133B2C4,0x515C,0x481B,{ 0xB1,0xCE,0x39,0x32,0x7E,0xCB,0x4F,0x74 } }; // 3133B2C4-515C-481B-B1CE-39327ECB4F74
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDSPStorageGlobals>{ 0x1DCB3A17,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A17-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDServiceProvider>{ 0x1DCB3A10,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A10-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDServiceProvider2>{ 0xB2FA24B7,0xCDA3,0x4694,{ 0x98,0x62,0x41,0x3A,0xE1,0xA3,0x48,0x19 } }; // B2FA24B7-CDA3-4694-9862-413AE1A34819
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IMDServiceProvider3>{ 0x4ED13EF3,0xA971,0x4D19,{ 0x9F,0x51,0x0E,0x18,0x26,0xB2,0xDA,0x57 } }; // 4ED13EF3-A971-4D19-9F51-0E1826B2DA57
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureAuthenticate>{ 0x1DCB3A0F,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A0F-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureAuthenticate2>{ 0xB580CFAE,0x1672,0x47E2,{ 0xAC,0xAA,0x44,0xBB,0xEC,0xBC,0xAE,0x5B } }; // B580CFAE-1672-47E2-ACAA-44BBECBCAE5B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureExchange>{ 0x1DCB3A0E,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A0E-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureExchange2>{ 0x6C62FC7B,0x2690,0x483F,{ 0x9D,0x44,0x0A,0x20,0xCB,0x35,0x57,0x7C } }; // 6C62FC7B-2690-483F-9D44-0A20CB35577C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureExchange3>{ 0xAB4E77E4,0x8908,0x4B17,{ 0xBD,0x2A,0xB1,0xDB,0xE6,0xDD,0x69,0xE1 } }; // AB4E77E4-8908-4B17-BD2A-B1DBE6DD69E1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureQuery>{ 0x1DCB3A0D,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A0D-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureQuery2>{ 0xEBE17E25,0x4FD7,0x4632,{ 0xAF,0x46,0x6D,0x93,0xD4,0xFC,0xC7,0x2E } }; // EBE17E25-4FD7-4632-AF46-6D93D4FCC72E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSecureQuery3>{ 0xB7EDD1A2,0x4DAB,0x484B,{ 0xB3,0xC5,0xAD,0x39,0xB8,0xB4,0xC0,0xB1 } }; // B7EDD1A2-4DAB-484B-B3C5-AD39B8B4C0B1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::ISCPSession>{ 0x88A3E6ED,0xEEE4,0x4619,{ 0xBB,0xB3,0xFD,0x4F,0xB6,0x27,0x15,0xD1 } }; // 88A3E6ED-EEE4-4619-BBB3-FD4FB62715D1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMDevice>{ 0x1DCB3A02,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A02-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMDevice2>{ 0xE34F3D37,0x9D67,0x4FC1,{ 0x92,0x52,0x62,0xD2,0x8B,0x2F,0x8B,0x55 } }; // E34F3D37-9D67-4FC1-9252-62D28B2F8B55
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMDevice3>{ 0x6C03E4FE,0x05DB,0x4DDA,{ 0x9E,0x3C,0x06,0x23,0x3A,0x6D,0x5D,0x65 } }; // 6C03E4FE-05DB-4DDA-9E3C-06233A6D5D65
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMDeviceControl>{ 0x1DCB3A04,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A04-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMDeviceSession>{ 0x82AF0A65,0x9D96,0x412C,{ 0x83,0xE5,0x3C,0x43,0xE4,0xB0,0x6C,0xC7 } }; // 82AF0A65-9D96-412C-83E5-3C43E4B06CC7
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMEnumDevice>{ 0x1DCB3A01,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A01-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMEnumStorage>{ 0x1DCB3A05,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A05-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMLogger>{ 0x110A3200,0x5A79,0x11D3,{ 0x8D,0x78,0x44,0x45,0x53,0x54,0x00,0x00 } }; // 110A3200-5A79-11D3-8D78-444553540000
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMMetaData>{ 0xEC3B0663,0x0951,0x460A,{ 0x9A,0x80,0x0D,0xCE,0xED,0x3C,0x04,0x3C } }; // EC3B0663-0951-460A-9A80-0DCEED3C043C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMNotification>{ 0x3F5E95C0,0x0F43,0x4ED4,{ 0x93,0xD2,0xC8,0x9A,0x45,0xD5,0x9B,0x81 } }; // 3F5E95C0-0F43-4ED4-93D2-C89A45D59B81
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMObjectInfo>{ 0x1DCB3A09,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A09-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMOperation>{ 0x1DCB3A0B,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A0B-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMOperation2>{ 0x33445B48,0x7DF7,0x425C,{ 0xAD,0x8F,0x0F,0xC6,0xD8,0x2F,0x9F,0x75 } }; // 33445B48-7DF7-425C-AD8F-0FC6D82F9F75
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMOperation3>{ 0xD1F9B46A,0x9CA8,0x46D8,{ 0x9D,0x0F,0x1E,0xC9,0xBA,0xE5,0x49,0x19 } }; // D1F9B46A-9CA8-46D8-9D0F-1EC9BAE54919
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMProgress>{ 0x1DCB3A0C,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A0C-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMProgress2>{ 0x3A43F550,0xB383,0x4E92,{ 0xB0,0x4A,0xE6,0xBB,0xC6,0x60,0xFE,0xFC } }; // 3A43F550-B383-4E92-B04A-E6BBC660FEFC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMProgress3>{ 0x21DE01CB,0x3BB4,0x4929,{ 0xB2,0x1A,0x17,0xAF,0x3F,0x80,0xF6,0x58 } }; // 21DE01CB-3BB4-4929-B21A-17AF3F80F658
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMRevoked>{ 0xEBECCEDB,0x88EE,0x4E55,{ 0xB6,0xA4,0x8D,0x9F,0x07,0xD6,0x96,0xAA } }; // EBECCEDB-88EE-4E55-B6A4-8D9F07D696AA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorage>{ 0x1DCB3A06,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A06-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorage2>{ 0x1ED5A144,0x5CD5,0x4683,{ 0x9E,0xFF,0x72,0xCB,0xDB,0x2D,0x95,0x33 } }; // 1ED5A144-5CD5-4683-9EFF-72CBDB2D9533
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorage3>{ 0x97717EEA,0x926A,0x464E,{ 0x96,0xA4,0x24,0x7B,0x02,0x16,0x02,0x6E } }; // 97717EEA-926A-464E-96A4-247B0216026E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorage4>{ 0xC225BAC5,0xA03A,0x40B8,{ 0x9A,0x23,0x91,0xCF,0x47,0x8C,0x64,0xA6 } }; // C225BAC5-A03A-40B8-9A23-91CF478C64A6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorageControl>{ 0x1DCB3A08,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A08-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorageControl2>{ 0x972C2E88,0xBD6C,0x4125,{ 0x8E,0x09,0x84,0xF8,0x37,0xE6,0x37,0xB6 } }; // 972C2E88-BD6C-4125-8E09-84F837E637B6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorageControl3>{ 0xB3266365,0xD4F3,0x4696,{ 0x8D,0x53,0xBD,0x27,0xEC,0x60,0x99,0x3A } }; // B3266365-D4F3-4696-8D53-BD27EC60993A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDMStorageGlobals>{ 0x1DCB3A07,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A07-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDeviceManager>{ 0x1DCB3A00,0x33ED,0x11D3,{ 0x84,0x70,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 1DCB3A00-33ED-11D3-8470-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDeviceManager2>{ 0x923E5249,0x8731,0x4C5B,{ 0x9B,0x1C,0xB8,0xB6,0x0B,0x6E,0x46,0xAF } }; // 923E5249-8731-4C5B-9B1C-B8B60B6E46AF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::IWMDeviceManager3>{ 0xAF185C41,0x100D,0x46ED,{ 0xBE,0x2E,0x9C,0xE8,0xC4,0x45,0x94,0xEF } }; // AF185C41-100D-46ED-BE2E-9CE8C44594EF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::MediaDevMgr>{ 0x25BAAD81,0x3560,0x11D3,{ 0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 25BAAD81-3560-11D3-8471-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::MediaDevMgrClassFactory>{ 0x50040C1D,0xBDBF,0x4924,{ 0xB8,0x73,0xF1,0x4D,0x6C,0x5B,0xFD,0x66 } }; // 50040C1D-BDBF-4924-B873-F14D6C5BFD66
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMDevice>{ 0x807B3CDF,0x357A,0x11D3,{ 0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 807B3CDF-357A-11D3-8471-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMDeviceEnum>{ 0x430E35AF,0x3971,0x11D3,{ 0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 430E35AF-3971-11D3-8474-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMLogger>{ 0x110A3202,0x5A79,0x11D3,{ 0x8D,0x78,0x44,0x45,0x53,0x54,0x00,0x00 } }; // 110A3202-5A79-11D3-8D78-444553540000
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMStorage>{ 0x807B3CE0,0x357A,0x11D3,{ 0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 807B3CE0-357A-11D3-8471-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMStorageEnum>{ 0xEB401A3B,0x3AF7,0x11D3,{ 0x84,0x74,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // EB401A3B-3AF7-11D3-8474-00C04F79DBC0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaDeviceManager::WMDMStorageGlobal>{ 0x807B3CE1,0x357A,0x11D3,{ 0x84,0x71,0x00,0xC0,0x4F,0x79,0xDB,0xC0 } }; // 807B3CE1-357A-11D3-8471-00C04F79DBC0
#pragma endregion guids

}
#endif
