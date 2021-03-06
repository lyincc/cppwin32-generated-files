// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsMediaFormat_0_H
#define WIN32_Windows_Win32_WindowsMediaFormat_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsMediaFormat
{
#pragma region enums
    enum class NETSOURCE_URLCREDPOLICY_SETTINGS : int32_t
    {
        NETSOURCE_URLCREDPOLICY_SETTING_SILENTLOGONOK = 0,
        NETSOURCE_URLCREDPOLICY_SETTING_MUSTPROMPTUSER = 1,
        NETSOURCE_URLCREDPOLICY_SETTING_ANONYMOUSONLY = 2,
    };
    enum class WMT_ATTR_DATATYPE : int32_t
    {
        WMT_TYPE_DWORD = 0,
        WMT_TYPE_STRING = 1,
        WMT_TYPE_BINARY = 2,
        WMT_TYPE_BOOL = 3,
        WMT_TYPE_QWORD = 4,
        WMT_TYPE_WORD = 5,
        WMT_TYPE_GUID = 6,
    };
    enum class WMT_ATTR_IMAGETYPE : int32_t
    {
        WMT_IMAGETYPE_BITMAP = 1,
        WMT_IMAGETYPE_JPEG = 2,
        WMT_IMAGETYPE_GIF = 3,
    };
    enum class WMT_CODEC_INFO_TYPE : int32_t
    {
        WMT_CODECINFO_AUDIO = 0,
        WMT_CODECINFO_VIDEO = 1,
        WMT_CODECINFO_UNKNOWN = -1,
    };
    enum class WMT_CREDENTIAL_FLAGS : int32_t
    {
        WMT_CREDENTIAL_SAVE = 1,
        WMT_CREDENTIAL_DONT_CACHE = 2,
        WMT_CREDENTIAL_CLEAR_TEXT = 4,
        WMT_CREDENTIAL_PROXY = 8,
        WMT_CREDENTIAL_ENCRYPT = 16,
    };
    enum class WMT_DRMLA_TRUST : int32_t
    {
        WMT_DRMLA_UNTRUSTED = 0,
        WMT_DRMLA_TRUSTED = 1,
        WMT_DRMLA_TAMPERED = 2,
    };
    enum class WMT_FILESINK_MODE : int32_t
    {
        WMT_FM_SINGLE_BUFFERS = 1,
        WMT_FM_FILESINK_DATA_UNITS = 2,
        WMT_FM_FILESINK_UNBUFFERED = 4,
    };
    enum class WMT_IMAGE_TYPE : int32_t
    {
        WMT_IT_NONE = 0,
        WMT_IT_BITMAP = 1,
        WMT_IT_JPEG = 2,
        WMT_IT_GIF = 3,
    };
    enum class WMT_INDEXER_TYPE : int32_t
    {
        WMT_IT_PRESENTATION_TIME = 0,
        WMT_IT_FRAME_NUMBERS = 1,
        WMT_IT_TIMECODE = 2,
    };
    enum class WMT_INDEX_TYPE : int32_t
    {
        WMT_IT_NEAREST_DATA_UNIT = 1,
        WMT_IT_NEAREST_OBJECT = 2,
        WMT_IT_NEAREST_CLEAN_POINT = 3,
    };
    enum class WMT_MUSICSPEECH_CLASS_MODE : int32_t
    {
        WMT_MS_CLASS_MUSIC = 0,
        WMT_MS_CLASS_SPEECH = 1,
        WMT_MS_CLASS_MIXED = 2,
    };
    enum class WMT_NET_PROTOCOL : int32_t
    {
        WMT_PROTOCOL_HTTP = 0,
    };
    enum class WMT_OFFSET_FORMAT : int32_t
    {
        WMT_OFFSET_FORMAT_100NS = 0,
        WMT_OFFSET_FORMAT_FRAME_NUMBERS = 1,
        WMT_OFFSET_FORMAT_PLAYLIST_OFFSET = 2,
        WMT_OFFSET_FORMAT_TIMECODE = 3,
        WMT_OFFSET_FORMAT_100NS_APPROXIMATE = 4,
    };
    enum class WMT_PLAY_MODE : int32_t
    {
        WMT_PLAY_MODE_AUTOSELECT = 0,
        WMT_PLAY_MODE_LOCAL = 1,
        WMT_PLAY_MODE_DOWNLOAD = 2,
        WMT_PLAY_MODE_STREAMING = 3,
    };
    enum class WMT_PROXY_SETTINGS : int32_t
    {
        WMT_PROXY_SETTING_NONE = 0,
        WMT_PROXY_SETTING_MANUAL = 1,
        WMT_PROXY_SETTING_AUTO = 2,
        WMT_PROXY_SETTING_BROWSER = 3,
        WMT_PROXY_SETTING_MAX = 4,
    };
    enum class WMT_RIGHTS : int32_t
    {
        WMT_RIGHT_PLAYBACK = 1,
        WMT_RIGHT_COPY_TO_NON_SDMI_DEVICE = 2,
        WMT_RIGHT_COPY_TO_CD = 8,
        WMT_RIGHT_COPY_TO_SDMI_DEVICE = 16,
        WMT_RIGHT_ONE_TIME = 32,
        WMT_RIGHT_SAVE_STREAM_PROTECTED = 64,
        WMT_RIGHT_COPY = 128,
        WMT_RIGHT_COLLABORATIVE_PLAY = 256,
        WMT_RIGHT_SDMI_TRIGGER = 65536,
        WMT_RIGHT_SDMI_NOMORECOPIES = 131072,
    };
    enum class WMT_STATUS : int32_t
    {
        WMT_ERROR = 0,
        WMT_OPENED = 1,
        WMT_BUFFERING_START = 2,
        WMT_BUFFERING_STOP = 3,
        WMT_EOF = 4,
        WMT_END_OF_FILE = 4,
        WMT_END_OF_SEGMENT = 5,
        WMT_END_OF_STREAMING = 6,
        WMT_LOCATING = 7,
        WMT_CONNECTING = 8,
        WMT_NO_RIGHTS = 9,
        WMT_MISSING_CODEC = 10,
        WMT_STARTED = 11,
        WMT_STOPPED = 12,
        WMT_CLOSED = 13,
        WMT_STRIDING = 14,
        WMT_TIMER = 15,
        WMT_INDEX_PROGRESS = 16,
        WMT_SAVEAS_START = 17,
        WMT_SAVEAS_STOP = 18,
        WMT_NEW_SOURCEFLAGS = 19,
        WMT_NEW_METADATA = 20,
        WMT_BACKUPRESTORE_BEGIN = 21,
        WMT_SOURCE_SWITCH = 22,
        WMT_ACQUIRE_LICENSE = 23,
        WMT_INDIVIDUALIZE = 24,
        WMT_NEEDS_INDIVIDUALIZATION = 25,
        WMT_NO_RIGHTS_EX = 26,
        WMT_BACKUPRESTORE_END = 27,
        WMT_BACKUPRESTORE_CONNECTING = 28,
        WMT_BACKUPRESTORE_DISCONNECTING = 29,
        WMT_ERROR_WITHURL = 30,
        WMT_RESTRICTED_LICENSE = 31,
        WMT_CLIENT_CONNECT = 32,
        WMT_CLIENT_DISCONNECT = 33,
        WMT_NATIVE_OUTPUT_PROPS_CHANGED = 34,
        WMT_RECONNECT_START = 35,
        WMT_RECONNECT_END = 36,
        WMT_CLIENT_CONNECT_EX = 37,
        WMT_CLIENT_DISCONNECT_EX = 38,
        WMT_SET_FEC_SPAN = 39,
        WMT_PREROLL_READY = 40,
        WMT_PREROLL_COMPLETE = 41,
        WMT_CLIENT_PROPERTIES = 42,
        WMT_LICENSEURL_SIGNATURE_STATE = 43,
        WMT_INIT_PLAYLIST_BURN = 44,
        WMT_TRANSCRYPTOR_INIT = 45,
        WMT_TRANSCRYPTOR_SEEKED = 46,
        WMT_TRANSCRYPTOR_READ = 47,
        WMT_TRANSCRYPTOR_CLOSED = 48,
        WMT_PROXIMITY_RESULT = 49,
        WMT_PROXIMITY_COMPLETED = 50,
        WMT_CONTENT_ENABLER = 51,
    };
    enum class WMT_STORAGE_FORMAT : int32_t
    {
        WMT_Storage_Format_MP3 = 0,
        WMT_Storage_Format_V1 = 1,
    };
    enum class WMT_STREAM_SELECTION : int32_t
    {
        WMT_OFF = 0,
        WMT_CLEANPOINT_ONLY = 1,
        WMT_ON = 2,
    };
    enum class WMT_TRANSPORT_TYPE : int32_t
    {
        WMT_Transport_Type_Unreliable = 0,
        WMT_Transport_Type_Reliable = 1,
    };
    enum class WMT_VERSION : int32_t
    {
        WMT_VER_4_0 = 262144,
        WMT_VER_7_0 = 458752,
        WMT_VER_8_0 = 524288,
        WMT_VER_9_0 = 589824,
    };
    enum class WMT_WATERMARK_ENTRY_TYPE : int32_t
    {
        WMT_WMETYPE_AUDIO = 1,
        WMT_WMETYPE_VIDEO = 2,
    };
    enum class WM_AETYPE : int32_t
    {
        WM_AETYPE_INCLUDE = 105,
        WM_AETYPE_EXCLUDE = 101,
    };
    enum class _AM_ASFWRITERCONFIG_PARAM : int32_t
    {
        AM_CONFIGASFWRITER_PARAM_AUTOINDEX = 1,
        AM_CONFIGASFWRITER_PARAM_MULTIPASS = 2,
        AM_CONFIGASFWRITER_PARAM_DONTCOMPRESS = 3,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0001 : int32_t
    {
        WEBSTREAM_SAMPLE_TYPE_FILE = 1,
        WEBSTREAM_SAMPLE_TYPE_RENDER = 2,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0002 : int32_t
    {
        WM_SF_CLEANPOINT = 1,
        WM_SF_DISCONTINUITY = 2,
        WM_SF_DATALOSS = 4,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0003 : int32_t
    {
        WM_SFEX_NOTASYNCPOINT = 2,
        WM_SFEX_DATALOSS = 4,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0004 : int32_t
    {
        WM_DM_NOTINTERLACED = 0,
        WM_DM_DEINTERLACE_NORMAL = 1,
        WM_DM_DEINTERLACE_HALFSIZE = 2,
        WM_DM_DEINTERLACE_HALFSIZEDOUBLERATE = 3,
        WM_DM_DEINTERLACE_INVERSETELECINE = 4,
        WM_DM_DEINTERLACE_VERTICALHALFSIZEDOUBLERATE = 5,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0005 : int32_t
    {
        WM_DM_IT_DISABLE_COHERENT_MODE = 0,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_TOP = 1,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_TOP = 2,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_TOP = 3,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_TOP = 4,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_TOP = 5,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_BOTTOM = 6,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_BOTTOM = 7,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_BOTTOM = 8,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_BOTTOM = 9,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_BOTTOM = 10,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0006 : int32_t
    {
        WM_PLAYBACK_DRC_HIGH = 0,
        WM_PLAYBACK_DRC_MEDIUM = 1,
        WM_PLAYBACK_DRC_LOW = 2,
    };
    enum class __MIDL___MIDL_itf_wmsdkidl_0000_0000_0007 : int32_t
    {
        WMT_TIMECODE_FRAMERATE_30 = 0,
        WMT_TIMECODE_FRAMERATE_30DROP = 1,
        WMT_TIMECODE_FRAMERATE_25 = 2,
        WMT_TIMECODE_FRAMERATE_24 = 3,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct AM_WMT_EVENT_DATA;
    struct DRM_COPY_OPL;
    struct DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS;
    struct DRM_OPL_OUTPUT_IDS;
    struct DRM_OUTPUT_PROTECTION;
    struct DRM_PLAY_OPL;
    struct DRM_VAL16;
    struct DRM_VIDEO_OUTPUT_PROTECTION_IDS;
    struct WMDRM_IMPORT_INIT_STRUCT;
    struct WMMPEG2VIDEOINFO;
    struct WMSCRIPTFORMAT;
    struct WMT_BUFFER_SEGMENT;
    struct WMT_COLORSPACEINFO_EXTENSION_DATA;
    struct WMT_FILESINK_DATA_UNIT;
    struct WMT_PAYLOAD_FRAGMENT;
    struct WMT_TIMECODE_EXTENSION_DATA;
    struct WMT_VIDEOIMAGE_SAMPLE;
    struct WMT_VIDEOIMAGE_SAMPLE2;
    struct WMT_WATERMARK_ENTRY;
    struct WMT_WEBSTREAM_FORMAT;
    struct WMT_WEBSTREAM_SAMPLE_HEADER;
    struct WMVIDEOINFOHEADER;
    struct WMVIDEOINFOHEADER2;
    struct WM_ADDRESS_ACCESSENTRY;
    struct WM_CLIENT_PROPERTIES;
    struct WM_CLIENT_PROPERTIES_EX;
    struct WM_LEAKY_BUCKET_PAIR;
    struct WM_MEDIA_TYPE;
    struct WM_PICTURE;
    struct WM_PORT_NUMBER_RANGE;
    struct WM_READER_CLIENTINFO;
    struct WM_READER_STATISTICS;
    struct WM_STREAM_PRIORITY_RECORD;
    struct WM_STREAM_TYPE_INFO;
    struct WM_SYNCHRONISED_LYRICS;
    struct WM_USER_TEXT;
    struct WM_USER_WEB_URL;
    struct WM_WRITER_STATISTICS;
    struct WM_WRITER_STATISTICS_EX;
    struct IAMWMBufferPass;
    struct IAMWMBufferPassCallback;
    struct INSNetSourceCreator;
    struct INSSBuffer;
    struct INSSBuffer2;
    struct INSSBuffer3;
    struct INSSBuffer4;
    struct IWMAddressAccess;
    struct IWMAddressAccess2;
    struct IWMAuthorizer;
    struct IWMBackupRestoreProps;
    struct IWMBandwidthSharing;
    struct IWMClientConnections;
    struct IWMClientConnections2;
    struct IWMCodecAMVideoAccelerator;
    struct IWMCodecInfo;
    struct IWMCodecInfo2;
    struct IWMCodecInfo3;
    struct IWMCodecVideoAccelerator;
    struct IWMCredentialCallback;
    struct IWMDRMEditor;
    struct IWMDRMMessageParser;
    struct IWMDRMReader;
    struct IWMDRMReader2;
    struct IWMDRMReader3;
    struct IWMDRMTranscryptionManager;
    struct IWMDRMTranscryptor;
    struct IWMDRMTranscryptor2;
    struct IWMDRMWriter;
    struct IWMDRMWriter2;
    struct IWMDRMWriter3;
    struct IWMDeviceRegistration;
    struct IWMGetSecureChannel;
    struct IWMHeaderInfo;
    struct IWMHeaderInfo2;
    struct IWMHeaderInfo3;
    struct IWMIStreamProps;
    struct IWMImageInfo;
    struct IWMIndexer;
    struct IWMIndexer2;
    struct IWMInputMediaProps;
    struct IWMLanguageList;
    struct IWMLicenseBackup;
    struct IWMLicenseRestore;
    struct IWMLicenseRevocationAgent;
    struct IWMMediaProps;
    struct IWMMetadataEditor;
    struct IWMMetadataEditor2;
    struct IWMMutualExclusion;
    struct IWMMutualExclusion2;
    struct IWMOutputMediaProps;
    struct IWMPacketSize;
    struct IWMPacketSize2;
    struct IWMPlayerHook;
    struct IWMPlayerTimestampHook;
    struct IWMProfile;
    struct IWMProfile2;
    struct IWMProfile3;
    struct IWMProfileManager;
    struct IWMProfileManager2;
    struct IWMProfileManagerLanguage;
    struct IWMPropertyVault;
    struct IWMProximityDetection;
    struct IWMReader;
    struct IWMReaderAccelerator;
    struct IWMReaderAdvanced;
    struct IWMReaderAdvanced2;
    struct IWMReaderAdvanced3;
    struct IWMReaderAdvanced4;
    struct IWMReaderAdvanced5;
    struct IWMReaderAdvanced6;
    struct IWMReaderAllocatorEx;
    struct IWMReaderCallback;
    struct IWMReaderCallbackAdvanced;
    struct IWMReaderNetworkConfig;
    struct IWMReaderNetworkConfig2;
    struct IWMReaderPlaylistBurn;
    struct IWMReaderStreamClock;
    struct IWMReaderTimecode;
    struct IWMReaderTypeNegotiation;
    struct IWMRegisterCallback;
    struct IWMRegisteredDevice;
    struct IWMSBufferAllocator;
    struct IWMSInternalAdminNetSource;
    struct IWMSInternalAdminNetSource2;
    struct IWMSInternalAdminNetSource3;
    struct IWMSecureChannel;
    struct IWMStatusCallback;
    struct IWMStreamConfig;
    struct IWMStreamConfig2;
    struct IWMStreamConfig3;
    struct IWMStreamList;
    struct IWMStreamPrioritization;
    struct IWMSyncReader;
    struct IWMSyncReader2;
    struct IWMVideoMediaProps;
    struct IWMWatermarkInfo;
    struct IWMWriter;
    struct IWMWriterAdvanced;
    struct IWMWriterAdvanced2;
    struct IWMWriterAdvanced3;
    struct IWMWriterFileSink;
    struct IWMWriterFileSink2;
    struct IWMWriterFileSink3;
    struct IWMWriterNetworkSink;
    struct IWMWriterPostView;
    struct IWMWriterPostViewCallback;
    struct IWMWriterPreprocess;
    struct IWMWriterPushSink;
    struct IWMWriterSink;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IAMWMBufferPass>{ 0x6DD816D7,0xE740,0x4123,{ 0x9E,0x24,0x24,0x44,0x41,0x26,0x44,0xD8 } }; // 6DD816D7-E740-4123-9E24-2444412644D8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IAMWMBufferPassCallback>{ 0xB25B8372,0xD2D2,0x44B2,{ 0x86,0x53,0x1B,0x8D,0xAE,0x33,0x24,0x89 } }; // B25B8372-D2D2-44B2-8653-1B8DAE332489
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::INSNetSourceCreator>{ 0x0C0E4080,0x9081,0x11D2,{ 0xBE,0xEC,0x00,0x60,0x08,0x2F,0x20,0x54 } }; // 0C0E4080-9081-11D2-BEEC-0060082F2054
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::INSSBuffer>{ 0xE1CD3524,0x03D7,0x11D2,{ 0x9E,0xED,0x00,0x60,0x97,0xD2,0xD7,0xCF } }; // E1CD3524-03D7-11D2-9EED-006097D2D7CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::INSSBuffer2>{ 0x4F528693,0x1035,0x43FE,{ 0xB4,0x28,0x75,0x75,0x61,0xAD,0x3A,0x68 } }; // 4F528693-1035-43FE-B428-757561AD3A68
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::INSSBuffer3>{ 0xC87CEAAF,0x75BE,0x4BC4,{ 0x84,0xEB,0xAC,0x27,0x98,0x50,0x76,0x72 } }; // C87CEAAF-75BE-4BC4-84EB-AC2798507672
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::INSSBuffer4>{ 0xB6B8FD5A,0x32E2,0x49D4,{ 0xA9,0x10,0xC2,0x6C,0xC8,0x54,0x65,0xED } }; // B6B8FD5A-32E2-49D4-A910-C26CC85465ED
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMAddressAccess>{ 0xBB3C6389,0x1633,0x4E92,{ 0xAF,0x14,0x9F,0x31,0x73,0xBA,0x39,0xD0 } }; // BB3C6389-1633-4E92-AF14-9F3173BA39D0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMAddressAccess2>{ 0x65A83FC2,0x3E98,0x4D4D,{ 0x81,0xB5,0x2A,0x74,0x28,0x86,0xB3,0x3D } }; // 65A83FC2-3E98-4D4D-81B5-2A742886B33D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMAuthorizer>{ 0xD9B67D36,0xA9AD,0x4EB4,{ 0xBA,0xEF,0xDB,0x28,0x4E,0xF5,0x50,0x4C } }; // D9B67D36-A9AD-4EB4-BAEF-DB284EF5504C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMBackupRestoreProps>{ 0x3C8E0DA6,0x996F,0x4FF3,{ 0xA1,0xAF,0x48,0x38,0xF9,0x37,0x7E,0x2E } }; // 3C8E0DA6-996F-4FF3-A1AF-4838F9377E2E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMBandwidthSharing>{ 0xAD694AF1,0xF8D9,0x42F8,{ 0xBC,0x47,0x70,0x31,0x1B,0x0C,0x4F,0x9E } }; // AD694AF1-F8D9-42F8-BC47-70311B0C4F9E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMClientConnections>{ 0x73C66010,0xA299,0x41DF,{ 0xB1,0xF0,0xCC,0xF0,0x3B,0x09,0xC1,0xC6 } }; // 73C66010-A299-41DF-B1F0-CCF03B09C1C6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMClientConnections2>{ 0x4091571E,0x4701,0x4593,{ 0xBB,0x3D,0xD5,0xF5,0xF0,0xC7,0x42,0x46 } }; // 4091571E-4701-4593-BB3D-D5F5F0C74246
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCodecAMVideoAccelerator>{ 0xD98EE251,0x34E0,0x4A2D,{ 0x93,0x12,0x9B,0x4C,0x78,0x8D,0x9F,0xA1 } }; // D98EE251-34E0-4A2D-9312-9B4C788D9FA1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCodecInfo>{ 0xA970F41E,0x34DE,0x4A98,{ 0xB3,0xBA,0xE4,0xB3,0xCA,0x75,0x28,0xF0 } }; // A970F41E-34DE-4A98-B3BA-E4B3CA7528F0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCodecInfo2>{ 0xAA65E273,0xB686,0x4056,{ 0x91,0xEC,0xDD,0x76,0x8D,0x4D,0xF7,0x10 } }; // AA65E273-B686-4056-91EC-DD768D4DF710
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCodecInfo3>{ 0x7E51F487,0x4D93,0x4F98,{ 0x8A,0xB4,0x27,0xD0,0x56,0x5A,0xDC,0x51 } }; // 7E51F487-4D93-4F98-8AB4-27D0565ADC51
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCodecVideoAccelerator>{ 0x990641B0,0x739F,0x4E94,{ 0xA8,0x08,0x98,0x88,0xDA,0x8F,0x75,0xAF } }; // 990641B0-739F-4E94-A808-9888DA8F75AF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMCredentialCallback>{ 0x342E0EB7,0xE651,0x450C,{ 0x97,0x5B,0x2A,0xCE,0x2C,0x90,0xC4,0x8E } }; // 342E0EB7-E651-450C-975B-2ACE2C90C48E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMEditor>{ 0xFF130EBC,0xA6C3,0x42A6,{ 0xB4,0x01,0xC3,0x38,0x2C,0x3E,0x08,0xB3 } }; // FF130EBC-A6C3-42A6-B401-C3382C3E08B3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMMessageParser>{ 0xA73A0072,0x25A0,0x4C99,{ 0xB4,0xA5,0xED,0xE8,0x10,0x1A,0x6C,0x39 } }; // A73A0072-25A0-4C99-B4A5-EDE8101A6C39
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMReader>{ 0xD2827540,0x3EE7,0x432C,{ 0xB1,0x4C,0xDC,0x17,0xF0,0x85,0xD3,0xB3 } }; // D2827540-3EE7-432C-B14C-DC17F085D3B3
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMReader2>{ 0xBEFE7A75,0x9F1D,0x4075,{ 0xB9,0xD9,0xA3,0xC3,0x7B,0xDA,0x49,0xA0 } }; // BEFE7A75-9F1D-4075-B9D9-A3C37BDA49A0
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMReader3>{ 0xE08672DE,0xF1E7,0x4FF4,{ 0xA0,0xA3,0xFC,0x4B,0x08,0xE4,0xCA,0xF8 } }; // E08672DE-F1E7-4FF4-A0A3-FC4B08E4CAF8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMTranscryptionManager>{ 0xB1A887B2,0xA4F0,0x407A,{ 0xB0,0x2E,0xEF,0xBD,0x23,0xBB,0xEC,0xDF } }; // B1A887B2-A4F0-407A-B02E-EFBD23BBECDF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMTranscryptor>{ 0x69059850,0x6E6F,0x4BB2,{ 0x80,0x6F,0x71,0x86,0x3D,0xDF,0xC4,0x71 } }; // 69059850-6E6F-4BB2-806F-71863DDFC471
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMTranscryptor2>{ 0xE0DA439F,0xD331,0x496A,{ 0xBE,0xCE,0x18,0xE5,0xBA,0xC5,0xDD,0x23 } }; // E0DA439F-D331-496A-BECE-18E5BAC5DD23
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMWriter>{ 0xD6EA5DD0,0x12A0,0x43F4,{ 0x90,0xAB,0xA3,0xFD,0x45,0x1E,0x6A,0x07 } }; // D6EA5DD0-12A0-43F4-90AB-A3FD451E6A07
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMWriter2>{ 0x38EE7A94,0x40E2,0x4E10,{ 0xAA,0x3F,0x33,0xFD,0x32,0x10,0xED,0x5B } }; // 38EE7A94-40E2-4E10-AA3F-33FD3210ED5B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDRMWriter3>{ 0xA7184082,0xA4AA,0x4DDE,{ 0xAC,0x9C,0xE7,0x5D,0xBD,0x11,0x17,0xCE } }; // A7184082-A4AA-4DDE-AC9C-E75DBD1117CE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMDeviceRegistration>{ 0xF6211F03,0x8D21,0x4E94,{ 0x93,0xE6,0x85,0x10,0x80,0x5F,0x2D,0x99 } }; // F6211F03-8D21-4E94-93E6-8510805F2D99
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMGetSecureChannel>{ 0x94BC0598,0xC3D2,0x11D3,{ 0xBE,0xDF,0x00,0xC0,0x4F,0x61,0x29,0x86 } }; // 94BC0598-C3D2-11D3-BEDF-00C04F612986
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMHeaderInfo>{ 0x96406BDA,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BDA-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMHeaderInfo2>{ 0x15CF9781,0x454E,0x482E,{ 0xB3,0x93,0x85,0xFA,0xE4,0x87,0xA8,0x10 } }; // 15CF9781-454E-482E-B393-85FAE487A810
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMHeaderInfo3>{ 0x15CC68E3,0x27CC,0x4ECD,{ 0xB2,0x22,0x3F,0x5D,0x02,0xD8,0x0B,0xD5 } }; // 15CC68E3-27CC-4ECD-B222-3F5D02D80BD5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMIStreamProps>{ 0x6816DAD3,0x2B4B,0x4C8E,{ 0x81,0x49,0x87,0x4C,0x34,0x83,0xA7,0x53 } }; // 6816DAD3-2B4B-4C8E-8149-874C3483A753
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMImageInfo>{ 0x9F0AA3B6,0x7267,0x4D89,{ 0x88,0xF2,0xBA,0x91,0x5A,0xA5,0xC4,0xC6 } }; // 9F0AA3B6-7267-4D89-88F2-BA915AA5C4C6
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMIndexer>{ 0x6D7CDC71,0x9888,0x11D3,{ 0x8E,0xDC,0x00,0xC0,0x4F,0x61,0x09,0xCF } }; // 6D7CDC71-9888-11D3-8EDC-00C04F6109CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMIndexer2>{ 0xB70F1E42,0x6255,0x4DF0,{ 0xA6,0xB9,0x02,0xB2,0x12,0xD9,0xE2,0xBB } }; // B70F1E42-6255-4DF0-A6B9-02B212D9E2BB
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMInputMediaProps>{ 0x96406BD5,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD5-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMLanguageList>{ 0xDF683F00,0x2D49,0x4D8E,{ 0x92,0xB7,0xFB,0x19,0xF6,0xA0,0xDC,0x57 } }; // DF683F00-2D49-4D8E-92B7-FB19F6A0DC57
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMLicenseBackup>{ 0x05E5AC9F,0x3FB6,0x4508,{ 0xBB,0x43,0xA4,0x06,0x7B,0xA1,0xEB,0xE8 } }; // 05E5AC9F-3FB6-4508-BB43-A4067BA1EBE8
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMLicenseRestore>{ 0xC70B6334,0xA22E,0x4EFB,{ 0xA2,0x45,0x15,0xE6,0x5A,0x00,0x4A,0x13 } }; // C70B6334-A22E-4EFB-A245-15E65A004A13
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMLicenseRevocationAgent>{ 0x6967F2C9,0x4E26,0x4B57,{ 0x88,0x94,0x79,0x98,0x80,0xF7,0xAC,0x7B } }; // 6967F2C9-4E26-4B57-8894-799880F7AC7B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMMediaProps>{ 0x96406BCE,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BCE-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMMetadataEditor>{ 0x96406BD9,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD9-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMMetadataEditor2>{ 0x203CFFE3,0x2E18,0x4FDF,{ 0xB5,0x9D,0x6E,0x71,0x53,0x05,0x34,0xCF } }; // 203CFFE3-2E18-4FDF-B59D-6E71530534CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMMutualExclusion>{ 0x96406BDE,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BDE-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMMutualExclusion2>{ 0x0302B57D,0x89D1,0x4BA2,{ 0x85,0xC9,0x16,0x6F,0x2C,0x53,0xEB,0x91 } }; // 0302B57D-89D1-4BA2-85C9-166F2C53EB91
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMOutputMediaProps>{ 0x96406BD7,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD7-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMPacketSize>{ 0xCDFB97AB,0x188F,0x40B3,{ 0xB6,0x43,0x5B,0x79,0x03,0x97,0x5C,0x59 } }; // CDFB97AB-188F-40B3-B643-5B7903975C59
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMPacketSize2>{ 0x8BFC2B9E,0xB646,0x4233,{ 0xA8,0x77,0x1C,0x6A,0x07,0x96,0x69,0xDC } }; // 8BFC2B9E-B646-4233-A877-1C6A079669DC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMPlayerHook>{ 0xE5B7CA9A,0x0F1C,0x4F66,{ 0x90,0x02,0x74,0xEC,0x50,0xD8,0xB3,0x04 } }; // E5B7CA9A-0F1C-4F66-9002-74EC50D8B304
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMPlayerTimestampHook>{ 0x28580DDA,0xD98E,0x48D0,{ 0xB7,0xAE,0x69,0xE4,0x73,0xA0,0x28,0x25 } }; // 28580DDA-D98E-48D0-B7AE-69E473A02825
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfile>{ 0x96406BDB,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BDB-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfile2>{ 0x07E72D33,0xD94E,0x4BE7,{ 0x88,0x43,0x60,0xAE,0x5F,0xF7,0xE5,0xF5 } }; // 07E72D33-D94E-4BE7-8843-60AE5FF7E5F5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfile3>{ 0x00EF96CC,0xA461,0x4546,{ 0x8B,0xCD,0xC9,0xA2,0x8F,0x0E,0x06,0xF5 } }; // 00EF96CC-A461-4546-8BCD-C9A28F0E06F5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfileManager>{ 0xD16679F2,0x6CA0,0x472D,{ 0x8D,0x31,0x2F,0x5D,0x55,0xAE,0xE1,0x55 } }; // D16679F2-6CA0-472D-8D31-2F5D55AEE155
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfileManager2>{ 0x7A924E51,0x73C1,0x494D,{ 0x80,0x19,0x23,0xD3,0x7E,0xD9,0xB8,0x9A } }; // 7A924E51-73C1-494D-8019-23D37ED9B89A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProfileManagerLanguage>{ 0xBA4DCC78,0x7EE0,0x4AB8,{ 0xB2,0x7A,0xDB,0xCE,0x8B,0xC5,0x14,0x54 } }; // BA4DCC78-7EE0-4AB8-B27A-DBCE8BC51454
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMPropertyVault>{ 0x72995A79,0x5090,0x42A4,{ 0x9C,0x8C,0xD9,0xD0,0xB6,0xD3,0x4B,0xE5 } }; // 72995A79-5090-42A4-9C8C-D9D0B6D34BE5
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMProximityDetection>{ 0x6A9FD8EE,0xB651,0x4BF0,{ 0xB8,0x49,0x7D,0x4E,0xCE,0x79,0xA2,0xB1 } }; // 6A9FD8EE-B651-4BF0-B849-7D4ECE79A2B1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReader>{ 0x96406BD6,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD6-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAccelerator>{ 0xBDDC4D08,0x944D,0x4D52,{ 0xA6,0x12,0x46,0xC3,0xFD,0xA0,0x7D,0xD4 } }; // BDDC4D08-944D-4D52-A612-46C3FDA07DD4
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced>{ 0x96406BEA,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BEA-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced2>{ 0xAE14A945,0xB90C,0x4D0D,{ 0x91,0x27,0x80,0xD6,0x65,0xF7,0xD7,0x3E } }; // AE14A945-B90C-4D0D-9127-80D665F7D73E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced3>{ 0x5DC0674B,0xF04B,0x4A4E,{ 0x9F,0x2A,0xB1,0xAF,0xDE,0x2C,0x81,0x00 } }; // 5DC0674B-F04B-4A4E-9F2A-B1AFDE2C8100
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced4>{ 0x945A76A2,0x12AE,0x4D48,{ 0xBD,0x3C,0xCD,0x1D,0x90,0x39,0x9B,0x85 } }; // 945A76A2-12AE-4D48-BD3C-CD1D90399B85
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced5>{ 0x24C44DB0,0x55D1,0x49AE,{ 0xA5,0xCC,0xF1,0x38,0x15,0xE3,0x63,0x63 } }; // 24C44DB0-55D1-49AE-A5CC-F13815E36363
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAdvanced6>{ 0x18A2E7F8,0x428F,0x4ACD,{ 0x8A,0x00,0xE6,0x46,0x39,0xBC,0x93,0xDE } }; // 18A2E7F8-428F-4ACD-8A00-E64639BC93DE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderAllocatorEx>{ 0x9F762FA7,0xA22E,0x428D,{ 0x93,0xC9,0xAC,0x82,0xF3,0xAA,0xFE,0x5A } }; // 9F762FA7-A22E-428D-93C9-AC82F3AAFE5A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderCallback>{ 0x96406BD8,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD8-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderCallbackAdvanced>{ 0x96406BEB,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BEB-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderNetworkConfig>{ 0x96406BEC,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BEC-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderNetworkConfig2>{ 0xD979A853,0x042B,0x4050,{ 0x83,0x87,0xC9,0x39,0xDB,0x22,0x01,0x3F } }; // D979A853-042B-4050-8387-C939DB22013F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderPlaylistBurn>{ 0xF28C0300,0x9BAA,0x4477,{ 0xA8,0x46,0x17,0x44,0xD9,0xCB,0xF5,0x33 } }; // F28C0300-9BAA-4477-A846-1744D9CBF533
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderStreamClock>{ 0x96406BED,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BED-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderTimecode>{ 0xF369E2F0,0xE081,0x4FE6,{ 0x84,0x50,0xB8,0x10,0xB2,0xF4,0x10,0xD1 } }; // F369E2F0-E081-4FE6-8450-B810B2F410D1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMReaderTypeNegotiation>{ 0xFDBE5592,0x81A1,0x41EA,{ 0x93,0xBD,0x73,0x5C,0xAD,0x1A,0xDC,0x05 } }; // FDBE5592-81A1-41EA-93BD-735CAD1ADC05
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMRegisterCallback>{ 0xCF4B1F99,0x4DE2,0x4E49,{ 0xA3,0x63,0x25,0x27,0x40,0xD9,0x9B,0xC1 } }; // CF4B1F99-4DE2-4E49-A363-252740D99BC1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMRegisteredDevice>{ 0xA4503BEC,0x5508,0x4148,{ 0x97,0xAC,0xBF,0xA7,0x57,0x60,0xA7,0x0D } }; // A4503BEC-5508-4148-97AC-BFA75760A70D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSBufferAllocator>{ 0x61103CA4,0x2033,0x11D2,{ 0x9E,0xF1,0x00,0x60,0x97,0xD2,0xD7,0xCF } }; // 61103CA4-2033-11D2-9EF1-006097D2D7CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSInternalAdminNetSource>{ 0x8BB23E5F,0xD127,0x4AFB,{ 0x8D,0x02,0xAE,0x5B,0x66,0xD5,0x4C,0x78 } }; // 8BB23E5F-D127-4AFB-8D02-AE5B66D54C78
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSInternalAdminNetSource2>{ 0xE74D58C3,0xCF77,0x4B51,{ 0xAF,0x17,0x74,0x46,0x87,0xC4,0x3E,0xAE } }; // E74D58C3-CF77-4B51-AF17-744687C43EAE
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSInternalAdminNetSource3>{ 0x6B63D08E,0x4590,0x44AF,{ 0x9E,0xB3,0x57,0xFF,0x1E,0x73,0xBF,0x80 } }; // 6B63D08E-4590-44AF-9EB3-57FF1E73BF80
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSecureChannel>{ 0x2720598A,0xD0F2,0x4189,{ 0xBD,0x10,0x91,0xC4,0x6E,0xF0,0x93,0x6F } }; // 2720598A-D0F2-4189-BD10-91C46EF0936F
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStatusCallback>{ 0x6D7CDC70,0x9888,0x11D3,{ 0x8E,0xDC,0x00,0xC0,0x4F,0x61,0x09,0xCF } }; // 6D7CDC70-9888-11D3-8EDC-00C04F6109CF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStreamConfig>{ 0x96406BDC,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BDC-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStreamConfig2>{ 0x7688D8CB,0xFC0D,0x43BD,{ 0x94,0x59,0x5A,0x8D,0xEC,0x20,0x0C,0xFA } }; // 7688D8CB-FC0D-43BD-9459-5A8DEC200CFA
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStreamConfig3>{ 0xCB164104,0x3AA9,0x45A7,{ 0x9A,0xC9,0x4D,0xAE,0xE1,0x31,0xD6,0xE1 } }; // CB164104-3AA9-45A7-9AC9-4DAEE131D6E1
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStreamList>{ 0x96406BDD,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BDD-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMStreamPrioritization>{ 0x8C1C6090,0xF9A8,0x4748,{ 0x8E,0xC3,0xDD,0x11,0x08,0xBA,0x1E,0x77 } }; // 8C1C6090-F9A8-4748-8EC3-DD1108BA1E77
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSyncReader>{ 0x9397F121,0x7705,0x4DC9,{ 0xB0,0x49,0x98,0xB6,0x98,0x18,0x84,0x14 } }; // 9397F121-7705-4DC9-B049-98B698188414
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMSyncReader2>{ 0xFAED3D21,0x1B6B,0x4AF7,{ 0x8C,0xB6,0x3E,0x18,0x9B,0xBC,0x18,0x7B } }; // FAED3D21-1B6B-4AF7-8CB6-3E189BBC187B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMVideoMediaProps>{ 0x96406BCF,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BCF-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWatermarkInfo>{ 0x6F497062,0xF2E2,0x4624,{ 0x8E,0xA7,0x9D,0xD4,0x0D,0x81,0xFC,0x8D } }; // 6F497062-F2E2-4624-8EA7-9DD40D81FC8D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriter>{ 0x96406BD4,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BD4-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterAdvanced>{ 0x96406BE3,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BE3-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterAdvanced2>{ 0x962DC1EC,0xC046,0x4DB8,{ 0x9C,0xC7,0x26,0xCE,0xAE,0x50,0x08,0x17 } }; // 962DC1EC-C046-4DB8-9CC7-26CEAE500817
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterAdvanced3>{ 0x2CD6492D,0x7C37,0x4E76,{ 0x9D,0x3B,0x59,0x26,0x11,0x83,0xA2,0x2E } }; // 2CD6492D-7C37-4E76-9D3B-59261183A22E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterFileSink>{ 0x96406BE5,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BE5-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterFileSink2>{ 0x14282BA7,0x4AEF,0x4205,{ 0x8C,0xE5,0xC2,0x29,0x03,0x5A,0x05,0xBC } }; // 14282BA7-4AEF-4205-8CE5-C229035A05BC
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterFileSink3>{ 0x3FEA4FEB,0x2945,0x47A7,{ 0xA1,0xDD,0xC5,0x3A,0x8F,0xC4,0xC4,0x5C } }; // 3FEA4FEB-2945-47A7-A1DD-C53A8FC4C45C
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterNetworkSink>{ 0x96406BE7,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BE7-2B2B-11D3-B36B-00C04F6108FF
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterPostView>{ 0x81E20CE4,0x75EF,0x491A,{ 0x80,0x04,0xFC,0x53,0xC4,0x5B,0xDC,0x3E } }; // 81E20CE4-75EF-491A-8004-FC53C45BDC3E
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterPostViewCallback>{ 0xD9D6549D,0xA193,0x4F24,{ 0xB3,0x08,0x03,0x12,0x3D,0x9B,0x7F,0x8D } }; // D9D6549D-A193-4F24-B308-03123D9B7F8D
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterPreprocess>{ 0xFC54A285,0x38C4,0x45B5,{ 0xAA,0x23,0x85,0xB9,0xF7,0xCB,0x42,0x4B } }; // FC54A285-38C4-45B5-AA23-85B9F7CB424B
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterPushSink>{ 0xDC10E6A5,0x072C,0x467D,{ 0xBF,0x57,0x63,0x30,0xA9,0xDD,0xE1,0x2A } }; // DC10E6A5-072C-467D-BF57-6330A9DDE12A
    template <> inline constexpr guid guid_v<Windows::Win32::WindowsMediaFormat::IWMWriterSink>{ 0x96406BE4,0x2B2B,0x11D3,{ 0xB3,0x6B,0x00,0xC0,0x4F,0x61,0x08,0xFF } }; // 96406BE4-2B2B-11D3-B36B-00C04F6108FF
#pragma endregion guids

}
#endif
