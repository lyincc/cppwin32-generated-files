// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Etw_0_H
#define WIN32_Windows_Win32_Etw_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Etw
{
#pragma region enums
    enum class DECODING_SOURCE : int32_t
    {
        DecodingSourceXMLFile = 0,
        DecodingSourceWbem = 1,
        DecodingSourceWPP = 2,
        DecodingSourceTlg = 3,
        DecodingSourceMax = 4,
    };
    enum class ETW_COMPRESSION_RESUMPTION_MODE : int32_t
    {
        EtwCompressionModeRestart = 0,
        EtwCompressionModeNoDisable = 1,
        EtwCompressionModeNoRestart = 2,
    };
    enum class ETW_PROCESS_HANDLE_INFO_TYPE : int32_t
    {
        EtwQueryPartitionInformation = 1,
        EtwQueryPartitionInformationV2 = 2,
        EtwQueryLastDroppedTimes = 3,
        EtwQueryProcessHandleInfoMax = 4,
    };
    enum class ETW_PROVIDER_TRAIT_TYPE : int32_t
    {
        EtwProviderTraitTypeGroup = 1,
        EtwProviderTraitDecodeGuid = 2,
        EtwProviderTraitTypeMax = 3,
    };
    enum class EVENTSECURITYOPERATION : int32_t
    {
        EventSecuritySetDACL = 0,
        EventSecuritySetSACL = 1,
        EventSecurityAddDACL = 2,
        EventSecurityAddSACL = 3,
        EventSecurityMax = 4,
    };
    enum class EVENT_FIELD_TYPE : int32_t
    {
        EventKeywordInformation = 0,
        EventLevelInformation = 1,
        EventChannelInformation = 2,
        EventTaskInformation = 3,
        EventOpcodeInformation = 4,
        EventInformationMax = 5,
    };
    enum class EVENT_INFO_CLASS : int32_t
    {
        EventProviderBinaryTrackInfo = 0,
        EventProviderSetReserved1 = 1,
        EventProviderSetTraits = 2,
        EventProviderUseDescriptorType = 3,
        MaxEventInfo = 4,
    };
    enum class MAP_FLAGS : int32_t
    {
        EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 1,
        EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 2,
        EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 4,
        EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 8,
        EVENTMAP_INFO_FLAG_WBEM_BITMAP = 16,
        EVENTMAP_INFO_FLAG_WBEM_FLAG = 32,
        EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 64,
    };
    enum class MAP_VALUETYPE : int32_t
    {
        EVENTMAP_ENTRY_VALUETYPE_ULONG = 0,
        EVENTMAP_ENTRY_VALUETYPE_STRING = 1,
    };
    enum class PAYLOAD_OPERATOR : int32_t
    {
        PAYLOADFIELD_EQ = 0,
        PAYLOADFIELD_NE = 1,
        PAYLOADFIELD_LE = 2,
        PAYLOADFIELD_GT = 3,
        PAYLOADFIELD_LT = 4,
        PAYLOADFIELD_GE = 5,
        PAYLOADFIELD_BETWEEN = 6,
        PAYLOADFIELD_NOTBETWEEN = 7,
        PAYLOADFIELD_MODULO = 8,
        PAYLOADFIELD_CONTAINS = 20,
        PAYLOADFIELD_DOESNTCONTAIN = 21,
        PAYLOADFIELD_IS = 30,
        PAYLOADFIELD_ISNOT = 31,
        PAYLOADFIELD_INVALID = 32,
    };
    enum class PROPERTY_FLAGS : int32_t
    {
        PropertyStruct = 1,
        PropertyParamLength = 2,
        PropertyParamCount = 4,
        PropertyWBEMXmlFragment = 8,
        PropertyParamFixedLength = 16,
        PropertyParamFixedCount = 32,
        PropertyHasTags = 64,
        PropertyHasCustomSchema = 128,
    };
    enum class TDH_CONTEXT_TYPE : int32_t
    {
        TDH_CONTEXT_WPP_TMFFILE = 0,
        TDH_CONTEXT_WPP_TMFSEARCHPATH = 1,
        TDH_CONTEXT_WPP_GMT = 2,
        TDH_CONTEXT_POINTERSIZE = 3,
        TDH_CONTEXT_PDB_PATH = 4,
        TDH_CONTEXT_MAXIMUM = 5,
    };
    enum class TEMPLATE_FLAGS : int32_t
    {
        TEMPLATE_EVENT_DATA = 1,
        TEMPLATE_USER_DATA = 2,
        TEMPLATE_CONTROL_GUID = 4,
    };
    enum class TRACE_QUERY_INFO_CLASS : int32_t
    {
        TraceGuidQueryList = 0,
        TraceGuidQueryInfo = 1,
        TraceGuidQueryProcess = 2,
        TraceStackTracingInfo = 3,
        TraceSystemTraceEnableFlagsInfo = 4,
        TraceSampledProfileIntervalInfo = 5,
        TraceProfileSourceConfigInfo = 6,
        TraceProfileSourceListInfo = 7,
        TracePmcEventListInfo = 8,
        TracePmcCounterListInfo = 9,
        TraceSetDisallowList = 10,
        TraceVersionInfo = 11,
        TraceGroupQueryList = 12,
        TraceGroupQueryInfo = 13,
        TraceDisallowListQuery = 14,
        TraceInfoReserved15 = 15,
        TracePeriodicCaptureStateListInfo = 16,
        TracePeriodicCaptureStateInfo = 17,
        TraceProviderBinaryTracking = 18,
        TraceMaxLoggersQuery = 19,
        TraceLbrConfigurationInfo = 20,
        TraceLbrEventListInfo = 21,
        TraceMaxPmcCounterQuery = 22,
        MaxTraceSetInfoClass = 23,
    };
    enum class WMIDPREQUESTCODE : int32_t
    {
        WMI_GET_ALL_DATA = 0,
        WMI_GET_SINGLE_INSTANCE = 1,
        WMI_SET_SINGLE_INSTANCE = 2,
        WMI_SET_SINGLE_ITEM = 3,
        WMI_ENABLE_EVENTS = 4,
        WMI_DISABLE_EVENTS = 5,
        WMI_ENABLE_COLLECTION = 6,
        WMI_DISABLE_COLLECTION = 7,
        WMI_REGINFO = 8,
        WMI_EXECUTE_METHOD = 9,
        WMI_CAPTURE_STATE = 10,
    };
    enum class _TDH_IN_TYPE : int32_t
    {
        TDH_INTYPE_NULL = 0,
        TDH_INTYPE_UNICODESTRING = 1,
        TDH_INTYPE_ANSISTRING = 2,
        TDH_INTYPE_INT8 = 3,
        TDH_INTYPE_UINT8 = 4,
        TDH_INTYPE_INT16 = 5,
        TDH_INTYPE_UINT16 = 6,
        TDH_INTYPE_INT32 = 7,
        TDH_INTYPE_UINT32 = 8,
        TDH_INTYPE_INT64 = 9,
        TDH_INTYPE_UINT64 = 10,
        TDH_INTYPE_FLOAT = 11,
        TDH_INTYPE_DOUBLE = 12,
        TDH_INTYPE_BOOLEAN = 13,
        TDH_INTYPE_BINARY = 14,
        TDH_INTYPE_GUID = 15,
        TDH_INTYPE_POINTER = 16,
        TDH_INTYPE_FILETIME = 17,
        TDH_INTYPE_SYSTEMTIME = 18,
        TDH_INTYPE_SID = 19,
        TDH_INTYPE_HEXINT32 = 20,
        TDH_INTYPE_HEXINT64 = 21,
        TDH_INTYPE_MANIFEST_COUNTEDSTRING = 22,
        TDH_INTYPE_MANIFEST_COUNTEDANSISTRING = 23,
        TDH_INTYPE_RESERVED24 = 24,
        TDH_INTYPE_MANIFEST_COUNTEDBINARY = 25,
        TDH_INTYPE_COUNTEDSTRING = 300,
        TDH_INTYPE_COUNTEDANSISTRING = 301,
        TDH_INTYPE_REVERSEDCOUNTEDSTRING = 302,
        TDH_INTYPE_REVERSEDCOUNTEDANSISTRING = 303,
        TDH_INTYPE_NONNULLTERMINATEDSTRING = 304,
        TDH_INTYPE_NONNULLTERMINATEDANSISTRING = 305,
        TDH_INTYPE_UNICODECHAR = 306,
        TDH_INTYPE_ANSICHAR = 307,
        TDH_INTYPE_SIZET = 308,
        TDH_INTYPE_HEXDUMP = 309,
        TDH_INTYPE_WBEMSID = 310,
    };
    enum class _TDH_OUT_TYPE : int32_t
    {
        TDH_OUTTYPE_NULL = 0,
        TDH_OUTTYPE_STRING = 1,
        TDH_OUTTYPE_DATETIME = 2,
        TDH_OUTTYPE_BYTE = 3,
        TDH_OUTTYPE_UNSIGNEDBYTE = 4,
        TDH_OUTTYPE_SHORT = 5,
        TDH_OUTTYPE_UNSIGNEDSHORT = 6,
        TDH_OUTTYPE_INT = 7,
        TDH_OUTTYPE_UNSIGNEDINT = 8,
        TDH_OUTTYPE_LONG = 9,
        TDH_OUTTYPE_UNSIGNEDLONG = 10,
        TDH_OUTTYPE_FLOAT = 11,
        TDH_OUTTYPE_DOUBLE = 12,
        TDH_OUTTYPE_BOOLEAN = 13,
        TDH_OUTTYPE_GUID = 14,
        TDH_OUTTYPE_HEXBINARY = 15,
        TDH_OUTTYPE_HEXINT8 = 16,
        TDH_OUTTYPE_HEXINT16 = 17,
        TDH_OUTTYPE_HEXINT32 = 18,
        TDH_OUTTYPE_HEXINT64 = 19,
        TDH_OUTTYPE_PID = 20,
        TDH_OUTTYPE_TID = 21,
        TDH_OUTTYPE_PORT = 22,
        TDH_OUTTYPE_IPV4 = 23,
        TDH_OUTTYPE_IPV6 = 24,
        TDH_OUTTYPE_SOCKETADDRESS = 25,
        TDH_OUTTYPE_CIMDATETIME = 26,
        TDH_OUTTYPE_ETWTIME = 27,
        TDH_OUTTYPE_XML = 28,
        TDH_OUTTYPE_ERRORCODE = 29,
        TDH_OUTTYPE_WIN32ERROR = 30,
        TDH_OUTTYPE_NTSTATUS = 31,
        TDH_OUTTYPE_HRESULT = 32,
        TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME = 33,
        TDH_OUTTYPE_JSON = 34,
        TDH_OUTTYPE_UTF8 = 35,
        TDH_OUTTYPE_PKCS7_WITH_TYPE_INFO = 36,
        TDH_OUTTYPE_CODE_POINTER = 37,
        TDH_OUTTYPE_DATETIME_UTC = 38,
        TDH_OUTTYPE_REDUCEDSTRING = 300,
        TDH_OUTTYPE_NOPRINT = 301,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CLASSIC_EVENT_ID;
    struct ENABLE_TRACE_PARAMETERS;
    struct ENABLE_TRACE_PARAMETERS_V1;
    struct ETW_BUFFER_CONTEXT;
    struct ETW_TRACE_PARTITION_INFORMATION;
    struct ETW_TRACE_PARTITION_INFORMATION_V2;
    struct EVENT_DATA_DESCRIPTOR;
    struct EVENT_DESCRIPTOR;
    struct EVENT_EXTENDED_ITEM_EVENT_KEY;
    struct EVENT_EXTENDED_ITEM_INSTANCE;
    struct EVENT_EXTENDED_ITEM_PEBS_INDEX;
    struct EVENT_EXTENDED_ITEM_PMC_COUNTERS;
    struct EVENT_EXTENDED_ITEM_PROCESS_START_KEY;
    struct EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID;
    struct EVENT_EXTENDED_ITEM_STACK_TRACE32;
    struct EVENT_EXTENDED_ITEM_STACK_TRACE64;
    struct EVENT_EXTENDED_ITEM_TS_ID;
    struct EVENT_FILTER_DESCRIPTOR;
    struct EVENT_FILTER_EVENT_ID;
    struct EVENT_FILTER_EVENT_NAME;
    struct EVENT_FILTER_HEADER;
    struct EVENT_FILTER_LEVEL_KW;
    struct EVENT_HEADER;
    struct EVENT_HEADER_EXTENDED_DATA_ITEM;
    struct EVENT_INSTANCE_HEADER;
    struct EVENT_INSTANCE_INFO;
    struct EVENT_MAP_ENTRY;
    struct EVENT_MAP_INFO;
    struct EVENT_PROPERTY_INFO;
    struct EVENT_RECORD;
    struct EVENT_TRACE;
    struct EVENT_TRACE_HEADER;
    struct EVENT_TRACE_LOGFILEA;
    struct EVENT_TRACE_LOGFILEW;
    struct EVENT_TRACE_PROPERTIES;
    struct EVENT_TRACE_PROPERTIES_V2;
    struct MOF_FIELD;
    struct OFFSETINSTANCEDATAANDLENGTH;
    struct PAYLOAD_FILTER_PREDICATE;
    struct PROFILE_SOURCE_INFO;
    struct PROPERTY_DATA_DESCRIPTOR;
    struct PROVIDER_ENUMERATION_INFO;
    struct PROVIDER_EVENT_INFO;
    struct PROVIDER_FIELD_INFO;
    struct PROVIDER_FIELD_INFOARRAY;
    struct PROVIDER_FILTER_INFO;
    struct TDH_CONTEXT;
    struct TDH_HANDLE;
    struct TRACE_ENABLE_INFO;
    struct TRACE_EVENT_INFO;
    struct TRACE_GUID_INFO;
    struct TRACE_GUID_PROPERTIES;
    struct TRACE_GUID_REGISTRATION;
    struct TRACE_LOGFILE_HEADER;
    struct TRACE_LOGFILE_HEADER32;
    struct TRACE_LOGFILE_HEADER64;
    struct TRACE_PERIODIC_CAPTURE_STATE_INFO;
    struct TRACE_PROFILE_INTERVAL;
    struct TRACE_PROVIDER_INFO;
    struct TRACE_PROVIDER_INSTANCE_INFO;
    struct TRACE_VERSION_INFO;
    struct WMIREGGUIDW;
    struct WMIREGINFOW;
    struct WNODE_ALL_DATA;
    struct WNODE_EVENT_ITEM;
    struct WNODE_EVENT_REFERENCE;
    struct WNODE_HEADER;
    struct WNODE_METHOD_ITEM;
    struct WNODE_SINGLE_INSTANCE;
    struct WNODE_SINGLE_ITEM;
    struct WNODE_TOO_SMALL;
    struct CTraceRelogger;
    struct ITraceEvent;
    struct ITraceEventCallback;
    struct ITraceRelogger;
#pragma endregion forward_declarations

#pragma region delegates
    using PEVENT_TRACE_BUFFER_CALLBACKW = uint32_t __stdcall(Windows::Win32::Etw::EVENT_TRACE_LOGFILEW*);
    using PEVENT_TRACE_BUFFER_CALLBACKA = uint32_t __stdcall(Windows::Win32::Etw::EVENT_TRACE_LOGFILEA*);
    using PEVENT_CALLBACK = void __stdcall(Windows::Win32::Etw::EVENT_TRACE*);
    using PEVENT_RECORD_CALLBACK = void __stdcall(Windows::Win32::Etw::EVENT_RECORD*);
    using WMIDPREQUEST = uint32_t __stdcall(Windows::Win32::Etw::WMIDPREQUESTCODE, void*, uint32_t*, void*);
    using PENABLECALLBACK = void __stdcall(::win32::guid*, uint32_t, uint8_t, uint64_t, uint64_t, Windows::Win32::Etw::EVENT_FILTER_DESCRIPTOR*, void*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::Etw::CTraceRelogger>{ 0x7B40792D,0x05FF,0x44C4,{ 0x90,0x58,0xF4,0x40,0xC7,0x1F,0x17,0xD4 } }; // 7B40792D-05FF-44C4-9058-F440C71F17D4
    template <> inline constexpr guid guid_v<Windows::Win32::Etw::ITraceEvent>{ 0x8CC97F40,0x9028,0x4FF3,{ 0x9B,0x62,0x7D,0x1F,0x79,0xCA,0x7B,0xCB } }; // 8CC97F40-9028-4FF3-9B62-7D1F79CA7BCB
    template <> inline constexpr guid guid_v<Windows::Win32::Etw::ITraceEventCallback>{ 0x3ED25501,0x593F,0x43E9,{ 0x8F,0x38,0x3A,0xB4,0x6F,0x5A,0x4A,0x52 } }; // 3ED25501-593F-43E9-8F38-3AB46F5A4A52
    template <> inline constexpr guid guid_v<Windows::Win32::Etw::ITraceRelogger>{ 0xF754AD43,0x3BCC,0x4286,{ 0x80,0x09,0x9C,0x5D,0xA2,0x14,0xE8,0x4E } }; // F754AD43-3BCC-4286-8009-9C5DA214E84E
#pragma endregion guids

}
#endif
