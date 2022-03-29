// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_NetManagement_0_H
#define WIN32_Windows_Win32_NetManagement_0_H
WIN32_EXPORT namespace win32::Windows::Win32::NetManagement
{
#pragma region enums
    enum class DSREG_JOIN_TYPE : int32_t
    {
        DSREG_UNKNOWN_JOIN = 0,
        DSREG_DEVICE_JOIN = 1,
        DSREG_WORKPLACE_JOIN = 2,
    };
    enum class NETSETUP_JOIN_STATUS : int32_t
    {
        NetSetupUnknownStatus = 0,
        NetSetupUnjoined = 1,
        NetSetupWorkgroupName = 2,
        NetSetupDomainName = 3,
    };
    enum class NETSETUP_NAME_TYPE : int32_t
    {
        NetSetupUnknown = 0,
        NetSetupMachine = 1,
        NetSetupWorkgroup = 2,
        NetSetupDomain = 3,
        NetSetupNonExistentDomain = 4,
        NetSetupDnsMachine = 5,
    };
    enum class NET_COMPUTER_NAME_TYPE : int32_t
    {
        NetPrimaryComputerName = 0,
        NetAlternateComputerNames = 1,
        NetAllComputerNames = 2,
        NetComputerNameTypeMax = 3,
    };
    enum class NET_VALIDATE_PASSWORD_TYPE : int32_t
    {
        NetValidateAuthentication = 1,
        NetValidatePasswordChange = 2,
        NetValidatePasswordReset = 3,
    };
    enum class TRANSPORT_TYPE : int32_t
    {
        UseTransportType_None = 0,
        UseTransportType_Wsk = 1,
        UseTransportType_Quic = 2,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ACCESS_INFO_0;
    struct ACCESS_INFO_1;
    struct ACCESS_INFO_1002;
    struct ACCESS_LIST;
    struct ADMIN_OTHER_INFO;
    struct AE_ACCLIM;
    struct AE_ACLMOD;
    struct AE_CLOSEFILE;
    struct AE_CONNREJ;
    struct AE_CONNSTART;
    struct AE_CONNSTOP;
    struct AE_GENERIC;
    struct AE_LOCKOUT;
    struct AE_NETLOGOFF;
    struct AE_NETLOGON;
    struct AE_RESACCESS;
    struct AE_RESACCESSREJ;
    struct AE_SERVICESTAT;
    struct AE_SESSLOGOFF;
    struct AE_SESSLOGON;
    struct AE_SESSPWERR;
    struct AE_SRVSTATUS;
    struct AE_UASMOD;
    struct AT_ENUM;
    struct AT_INFO;
    struct AUDIT_ENTRY;
    struct CONFIG_INFO_0;
    struct DSREG_JOIN_INFO;
    struct DSREG_USER_INFO;
    struct ERRLOG_OTHER_INFO;
    struct ERROR_LOG;
    struct GROUP_INFO_0;
    struct GROUP_INFO_1;
    struct GROUP_INFO_1002;
    struct GROUP_INFO_1005;
    struct GROUP_INFO_2;
    struct GROUP_INFO_3;
    struct GROUP_USERS_INFO_0;
    struct GROUP_USERS_INFO_1;
    struct HLOG;
    struct LOCALGROUP_INFO_0;
    struct LOCALGROUP_INFO_1;
    struct LOCALGROUP_INFO_1002;
    struct LOCALGROUP_MEMBERS_INFO_0;
    struct LOCALGROUP_MEMBERS_INFO_1;
    struct LOCALGROUP_MEMBERS_INFO_2;
    struct LOCALGROUP_MEMBERS_INFO_3;
    struct LOCALGROUP_USERS_INFO_0;
    struct MSG_INFO_0;
    struct MSG_INFO_1;
    struct NETSETUP_PROVISIONING_PARAMS;
    struct NET_DISPLAY_GROUP;
    struct NET_DISPLAY_MACHINE;
    struct NET_DISPLAY_USER;
    struct NET_VALIDATE_AUTHENTICATION_INPUT_ARG;
    struct NET_VALIDATE_OUTPUT_ARG;
    struct NET_VALIDATE_PASSWORD_CHANGE_INPUT_ARG;
    struct NET_VALIDATE_PASSWORD_HASH;
    struct NET_VALIDATE_PASSWORD_RESET_INPUT_ARG;
    struct NET_VALIDATE_PERSISTED_FIELDS;
    struct PRINT_OTHER_INFO;
    struct SERVER_INFO_100;
    struct SERVER_INFO_1005;
    struct SERVER_INFO_101;
    struct SERVER_INFO_1010;
    struct SERVER_INFO_1016;
    struct SERVER_INFO_1017;
    struct SERVER_INFO_1018;
    struct SERVER_INFO_102;
    struct SERVER_INFO_103;
    struct SERVER_INFO_1107;
    struct SERVER_INFO_1501;
    struct SERVER_INFO_1502;
    struct SERVER_INFO_1503;
    struct SERVER_INFO_1506;
    struct SERVER_INFO_1509;
    struct SERVER_INFO_1510;
    struct SERVER_INFO_1511;
    struct SERVER_INFO_1512;
    struct SERVER_INFO_1513;
    struct SERVER_INFO_1514;
    struct SERVER_INFO_1515;
    struct SERVER_INFO_1516;
    struct SERVER_INFO_1518;
    struct SERVER_INFO_1520;
    struct SERVER_INFO_1521;
    struct SERVER_INFO_1522;
    struct SERVER_INFO_1523;
    struct SERVER_INFO_1524;
    struct SERVER_INFO_1525;
    struct SERVER_INFO_1528;
    struct SERVER_INFO_1529;
    struct SERVER_INFO_1530;
    struct SERVER_INFO_1533;
    struct SERVER_INFO_1534;
    struct SERVER_INFO_1535;
    struct SERVER_INFO_1536;
    struct SERVER_INFO_1537;
    struct SERVER_INFO_1538;
    struct SERVER_INFO_1539;
    struct SERVER_INFO_1540;
    struct SERVER_INFO_1541;
    struct SERVER_INFO_1542;
    struct SERVER_INFO_1543;
    struct SERVER_INFO_1544;
    struct SERVER_INFO_1545;
    struct SERVER_INFO_1546;
    struct SERVER_INFO_1547;
    struct SERVER_INFO_1548;
    struct SERVER_INFO_1549;
    struct SERVER_INFO_1550;
    struct SERVER_INFO_1552;
    struct SERVER_INFO_1553;
    struct SERVER_INFO_1554;
    struct SERVER_INFO_1555;
    struct SERVER_INFO_1556;
    struct SERVER_INFO_1557;
    struct SERVER_INFO_1560;
    struct SERVER_INFO_1561;
    struct SERVER_INFO_1562;
    struct SERVER_INFO_1563;
    struct SERVER_INFO_1564;
    struct SERVER_INFO_1565;
    struct SERVER_INFO_1566;
    struct SERVER_INFO_1567;
    struct SERVER_INFO_1568;
    struct SERVER_INFO_1569;
    struct SERVER_INFO_1570;
    struct SERVER_INFO_1571;
    struct SERVER_INFO_1572;
    struct SERVER_INFO_1573;
    struct SERVER_INFO_1574;
    struct SERVER_INFO_1575;
    struct SERVER_INFO_1576;
    struct SERVER_INFO_1577;
    struct SERVER_INFO_1578;
    struct SERVER_INFO_1579;
    struct SERVER_INFO_1580;
    struct SERVER_INFO_1581;
    struct SERVER_INFO_1582;
    struct SERVER_INFO_1583;
    struct SERVER_INFO_1584;
    struct SERVER_INFO_1585;
    struct SERVER_INFO_1586;
    struct SERVER_INFO_1587;
    struct SERVER_INFO_1588;
    struct SERVER_INFO_1590;
    struct SERVER_INFO_1591;
    struct SERVER_INFO_1592;
    struct SERVER_INFO_1593;
    struct SERVER_INFO_1594;
    struct SERVER_INFO_1595;
    struct SERVER_INFO_1596;
    struct SERVER_INFO_1597;
    struct SERVER_INFO_1598;
    struct SERVER_INFO_1599;
    struct SERVER_INFO_1600;
    struct SERVER_INFO_1601;
    struct SERVER_INFO_1602;
    struct SERVER_INFO_402;
    struct SERVER_INFO_403;
    struct SERVER_INFO_502;
    struct SERVER_INFO_503;
    struct SERVER_INFO_598;
    struct SERVER_INFO_599;
    struct SERVER_TRANSPORT_INFO_0;
    struct SERVER_TRANSPORT_INFO_1;
    struct SERVER_TRANSPORT_INFO_2;
    struct SERVER_TRANSPORT_INFO_3;
    struct SERVICE_INFO_0;
    struct SERVICE_INFO_1;
    struct SERVICE_INFO_2;
    struct STD_ALERT;
    struct TIME_OF_DAY_INFO;
    struct TRANSPORT_INFO;
    struct USER_INFO_0;
    struct USER_INFO_1;
    struct USER_INFO_10;
    struct USER_INFO_1003;
    struct USER_INFO_1005;
    struct USER_INFO_1006;
    struct USER_INFO_1007;
    struct USER_INFO_1008;
    struct USER_INFO_1009;
    struct USER_INFO_1010;
    struct USER_INFO_1011;
    struct USER_INFO_1012;
    struct USER_INFO_1013;
    struct USER_INFO_1014;
    struct USER_INFO_1017;
    struct USER_INFO_1018;
    struct USER_INFO_1020;
    struct USER_INFO_1023;
    struct USER_INFO_1024;
    struct USER_INFO_1025;
    struct USER_INFO_1051;
    struct USER_INFO_1052;
    struct USER_INFO_1053;
    struct USER_INFO_11;
    struct USER_INFO_2;
    struct USER_INFO_20;
    struct USER_INFO_21;
    struct USER_INFO_22;
    struct USER_INFO_23;
    struct USER_INFO_24;
    struct USER_INFO_3;
    struct USER_INFO_4;
    struct USER_MODALS_INFO_0;
    struct USER_MODALS_INFO_1;
    struct USER_MODALS_INFO_1001;
    struct USER_MODALS_INFO_1002;
    struct USER_MODALS_INFO_1003;
    struct USER_MODALS_INFO_1004;
    struct USER_MODALS_INFO_1005;
    struct USER_MODALS_INFO_1006;
    struct USER_MODALS_INFO_1007;
    struct USER_MODALS_INFO_2;
    struct USER_MODALS_INFO_3;
    struct USER_OTHER_INFO;
    struct USE_INFO_0;
    struct USE_INFO_1;
    struct USE_INFO_2;
    struct USE_INFO_3;
    struct USE_INFO_4;
    struct USE_INFO_5;
    struct USE_OPTION_DEFERRED_CONNECTION_PARAMETERS;
    struct USE_OPTION_GENERIC;
    struct USE_OPTION_TRANSPORT_PARAMETERS;
    struct WKSTA_INFO_100;
    struct WKSTA_INFO_101;
    struct WKSTA_INFO_1010;
    struct WKSTA_INFO_1011;
    struct WKSTA_INFO_1012;
    struct WKSTA_INFO_1013;
    struct WKSTA_INFO_1018;
    struct WKSTA_INFO_102;
    struct WKSTA_INFO_1023;
    struct WKSTA_INFO_1027;
    struct WKSTA_INFO_1028;
    struct WKSTA_INFO_1032;
    struct WKSTA_INFO_1033;
    struct WKSTA_INFO_1041;
    struct WKSTA_INFO_1042;
    struct WKSTA_INFO_1043;
    struct WKSTA_INFO_1044;
    struct WKSTA_INFO_1045;
    struct WKSTA_INFO_1046;
    struct WKSTA_INFO_1047;
    struct WKSTA_INFO_1048;
    struct WKSTA_INFO_1049;
    struct WKSTA_INFO_1050;
    struct WKSTA_INFO_1051;
    struct WKSTA_INFO_1052;
    struct WKSTA_INFO_1053;
    struct WKSTA_INFO_1054;
    struct WKSTA_INFO_1055;
    struct WKSTA_INFO_1056;
    struct WKSTA_INFO_1057;
    struct WKSTA_INFO_1058;
    struct WKSTA_INFO_1059;
    struct WKSTA_INFO_1060;
    struct WKSTA_INFO_1061;
    struct WKSTA_INFO_1062;
    struct WKSTA_INFO_302;
    struct WKSTA_INFO_402;
    struct WKSTA_INFO_502;
    struct WKSTA_TRANSPORT_INFO_0;
    struct WKSTA_USER_INFO_0;
    struct WKSTA_USER_INFO_1;
    struct WKSTA_USER_INFO_1101;
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
