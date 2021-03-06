// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsEventCollector_0_H
#define WIN32_Windows_Win32_WindowsEventCollector_0_H
WIN32_EXPORT namespace win32::Windows::Win32::WindowsEventCollector
{
#pragma region enums
    enum class EC_SUBSCRIPTION_CONFIGURATION_MODE : int32_t
    {
        EcConfigurationModeNormal = 0,
        EcConfigurationModeCustom = 1,
        EcConfigurationModeMinLatency = 2,
        EcConfigurationModeMinBandwidth = 3,
    };
    enum class EC_SUBSCRIPTION_CONTENT_FORMAT : int32_t
    {
        EcContentFormatEvents = 1,
        EcContentFormatRenderedText = 2,
    };
    enum class EC_SUBSCRIPTION_CREDENTIALS_TYPE : int32_t
    {
        EcSubscriptionCredDefault = 0,
        EcSubscriptionCredNegotiate = 1,
        EcSubscriptionCredDigest = 2,
        EcSubscriptionCredBasic = 3,
        EcSubscriptionCredLocalMachine = 4,
    };
    enum class EC_SUBSCRIPTION_DELIVERY_MODE : int32_t
    {
        EcDeliveryModePull = 1,
        EcDeliveryModePush = 2,
    };
    enum class EC_SUBSCRIPTION_PROPERTY_ID : int32_t
    {
        EcSubscriptionEnabled = 0,
        EcSubscriptionEventSources = 1,
        EcSubscriptionEventSourceAddress = 2,
        EcSubscriptionEventSourceEnabled = 3,
        EcSubscriptionEventSourceUserName = 4,
        EcSubscriptionEventSourcePassword = 5,
        EcSubscriptionDescription = 6,
        EcSubscriptionURI = 7,
        EcSubscriptionConfigurationMode = 8,
        EcSubscriptionExpires = 9,
        EcSubscriptionQuery = 10,
        EcSubscriptionTransportName = 11,
        EcSubscriptionTransportPort = 12,
        EcSubscriptionDeliveryMode = 13,
        EcSubscriptionDeliveryMaxItems = 14,
        EcSubscriptionDeliveryMaxLatencyTime = 15,
        EcSubscriptionHeartbeatInterval = 16,
        EcSubscriptionLocale = 17,
        EcSubscriptionContentFormat = 18,
        EcSubscriptionLogFile = 19,
        EcSubscriptionPublisherName = 20,
        EcSubscriptionCredentialsType = 21,
        EcSubscriptionCommonUserName = 22,
        EcSubscriptionCommonPassword = 23,
        EcSubscriptionHostName = 24,
        EcSubscriptionReadExistingEvents = 25,
        EcSubscriptionDialect = 26,
        EcSubscriptionType = 27,
        EcSubscriptionAllowedIssuerCAs = 28,
        EcSubscriptionAllowedSubjects = 29,
        EcSubscriptionDeniedSubjects = 30,
        EcSubscriptionAllowedSourceDomainComputers = 31,
        EcSubscriptionPropertyIdEND = 32,
    };
    enum class EC_SUBSCRIPTION_RUNTIME_STATUS_ACTIVE_STATUS : int32_t
    {
        EcRuntimeStatusActiveStatusDisabled = 1,
        EcRuntimeStatusActiveStatusActive = 2,
        EcRuntimeStatusActiveStatusInactive = 3,
        EcRuntimeStatusActiveStatusTrying = 4,
    };
    enum class EC_SUBSCRIPTION_RUNTIME_STATUS_INFO_ID : int32_t
    {
        EcSubscriptionRunTimeStatusActive = 0,
        EcSubscriptionRunTimeStatusLastError = 1,
        EcSubscriptionRunTimeStatusLastErrorMessage = 2,
        EcSubscriptionRunTimeStatusLastErrorTime = 3,
        EcSubscriptionRunTimeStatusNextRetryTime = 4,
        EcSubscriptionRunTimeStatusEventSources = 5,
        EcSubscriptionRunTimeStatusLastHeartbeatTime = 6,
        EcSubscriptionRunTimeStatusInfoIdEND = 7,
    };
    enum class EC_SUBSCRIPTION_TYPE : int32_t
    {
        EcSubscriptionTypeSourceInitiated = 0,
        EcSubscriptionTypeCollectorInitiated = 1,
    };
    enum class EC_VARIANT_TYPE : int32_t
    {
        EcVarTypeNull = 0,
        EcVarTypeBoolean = 1,
        EcVarTypeUInt32 = 2,
        EcVarTypeDateTime = 3,
        EcVarTypeString = 4,
        EcVarObjectArrayPropertyHandle = 5,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct EC_VARIANT;
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
