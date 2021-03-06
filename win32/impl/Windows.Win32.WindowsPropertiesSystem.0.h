// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsPropertiesSystem_0_H
#define WIN32_Windows_Win32_WindowsPropertiesSystem_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsPropertiesSystem
{
#pragma region enums
    enum class DRAWPROGRESSFLAGS : int32_t
    {
        DPF_NONE = 0,
        DPF_MARQUEE = 1,
        DPF_MARQUEE_COMPLETE = 2,
        DPF_ERROR = 4,
        DPF_WARNING = 8,
        DPF_STOPPED = 16,
    };
    enum class GETPROPERTYSTOREFLAGS : int32_t
    {
        GPS_DEFAULT = 0,
        GPS_HANDLERPROPERTIESONLY = 1,
        GPS_READWRITE = 2,
        GPS_TEMPORARY = 4,
        GPS_FASTPROPERTIESONLY = 8,
        GPS_OPENSLOWITEM = 16,
        GPS_DELAYCREATION = 32,
        GPS_BESTEFFORT = 64,
        GPS_NO_OPLOCK = 128,
        GPS_PREFERQUERYPROPERTIES = 256,
        GPS_EXTRINSICPROPERTIES = 512,
        GPS_EXTRINSICPROPERTIESONLY = 1024,
        GPS_VOLATILEPROPERTIES = 2048,
        GPS_VOLATILEPROPERTIESONLY = 4096,
        GPS_MASK_VALID = 8191,
    };
    enum class PDOPSTATUS : int32_t
    {
        PDOPS_RUNNING = 1,
        PDOPS_PAUSED = 2,
        PDOPS_CANCELLED = 3,
        PDOPS_STOPPED = 4,
        PDOPS_ERRORS = 5,
    };
    enum class PKA_FLAGS : int32_t
    {
        PKA_SET = 0,
        PKA_APPEND = 1,
        PKA_DELETE = 2,
    };
    enum class PLACEHOLDER_STATES : int32_t
    {
        PS_NONE = 0,
        PS_MARKED_FOR_OFFLINE_AVAILABILITY = 1,
        PS_FULL_PRIMARY_STREAM_AVAILABLE = 2,
        PS_CREATE_FILE_ACCESSIBLE = 4,
        PS_CLOUDFILE_PLACEHOLDER = 8,
        PS_DEFAULT = 7,
        PS_ALL = 15,
    };
    enum class PROPDESC_AGGREGATION_TYPE : int32_t
    {
        PDAT_DEFAULT = 0,
        PDAT_FIRST = 1,
        PDAT_SUM = 2,
        PDAT_AVERAGE = 3,
        PDAT_DATERANGE = 4,
        PDAT_UNION = 5,
        PDAT_MAX = 6,
        PDAT_MIN = 7,
    };
    enum class PROPDESC_COLUMNINDEX_TYPE : int32_t
    {
        PDCIT_NONE = 0,
        PDCIT_ONDISK = 1,
        PDCIT_INMEMORY = 2,
        PDCIT_ONDEMAND = 3,
        PDCIT_ONDISKALL = 4,
        PDCIT_ONDISKVECTOR = 5,
    };
    enum class PROPDESC_CONDITION_TYPE : int32_t
    {
        PDCOT_NONE = 0,
        PDCOT_STRING = 1,
        PDCOT_SIZE = 2,
        PDCOT_DATETIME = 3,
        PDCOT_BOOLEAN = 4,
        PDCOT_NUMBER = 5,
    };
    enum class PROPDESC_DISPLAYTYPE : int32_t
    {
        PDDT_STRING = 0,
        PDDT_NUMBER = 1,
        PDDT_BOOLEAN = 2,
        PDDT_DATETIME = 3,
        PDDT_ENUMERATED = 4,
    };
    enum class PROPDESC_ENUMFILTER : int32_t
    {
        PDEF_ALL = 0,
        PDEF_SYSTEM = 1,
        PDEF_NONSYSTEM = 2,
        PDEF_VIEWABLE = 3,
        PDEF_QUERYABLE = 4,
        PDEF_INFULLTEXTQUERY = 5,
        PDEF_COLUMN = 6,
    };
    enum class PROPDESC_FORMAT_FLAGS : int32_t
    {
        PDFF_DEFAULT = 0,
        PDFF_PREFIXNAME = 1,
        PDFF_FILENAME = 2,
        PDFF_ALWAYSKB = 4,
        PDFF_RESERVED_RIGHTTOLEFT = 8,
        PDFF_SHORTTIME = 16,
        PDFF_LONGTIME = 32,
        PDFF_HIDETIME = 64,
        PDFF_SHORTDATE = 128,
        PDFF_LONGDATE = 256,
        PDFF_HIDEDATE = 512,
        PDFF_RELATIVEDATE = 1024,
        PDFF_USEEDITINVITATION = 2048,
        PDFF_READONLY = 4096,
        PDFF_NOAUTOREADINGORDER = 8192,
    };
    enum class PROPDESC_GROUPING_RANGE : int32_t
    {
        PDGR_DISCRETE = 0,
        PDGR_ALPHANUMERIC = 1,
        PDGR_SIZE = 2,
        PDGR_DYNAMIC = 3,
        PDGR_DATE = 4,
        PDGR_PERCENT = 5,
        PDGR_ENUMERATED = 6,
    };
    enum class PROPDESC_RELATIVEDESCRIPTION_TYPE : int32_t
    {
        PDRDT_GENERAL = 0,
        PDRDT_DATE = 1,
        PDRDT_SIZE = 2,
        PDRDT_COUNT = 3,
        PDRDT_REVISION = 4,
        PDRDT_LENGTH = 5,
        PDRDT_DURATION = 6,
        PDRDT_SPEED = 7,
        PDRDT_RATE = 8,
        PDRDT_RATING = 9,
        PDRDT_PRIORITY = 10,
    };
    enum class PROPDESC_SEARCHINFO_FLAGS : int32_t
    {
        PDSIF_DEFAULT = 0,
        PDSIF_ININVERTEDINDEX = 1,
        PDSIF_ISCOLUMN = 2,
        PDSIF_ISCOLUMNSPARSE = 4,
        PDSIF_ALWAYSINCLUDE = 8,
        PDSIF_USEFORTYPEAHEAD = 16,
    };
    enum class PROPDESC_SORTDESCRIPTION : int32_t
    {
        PDSD_GENERAL = 0,
        PDSD_A_Z = 1,
        PDSD_LOWEST_HIGHEST = 2,
        PDSD_SMALLEST_BIGGEST = 3,
        PDSD_OLDEST_NEWEST = 4,
    };
    enum class PROPDESC_TYPE_FLAGS : int32_t
    {
        PDTF_DEFAULT = 0,
        PDTF_MULTIPLEVALUES = 1,
        PDTF_ISINNATE = 2,
        PDTF_ISGROUP = 4,
        PDTF_CANGROUPBY = 8,
        PDTF_CANSTACKBY = 16,
        PDTF_ISTREEPROPERTY = 32,
        PDTF_INCLUDEINFULLTEXTQUERY = 64,
        PDTF_ISVIEWABLE = 128,
        PDTF_ISQUERYABLE = 256,
        PDTF_CANBEPURGED = 512,
        PDTF_SEARCHRAWVALUE = 1024,
        PDTF_DONTCOERCEEMPTYSTRINGS = 2048,
        PDTF_ALWAYSINSUPPLEMENTALSTORE = 4096,
        PDTF_ISSYSTEMPROPERTY = -2147483648,
        PDTF_MASK_ALL = -2147475457,
    };
    enum class PROPDESC_VIEW_FLAGS : int32_t
    {
        PDVF_DEFAULT = 0,
        PDVF_CENTERALIGN = 1,
        PDVF_RIGHTALIGN = 2,
        PDVF_BEGINNEWGROUP = 4,
        PDVF_FILLAREA = 8,
        PDVF_SORTDESCENDING = 16,
        PDVF_SHOWONLYIFPRESENT = 32,
        PDVF_SHOWBYDEFAULT = 64,
        PDVF_SHOWINPRIMARYLIST = 128,
        PDVF_SHOWINSECONDARYLIST = 256,
        PDVF_HIDELABEL = 512,
        PDVF_HIDDEN = 2048,
        PDVF_CANWRAP = 4096,
        PDVF_MASK_ALL = 7167,
    };
    enum class PROPENUMTYPE : int32_t
    {
        PET_DISCRETEVALUE = 0,
        PET_RANGEDVALUE = 1,
        PET_DEFAULTVALUE = 2,
        PET_ENDRANGE = 3,
    };
    enum class PROPVAR_COMPARE_UNIT : int32_t
    {
        PVCU_DEFAULT = 0,
        PVCU_SECOND = 1,
        PVCU_MINUTE = 2,
        PVCU_HOUR = 3,
        PVCU_DAY = 4,
        PVCU_MONTH = 5,
        PVCU_YEAR = 6,
    };
    enum class PSC_STATE : int32_t
    {
        PSC_NORMAL = 0,
        PSC_NOTINSOURCE = 1,
        PSC_DIRTY = 2,
        PSC_READONLY = 3,
    };
    enum class SYNC_ENGINE_STATE_FLAGS : int32_t
    {
        SESF_NONE = 0,
        SESF_SERVICE_QUOTA_NEARING_LIMIT = 1,
        SESF_SERVICE_QUOTA_EXCEEDED_LIMIT = 2,
        SESF_AUTHENTICATION_ERROR = 4,
        SESF_PAUSED_DUE_TO_METERED_NETWORK = 8,
        SESF_PAUSED_DUE_TO_DISK_SPACE_FULL = 16,
        SESF_PAUSED_DUE_TO_CLIENT_POLICY = 32,
        SESF_PAUSED_DUE_TO_SERVICE_POLICY = 64,
        SESF_SERVICE_UNAVAILABLE = 128,
        SESF_PAUSED_DUE_TO_USER_REQUEST = 256,
        SESF_ALL_FLAGS = 511,
    };
    enum class SYNC_TRANSFER_STATUS : int32_t
    {
        STS_NONE = 0,
        STS_NEEDSUPLOAD = 1,
        STS_NEEDSDOWNLOAD = 2,
        STS_TRANSFERRING = 4,
        STS_PAUSED = 8,
        STS_HASERROR = 16,
        STS_FETCHING_METADATA = 32,
        STS_USER_REQUESTED_REFRESH = 64,
        STS_HASWARNING = 128,
        STS_EXCLUDED = 256,
        STS_INCOMPLETE = 512,
        STS_PLACEHOLDER_IFEMPTY = 1024,
    };
    enum class _PERSIST_SPROPSTORE_FLAGS : int32_t
    {
        FPSPS_DEFAULT = 0,
        FPSPS_READONLY = 1,
        FPSPS_TREAT_NEW_VALUES_AS_DIRTY = 2,
    };
    enum class _PROPERTYUI_FLAGS : int32_t
    {
        PUIF_DEFAULT = 0,
        PUIF_RIGHTALIGN = 1,
        PUIF_NOLABELININFOTIP = 2,
    };
    enum class tagPROPVAR_CHANGE_FLAGS : int32_t
    {
        PVCHF_DEFAULT = 0,
        PVCHF_NOVALUEPROP = 1,
        PVCHF_ALPHABOOL = 2,
        PVCHF_NOUSEROVERRIDE = 4,
        PVCHF_LOCALBOOL = 8,
        PVCHF_NOHEXSTRING = 16,
    };
    enum class tagPROPVAR_COMPARE_FLAGS : int32_t
    {
        PVCF_DEFAULT = 0,
        PVCF_TREATEMPTYASGREATERTHAN = 1,
        PVCF_USESTRCMP = 2,
        PVCF_USESTRCMPC = 4,
        PVCF_USESTRCMPI = 8,
        PVCF_USESTRCMPIC = 16,
        PVCF_DIGITSASNUMBERS_CASESENSITIVE = 32,
    };
    enum class tagPSTIME_FLAGS : int32_t
    {
        PSTF_UTC = 0,
        PSTF_LOCAL = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct PROPERTYKEY;
    struct PROPPRG;
    struct SERIALIZEDPROPSTORAGE;
    struct IPropertyChange;
    struct IPropertyChangeArray;
    struct IPropertyDescription;
    struct IPropertyDescription2;
    struct IPropertyDescriptionAliasInfo;
    struct IPropertyDescriptionList;
    struct IPropertyDescriptionRelatedPropertyInfo;
    struct IPropertyDescriptionSearchInfo;
    struct IPropertyEnumType;
    struct IPropertyEnumType2;
    struct IPropertyEnumTypeList;
    struct IPropertyStoreCache;
    struct IPropertyStoreCapabilities;
    struct IPropertyStoreFactory;
    struct IPropertySystem;
    struct IPropertySystemChangeNotify;
    struct IPropertyUI;
    struct InMemoryPropertyStore;
    struct InMemoryPropertyStoreMarshalByValue;
    struct PropertySystem;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyChange>{ 0xF917BC8A,0x1BBA,0x4478,{ 0xA2,0x45,0x1B,0xDE,0x03,0xEB,0x94,0x31 } }; // F917BC8A-1BBA-4478-A245-1BDE03EB9431
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyChangeArray>{ 0x380F5CAD,0x1B5E,0x42F2,{ 0x80,0x5D,0x63,0x7F,0xD3,0x92,0xD3,0x1E } }; // 380F5CAD-1B5E-42F2-805D-637FD392D31E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescription>{ 0x6F79D558,0x3E96,0x4549,{ 0xA1,0xD1,0x7D,0x75,0xD2,0x28,0x88,0x14 } }; // 6F79D558-3E96-4549-A1D1-7D75D2288814
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescription2>{ 0x57D2EDED,0x5062,0x400E,{ 0xB1,0x07,0x5D,0xAE,0x79,0xFE,0x57,0xA6 } }; // 57D2EDED-5062-400E-B107-5DAE79FE57A6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescriptionAliasInfo>{ 0xF67104FC,0x2AF9,0x46FD,{ 0xB3,0x2D,0x24,0x3C,0x14,0x04,0xF3,0xD1 } }; // F67104FC-2AF9-46FD-B32D-243C1404F3D1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescriptionList>{ 0x1F9FC1D0,0xC39B,0x4B26,{ 0x81,0x7F,0x01,0x19,0x67,0xD3,0x44,0x0E } }; // 1F9FC1D0-C39B-4B26-817F-011967D3440E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescriptionRelatedPropertyInfo>{ 0x507393F4,0x2A3D,0x4A60,{ 0xB5,0x9E,0xD9,0xC7,0x57,0x16,0xC2,0xDD } }; // 507393F4-2A3D-4A60-B59E-D9C75716C2DD
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyDescriptionSearchInfo>{ 0x078F91BD,0x29A2,0x440F,{ 0x92,0x4E,0x46,0xA2,0x91,0x52,0x45,0x20 } }; // 078F91BD-29A2-440F-924E-46A291524520
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyEnumType>{ 0x11E1FBF9,0x2D56,0x4A6B,{ 0x8D,0xB3,0x7C,0xD1,0x93,0xA4,0x71,0xF2 } }; // 11E1FBF9-2D56-4A6B-8DB3-7CD193A471F2
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyEnumType2>{ 0x9B6E051C,0x5DDD,0x4321,{ 0x90,0x70,0xFE,0x2A,0xCB,0x55,0xE7,0x94 } }; // 9B6E051C-5DDD-4321-9070-FE2ACB55E794
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyEnumTypeList>{ 0xA99400F4,0x3D84,0x4557,{ 0x94,0xBA,0x12,0x42,0xFB,0x2C,0xC9,0xA6 } }; // A99400F4-3D84-4557-94BA-1242FB2CC9A6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyStoreCache>{ 0x3017056D,0x9A91,0x4E90,{ 0x93,0x7D,0x74,0x6C,0x72,0xAB,0xBF,0x4F } }; // 3017056D-9A91-4E90-937D-746C72ABBF4F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyStoreCapabilities>{ 0xC8E2D566,0x186E,0x4D49,{ 0xBF,0x41,0x69,0x09,0xEA,0xD5,0x6A,0xCC } }; // C8E2D566-186E-4D49-BF41-6909EAD56ACC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyStoreFactory>{ 0xBC110B6D,0x57E8,0x4148,{ 0xA9,0xC6,0x91,0x01,0x5A,0xB2,0xF3,0xA5 } }; // BC110B6D-57E8-4148-A9C6-91015AB2F3A5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertySystem>{ 0xCA724E8A,0xC3E6,0x442B,{ 0x88,0xA4,0x6F,0xB0,0xDB,0x80,0x35,0xA3 } }; // CA724E8A-C3E6-442B-88A4-6FB0DB8035A3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertySystemChangeNotify>{ 0xFA955FD9,0x38BE,0x4879,{ 0xA6,0xCE,0x82,0x4C,0xF5,0x2D,0x60,0x9F } }; // FA955FD9-38BE-4879-A6CE-824CF52D609F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::IPropertyUI>{ 0x757A7D9F,0x919A,0x4118,{ 0x99,0xD7,0xDB,0xB2,0x08,0xC8,0xCC,0x66 } }; // 757A7D9F-919A-4118-99D7-DBB208C8CC66
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::InMemoryPropertyStore>{ 0x9A02E012,0x6303,0x4E1E,{ 0xB9,0xA1,0x63,0x0F,0x80,0x25,0x92,0xC5 } }; // 9A02E012-6303-4E1E-B9A1-630F802592C5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::InMemoryPropertyStoreMarshalByValue>{ 0xD4CA0E2D,0x6DA7,0x4B75,{ 0xA9,0x7C,0x5F,0x30,0x6F,0x0E,0xAE,0xDC } }; // D4CA0E2D-6DA7-4B75-A97C-5F306F0EAEDC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsPropertiesSystem::PropertySystem>{ 0xB8967F85,0x58AE,0x4F46,{ 0x9F,0xB2,0x5D,0x79,0x04,0x79,0x8F,0x4B } }; // B8967F85-58AE-4F46-9FB2-5D7904798F4B
#pragma endregion guids

}
#endif
