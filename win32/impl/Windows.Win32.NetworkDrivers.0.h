// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetworkDrivers_0_H
#define WIN32_Windows_Win32_NetworkDrivers_0_H
WIN32_EXPORT namespace win32::Windows::Win32::NetworkDrivers
{
#pragma region enums
    enum class MIB_IF_TABLE_LEVEL : int32_t
    {
        MibIfTableNormal = 0,
        MibIfTableRaw = 1,
        MibIfTableNormalWithoutStatistics = 2,
    };
    enum class NET_IF_ACCESS_TYPE : int32_t
    {
        NET_IF_ACCESS_LOOPBACK = 1,
        NET_IF_ACCESS_BROADCAST = 2,
        NET_IF_ACCESS_POINT_TO_POINT = 3,
        NET_IF_ACCESS_POINT_TO_MULTI_POINT = 4,
        NET_IF_ACCESS_MAXIMUM = 5,
    };
    enum class NET_IF_ADMIN_STATUS : int32_t
    {
        NET_IF_ADMIN_STATUS_UP = 1,
        NET_IF_ADMIN_STATUS_DOWN = 2,
        NET_IF_ADMIN_STATUS_TESTING = 3,
    };
    enum class NET_IF_CONNECTION_TYPE : int32_t
    {
        NET_IF_CONNECTION_DEDICATED = 1,
        NET_IF_CONNECTION_PASSIVE = 2,
        NET_IF_CONNECTION_DEMAND = 3,
        NET_IF_CONNECTION_MAXIMUM = 4,
    };
    enum class NET_IF_DIRECTION_TYPE : int32_t
    {
        NET_IF_DIRECTION_SENDRECEIVE = 0,
        NET_IF_DIRECTION_SENDONLY = 1,
        NET_IF_DIRECTION_RECEIVEONLY = 2,
        NET_IF_DIRECTION_MAXIMUM = 3,
    };
    enum class NET_IF_MEDIA_CONNECT_STATE : int32_t
    {
        MediaConnectStateUnknown = 0,
        MediaConnectStateConnected = 1,
        MediaConnectStateDisconnected = 2,
    };
    enum class NET_IF_MEDIA_DUPLEX_STATE : int32_t
    {
        MediaDuplexStateUnknown = 0,
        MediaDuplexStateHalf = 1,
        MediaDuplexStateFull = 2,
    };
    enum class NET_IF_OPER_STATUS : int32_t
    {
        NET_IF_OPER_STATUS_UP = 1,
        NET_IF_OPER_STATUS_DOWN = 2,
        NET_IF_OPER_STATUS_TESTING = 3,
        NET_IF_OPER_STATUS_UNKNOWN = 4,
        NET_IF_OPER_STATUS_DORMANT = 5,
        NET_IF_OPER_STATUS_NOT_PRESENT = 6,
        NET_IF_OPER_STATUS_LOWER_LAYER_DOWN = 7,
    };
    enum class NL_ADDRESS_TYPE : int32_t
    {
        NlatUnspecified = 0,
        NlatUnicast = 1,
        NlatAnycast = 2,
        NlatMulticast = 3,
        NlatBroadcast = 4,
        NlatInvalid = 5,
    };
    enum class NL_LINK_LOCAL_ADDRESS_BEHAVIOR : int32_t
    {
        LinkLocalAlwaysOff = 0,
        LinkLocalDelayed = 1,
        LinkLocalAlwaysOn = 2,
        LinkLocalUnchanged = -1,
    };
    enum class NL_NEIGHBOR_STATE : int32_t
    {
        NlnsUnreachable = 0,
        NlnsIncomplete = 1,
        NlnsProbe = 2,
        NlnsDelay = 3,
        NlnsStale = 4,
        NlnsReachable = 5,
        NlnsPermanent = 6,
        NlnsMaximum = 7,
    };
    enum class NL_ROUTER_DISCOVERY_BEHAVIOR : int32_t
    {
        RouterDiscoveryDisabled = 0,
        RouterDiscoveryEnabled = 1,
        RouterDiscoveryDhcp = 2,
        RouterDiscoveryUnchanged = -1,
    };
    enum class NL_ROUTE_ORIGIN : int32_t
    {
        NlroManual = 0,
        NlroWellKnown = 1,
        NlroDHCP = 2,
        NlroRouterAdvertisement = 3,
        Nlro6to4 = 4,
    };
    enum class NL_ROUTE_PROTOCOL : int32_t
    {
        RouteProtocolOther = 1,
        RouteProtocolLocal = 2,
        RouteProtocolNetMgmt = 3,
        RouteProtocolIcmp = 4,
        RouteProtocolEgp = 5,
        RouteProtocolGgp = 6,
        RouteProtocolHello = 7,
        RouteProtocolRip = 8,
        RouteProtocolIsIs = 9,
        RouteProtocolEsIs = 10,
        RouteProtocolCisco = 11,
        RouteProtocolBbn = 12,
        RouteProtocolOspf = 13,
        RouteProtocolBgp = 14,
        RouteProtocolIdpr = 15,
        RouteProtocolEigrp = 16,
        RouteProtocolDvmrp = 17,
        RouteProtocolRpl = 18,
        RouteProtocolDhcp = 19,
        MIB_IPPROTO_OTHER = 1,
        PROTO_IP_OTHER = 1,
        MIB_IPPROTO_LOCAL = 2,
        PROTO_IP_LOCAL = 2,
        MIB_IPPROTO_NETMGMT = 3,
        PROTO_IP_NETMGMT = 3,
        MIB_IPPROTO_ICMP = 4,
        PROTO_IP_ICMP = 4,
        MIB_IPPROTO_EGP = 5,
        PROTO_IP_EGP = 5,
        MIB_IPPROTO_GGP = 6,
        PROTO_IP_GGP = 6,
        MIB_IPPROTO_HELLO = 7,
        PROTO_IP_HELLO = 7,
        MIB_IPPROTO_RIP = 8,
        PROTO_IP_RIP = 8,
        MIB_IPPROTO_IS_IS = 9,
        PROTO_IP_IS_IS = 9,
        MIB_IPPROTO_ES_IS = 10,
        PROTO_IP_ES_IS = 10,
        MIB_IPPROTO_CISCO = 11,
        PROTO_IP_CISCO = 11,
        MIB_IPPROTO_BBN = 12,
        PROTO_IP_BBN = 12,
        MIB_IPPROTO_OSPF = 13,
        PROTO_IP_OSPF = 13,
        MIB_IPPROTO_BGP = 14,
        PROTO_IP_BGP = 14,
        MIB_IPPROTO_IDPR = 15,
        PROTO_IP_IDPR = 15,
        MIB_IPPROTO_EIGRP = 16,
        PROTO_IP_EIGRP = 16,
        MIB_IPPROTO_DVMRP = 17,
        PROTO_IP_DVMRP = 17,
        MIB_IPPROTO_RPL = 18,
        PROTO_IP_RPL = 18,
        MIB_IPPROTO_DHCP = 19,
        PROTO_IP_DHCP = 19,
        MIB_IPPROTO_NT_AUTOSTATIC = 10002,
        PROTO_IP_NT_AUTOSTATIC = 10002,
        MIB_IPPROTO_NT_STATIC = 10006,
        PROTO_IP_NT_STATIC = 10006,
        MIB_IPPROTO_NT_STATIC_NON_DOD = 10007,
        PROTO_IP_NT_STATIC_NON_DOD = 10007,
    };
    enum class TUNNEL_TYPE : int32_t
    {
        TUNNEL_TYPE_NONE = 0,
        TUNNEL_TYPE_OTHER = 1,
        TUNNEL_TYPE_DIRECT = 2,
        TUNNEL_TYPE_6TO4 = 11,
        TUNNEL_TYPE_ISATAP = 13,
        TUNNEL_TYPE_TEREDO = 14,
        TUNNEL_TYPE_IPHTTPS = 15,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct IF_COUNTED_STRING_LH;
    struct L2_NOTIFICATION_DATA;
    struct NDIS_INTERFACE_INFORMATION;
    struct NET_PHYSICAL_LOCATION_LH;
    struct SOCKADDR_IN6_LH;
    struct SOCKADDR_STORAGE_LH;
    struct SOCKET_ADDRESS_LIST;
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