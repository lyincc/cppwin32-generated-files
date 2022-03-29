// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_IpHelper_0_H
#define WIN32_Windows_Win32_IpHelper_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Mib
{
    struct MIB_IPFORWARD_ROW2;
    struct MIB_IPINTERFACE_ROW;
    enum class MIB_NOTIFICATION_TYPE : int32_t;
    struct MIB_UNICASTIPADDRESS_ROW;
    struct MIB_UNICASTIPADDRESS_TABLE;
}
WIN32_EXPORT namespace win32::Windows::Win32::IpHelper
{
#pragma region enums
    enum class IF_ACCESS_TYPE : int32_t
    {
        IF_ACCESS_LOOPBACK = 1,
        IF_ACCESS_BROADCAST = 2,
        IF_ACCESS_POINT_TO_POINT = 3,
        IF_ACCESS_POINTTOPOINT = 3,
        IF_ACCESS_POINT_TO_MULTI_POINT = 4,
        IF_ACCESS_POINTTOMULTIPOINT = 4,
    };
    enum class IF_ADMINISTRATIVE_STATE : int32_t
    {
        IF_ADMINISTRATIVE_DISABLED = 0,
        IF_ADMINISTRATIVE_ENABLED = 1,
        IF_ADMINISTRATIVE_DEMANDDIAL = 2,
    };
    enum class IF_OPER_STATUS : int32_t
    {
        IfOperStatusUp = 1,
        IfOperStatusDown = 2,
        IfOperStatusTesting = 3,
        IfOperStatusUnknown = 4,
        IfOperStatusDormant = 5,
        IfOperStatusNotPresent = 6,
        IfOperStatusLowerLayerDown = 7,
    };
    enum class INTERNAL_IF_OPER_STATUS : int32_t
    {
        IF_OPER_STATUS_NON_OPERATIONAL = 0,
        IF_OPER_STATUS_UNREACHABLE = 1,
        IF_OPER_STATUS_DISCONNECTED = 2,
        IF_OPER_STATUS_CONNECTING = 3,
        IF_OPER_STATUS_CONNECTED = 4,
        IF_OPER_STATUS_OPERATIONAL = 5,
    };
    enum class MIB_IF_ENTRY_LEVEL : int32_t
    {
        MibIfEntryNormal = 0,
        MibIfEntryNormalWithoutStatistics = 2,
    };
    enum class MIB_IPFORWARD_TYPE : int32_t
    {
        MIB_IPROUTE_TYPE_OTHER = 1,
        MIB_IPROUTE_TYPE_INVALID = 2,
        MIB_IPROUTE_TYPE_DIRECT = 3,
        MIB_IPROUTE_TYPE_INDIRECT = 4,
    };
    enum class MIB_IPNET_TYPE : int32_t
    {
        MIB_IPNET_TYPE_OTHER = 1,
        MIB_IPNET_TYPE_INVALID = 2,
        MIB_IPNET_TYPE_DYNAMIC = 3,
        MIB_IPNET_TYPE_STATIC = 4,
    };
    enum class MIB_IPSTATS_FORWARDING : int32_t
    {
        MIB_IP_FORWARDING = 1,
        MIB_IP_NOT_FORWARDING = 2,
    };
    enum class MIB_TCP_STATE : int32_t
    {
        MIB_TCP_STATE_CLOSED = 1,
        MIB_TCP_STATE_LISTEN = 2,
        MIB_TCP_STATE_SYN_SENT = 3,
        MIB_TCP_STATE_SYN_RCVD = 4,
        MIB_TCP_STATE_ESTAB = 5,
        MIB_TCP_STATE_FIN_WAIT1 = 6,
        MIB_TCP_STATE_FIN_WAIT2 = 7,
        MIB_TCP_STATE_CLOSE_WAIT = 8,
        MIB_TCP_STATE_CLOSING = 9,
        MIB_TCP_STATE_LAST_ACK = 10,
        MIB_TCP_STATE_TIME_WAIT = 11,
        MIB_TCP_STATE_DELETE_TCB = 12,
        MIB_TCP_STATE_RESERVED = 100,
    };
    enum class NET_ADDRESS_FORMAT : int32_t
    {
        NET_ADDRESS_FORMAT_UNSPECIFIED = 0,
        NET_ADDRESS_DNS_NAME = 1,
        NET_ADDRESS_IPV4 = 2,
        NET_ADDRESS_IPV6 = 3,
    };
    enum class NET_IF_RCV_ADDRESS_TYPE : int32_t
    {
        NET_IF_RCV_ADDRESS_TYPE_OTHER = 1,
        NET_IF_RCV_ADDRESS_TYPE_VOLATILE = 2,
        NET_IF_RCV_ADDRESS_TYPE_NON_VOLATILE = 3,
    };
    enum class NL_DAD_STATE : int32_t
    {
        NldsInvalid = 0,
        NldsTentative = 1,
        NldsDuplicate = 2,
        NldsDeprecated = 3,
        NldsPreferred = 4,
        IpDadStateInvalid = 0,
        IpDadStateTentative = 1,
        IpDadStateDuplicate = 2,
        IpDadStateDeprecated = 3,
        IpDadStatePreferred = 4,
    };
    enum class NL_NETWORK_CONNECTIVITY_COST_HINT : int32_t
    {
        NetworkConnectivityCostHintUnknown = 0,
        NetworkConnectivityCostHintUnrestricted = 1,
        NetworkConnectivityCostHintFixed = 2,
        NetworkConnectivityCostHintVariable = 3,
    };
    enum class NL_NETWORK_CONNECTIVITY_LEVEL_HINT : int32_t
    {
        NetworkConnectivityLevelHintUnknown = 0,
        NetworkConnectivityLevelHintNone = 1,
        NetworkConnectivityLevelHintLocalAccess = 2,
        NetworkConnectivityLevelHintInternetAccess = 3,
        NetworkConnectivityLevelHintConstrainedInternetAccess = 4,
        NetworkConnectivityLevelHintHidden = 5,
    };
    enum class NL_PREFIX_ORIGIN : int32_t
    {
        IpPrefixOriginOther = 0,
        IpPrefixOriginManual = 1,
        IpPrefixOriginWellKnown = 2,
        IpPrefixOriginDhcp = 3,
        IpPrefixOriginRouterAdvertisement = 4,
        IpPrefixOriginUnchanged = 16,
    };
    enum class NL_SUFFIX_ORIGIN : int32_t
    {
        NlsoOther = 0,
        NlsoManual = 1,
        NlsoWellKnown = 2,
        NlsoDhcp = 3,
        NlsoLinkLayerAddress = 4,
        NlsoRandom = 5,
        IpSuffixOriginOther = 0,
        IpSuffixOriginManual = 1,
        IpSuffixOriginWellKnown = 2,
        IpSuffixOriginDhcp = 3,
        IpSuffixOriginLinkLayerAddress = 4,
        IpSuffixOriginRandom = 5,
        IpSuffixOriginUnchanged = 16,
    };
    enum class SCOPE_LEVEL : int32_t
    {
        ScopeLevelInterface = 1,
        ScopeLevelLink = 2,
        ScopeLevelSubnet = 3,
        ScopeLevelAdmin = 4,
        ScopeLevelSite = 5,
        ScopeLevelOrganization = 8,
        ScopeLevelGlobal = 14,
        ScopeLevelCount = 16,
    };
    enum class TCPIP_OWNER_MODULE_INFO_CLASS : int32_t
    {
        TCPIP_OWNER_MODULE_INFO_BASIC = 0,
    };
    enum class TCP_BOOLEAN_OPTIONAL : int32_t
    {
        TcpBoolOptDisabled = 0,
        TcpBoolOptEnabled = 1,
        TcpBoolOptUnchanged = -1,
    };
    enum class TCP_ESTATS_TYPE : int32_t
    {
        TcpConnectionEstatsSynOpts = 0,
        TcpConnectionEstatsData = 1,
        TcpConnectionEstatsSndCong = 2,
        TcpConnectionEstatsPath = 3,
        TcpConnectionEstatsSendBuff = 4,
        TcpConnectionEstatsRec = 5,
        TcpConnectionEstatsObsRec = 6,
        TcpConnectionEstatsBandwidth = 7,
        TcpConnectionEstatsFineRtt = 8,
        TcpConnectionEstatsMaximum = 9,
    };
    enum class TCP_RTO_ALGORITHM : int32_t
    {
        TcpRtoAlgorithmOther = 1,
        TcpRtoAlgorithmConstant = 2,
        TcpRtoAlgorithmRsre = 3,
        TcpRtoAlgorithmVanj = 4,
        MIB_TCP_RTO_OTHER = 1,
        MIB_TCP_RTO_CONSTANT = 2,
        MIB_TCP_RTO_RSRE = 3,
        MIB_TCP_RTO_VANJ = 4,
    };
    enum class TCP_SOFT_ERROR : int32_t
    {
        TcpErrorNone = 0,
        TcpErrorBelowDataWindow = 1,
        TcpErrorAboveDataWindow = 2,
        TcpErrorBelowAckWindow = 3,
        TcpErrorAboveAckWindow = 4,
        TcpErrorBelowTsWindow = 5,
        TcpErrorAboveTsWindow = 6,
        TcpErrorDataChecksumError = 7,
        TcpErrorDataLengthError = 8,
        TcpErrorMaxSoftError = 9,
    };
    enum class TCP_TABLE_CLASS : int32_t
    {
        TCP_TABLE_BASIC_LISTENER = 0,
        TCP_TABLE_BASIC_CONNECTIONS = 1,
        TCP_TABLE_BASIC_ALL = 2,
        TCP_TABLE_OWNER_PID_LISTENER = 3,
        TCP_TABLE_OWNER_PID_CONNECTIONS = 4,
        TCP_TABLE_OWNER_PID_ALL = 5,
        TCP_TABLE_OWNER_MODULE_LISTENER = 6,
        TCP_TABLE_OWNER_MODULE_CONNECTIONS = 7,
        TCP_TABLE_OWNER_MODULE_ALL = 8,
    };
    enum class UDP_TABLE_CLASS : int32_t
    {
        UDP_TABLE_BASIC = 0,
        UDP_TABLE_OWNER_PID = 1,
        UDP_TABLE_OWNER_MODULE = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DNS_INTERFACE_SETTINGS;
    struct DNS_INTERFACE_SETTINGS_EX;
    struct DNS_SETTINGS;
    struct FIXED_INFO_W2KSP1;
    struct HIFTIMESTAMPCHANGE__;
    struct IF_PHYSICAL_ADDRESS_LH;
    struct INTERFACE_HARDWARE_CROSSTIMESTAMP;
    struct INTERFACE_TIMESTAMP_CAPABILITIES;
    struct INTERFACE_TIMESTAMP_CAPABILITY_FLAGS;
    struct IPV6_ADDRESS_EX;
    struct IP_ADAPTER_ADDRESSES_LH;
    struct IP_ADAPTER_ADDRESSES_XP;
    struct IP_ADAPTER_ANYCAST_ADDRESS_XP;
    struct IP_ADAPTER_DNS_SERVER_ADDRESS_XP;
    struct IP_ADAPTER_DNS_SUFFIX;
    struct IP_ADAPTER_GATEWAY_ADDRESS_LH;
    struct IP_ADAPTER_INDEX_MAP;
    struct IP_ADAPTER_INFO;
    struct IP_ADAPTER_MULTICAST_ADDRESS_XP;
    struct IP_ADAPTER_ORDER_MAP;
    struct IP_ADAPTER_PREFIX_XP;
    struct IP_ADAPTER_UNICAST_ADDRESS_LH;
    struct IP_ADAPTER_UNICAST_ADDRESS_XP;
    struct IP_ADAPTER_WINS_SERVER_ADDRESS_LH;
    struct IP_ADDRESS_PREFIX;
    struct IP_ADDRESS_STRING;
    struct IP_ADDR_STRING;
    struct IP_INTERFACE_INFO;
    struct IP_MCAST_COUNTER_INFO;
    struct IP_PER_ADAPTER_INFO_W2KSP1;
    struct IP_UNIDIRECTIONAL_ADAPTER_ADDRESS;
    struct IcmpHandle;
    struct MIB_IPDESTROW;
    struct MIB_IPDESTTABLE;
    struct MIB_ROUTESTATE;
    struct NET_ADDRESS_INFO;
    struct NET_IF_ALIAS_LH;
    struct NET_IF_RCV_ADDRESS_LH;
    union NET_LUID_LH;
    struct NL_BANDWIDTH_INFORMATION;
    struct NL_NETWORK_CONNECTIVITY_HINT;
    struct SOCKADDR_IN6_PAIR;
    union SOCKADDR_INET;
    struct TCPIP_OWNER_MODULE_BASIC_INFO;
    struct TCP_ESTATS_BANDWIDTH_ROD_v0;
    struct TCP_ESTATS_BANDWIDTH_RW_v0;
    struct TCP_ESTATS_DATA_ROD_v0;
    struct TCP_ESTATS_DATA_RW_v0;
    struct TCP_ESTATS_FINE_RTT_ROD_v0;
    struct TCP_ESTATS_FINE_RTT_RW_v0;
    struct TCP_ESTATS_OBS_REC_ROD_v0;
    struct TCP_ESTATS_OBS_REC_RW_v0;
    struct TCP_ESTATS_PATH_ROD_v0;
    struct TCP_ESTATS_PATH_RW_v0;
    struct TCP_ESTATS_REC_ROD_v0;
    struct TCP_ESTATS_REC_RW_v0;
    struct TCP_ESTATS_SEND_BUFF_ROD_v0;
    struct TCP_ESTATS_SEND_BUFF_RW_v0;
    struct TCP_ESTATS_SND_CONG_ROD_v0;
    struct TCP_ESTATS_SND_CONG_ROS_v0;
    struct TCP_ESTATS_SND_CONG_RW_v0;
    struct TCP_ESTATS_SYN_OPTS_ROS_v0;
    struct arp_send_reply;
    struct icmp_echo_reply;
    struct icmpv6_echo_reply_lh;
    struct ip_interface_name_info_w2ksp1;
    struct ip_option_information;
    struct tcp_reserve_port_range;
#pragma endregion forward_declarations

#pragma region delegates
    using PIPINTERFACE_CHANGE_CALLBACK = void __stdcall(void*, Windows::Win32::Mib::MIB_IPINTERFACE_ROW*, Windows::Win32::Mib::MIB_NOTIFICATION_TYPE);
    using PUNICAST_IPADDRESS_CHANGE_CALLBACK = void __stdcall(void*, Windows::Win32::Mib::MIB_UNICASTIPADDRESS_ROW*, Windows::Win32::Mib::MIB_NOTIFICATION_TYPE);
    using PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK = void __stdcall(void*, Windows::Win32::Mib::MIB_UNICASTIPADDRESS_TABLE*);
    using PIPFORWARD_CHANGE_CALLBACK = void __stdcall(void*, Windows::Win32::Mib::MIB_IPFORWARD_ROW2*, Windows::Win32::Mib::MIB_NOTIFICATION_TYPE);
    using PTEREDO_PORT_CHANGE_CALLBACK = void __stdcall(void*, uint16_t, Windows::Win32::Mib::MIB_NOTIFICATION_TYPE);
    using PNETWORK_CONNECTIVITY_HINT_CHANGE_CALLBACK = void __stdcall(void*, Windows::Win32::IpHelper::NL_NETWORK_CONNECTIVITY_HINT);
    using INTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK = void __stdcall(void*);
    using PINTERFACE_TIMESTAMP_CONFIG_CHANGE_CALLBACK = void __stdcall();
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
