// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_CloudFilters_0_H
#define WIN32_Windows_Win32_CloudFilters_0_H
WIN32_EXPORT namespace win32::Windows::Win32::CloudFilters
{
#pragma region enums
    enum class CF_CALLBACK_CANCEL_FLAGS : int32_t
    {
        CF_CALLBACK_CANCEL_FLAG_NONE = 0,
        CF_CALLBACK_CANCEL_FLAG_IO_TIMEOUT = 1,
        CF_CALLBACK_CANCEL_FLAG_IO_ABORTED = 2,
    };
    enum class CF_CALLBACK_CLOSE_COMPLETION_FLAGS : int32_t
    {
        CF_CALLBACK_CLOSE_COMPLETION_FLAG_NONE = 0,
        CF_CALLBACK_CLOSE_COMPLETION_FLAG_DELETED = 1,
    };
    enum class CF_CALLBACK_DEHYDRATE_COMPLETION_FLAGS : int32_t
    {
        CF_CALLBACK_DEHYDRATE_COMPLETION_FLAG_NONE = 0,
        CF_CALLBACK_DEHYDRATE_COMPLETION_FLAG_BACKGROUND = 1,
        CF_CALLBACK_DEHYDRATE_COMPLETION_FLAG_DEHYDRATED = 2,
    };
    enum class CF_CALLBACK_DEHYDRATE_FLAGS : int32_t
    {
        CF_CALLBACK_DEHYDRATE_FLAG_NONE = 0,
        CF_CALLBACK_DEHYDRATE_FLAG_BACKGROUND = 1,
    };
    enum class CF_CALLBACK_DEHYDRATION_REASON : int32_t
    {
        CF_CALLBACK_DEHYDRATION_REASON_NONE = 0,
        CF_CALLBACK_DEHYDRATION_REASON_USER_MANUAL = 1,
        CF_CALLBACK_DEHYDRATION_REASON_SYSTEM_LOW_SPACE = 2,
        CF_CALLBACK_DEHYDRATION_REASON_SYSTEM_INACTIVITY = 3,
        CF_CALLBACK_DEHYDRATION_REASON_SYSTEM_OS_UPGRADE = 4,
    };
    enum class CF_CALLBACK_DELETE_COMPLETION_FLAGS : int32_t
    {
        CF_CALLBACK_DELETE_COMPLETION_FLAG_NONE = 0,
    };
    enum class CF_CALLBACK_DELETE_FLAGS : int32_t
    {
        CF_CALLBACK_DELETE_FLAG_NONE = 0,
        CF_CALLBACK_DELETE_FLAG_IS_DIRECTORY = 1,
        CF_CALLBACK_DELETE_FLAG_IS_UNDELETE = 2,
    };
    enum class CF_CALLBACK_FETCH_DATA_FLAGS : int32_t
    {
        CF_CALLBACK_FETCH_DATA_FLAG_NONE = 0,
        CF_CALLBACK_FETCH_DATA_FLAG_RECOVERY = 1,
        CF_CALLBACK_FETCH_DATA_FLAG_EXPLICIT_HYDRATION = 2,
    };
    enum class CF_CALLBACK_FETCH_PLACEHOLDERS_FLAGS : int32_t
    {
        CF_CALLBACK_FETCH_PLACEHOLDERS_FLAG_NONE = 0,
    };
    enum class CF_CALLBACK_OPEN_COMPLETION_FLAGS : int32_t
    {
        CF_CALLBACK_OPEN_COMPLETION_FLAG_NONE = 0,
        CF_CALLBACK_OPEN_COMPLETION_FLAG_PLACEHOLDER_UNKNOWN = 1,
        CF_CALLBACK_OPEN_COMPLETION_FLAG_PLACEHOLDER_UNSUPPORTED = 2,
    };
    enum class CF_CALLBACK_RENAME_COMPLETION_FLAGS : int32_t
    {
        CF_CALLBACK_RENAME_COMPLETION_FLAG_NONE = 0,
    };
    enum class CF_CALLBACK_RENAME_FLAGS : int32_t
    {
        CF_CALLBACK_RENAME_FLAG_NONE = 0,
        CF_CALLBACK_RENAME_FLAG_IS_DIRECTORY = 1,
        CF_CALLBACK_RENAME_FLAG_SOURCE_IN_SCOPE = 2,
        CF_CALLBACK_RENAME_FLAG_TARGET_IN_SCOPE = 4,
    };
    enum class CF_CALLBACK_TYPE : int32_t
    {
        CF_CALLBACK_TYPE_FETCH_DATA = 0,
        CF_CALLBACK_TYPE_VALIDATE_DATA = 1,
        CF_CALLBACK_TYPE_CANCEL_FETCH_DATA = 2,
        CF_CALLBACK_TYPE_FETCH_PLACEHOLDERS = 3,
        CF_CALLBACK_TYPE_CANCEL_FETCH_PLACEHOLDERS = 4,
        CF_CALLBACK_TYPE_NOTIFY_FILE_OPEN_COMPLETION = 5,
        CF_CALLBACK_TYPE_NOTIFY_FILE_CLOSE_COMPLETION = 6,
        CF_CALLBACK_TYPE_NOTIFY_DEHYDRATE = 7,
        CF_CALLBACK_TYPE_NOTIFY_DEHYDRATE_COMPLETION = 8,
        CF_CALLBACK_TYPE_NOTIFY_DELETE = 9,
        CF_CALLBACK_TYPE_NOTIFY_DELETE_COMPLETION = 10,
        CF_CALLBACK_TYPE_NOTIFY_RENAME = 11,
        CF_CALLBACK_TYPE_NOTIFY_RENAME_COMPLETION = 12,
        CF_CALLBACK_TYPE_NONE = -1,
    };
    enum class CF_CALLBACK_VALIDATE_DATA_FLAGS : int32_t
    {
        CF_CALLBACK_VALIDATE_DATA_FLAG_NONE = 0,
        CF_CALLBACK_VALIDATE_DATA_FLAG_EXPLICIT_HYDRATION = 2,
    };
    enum class CF_CONNECT_FLAGS : int32_t
    {
        CF_CONNECT_FLAG_NONE = 0,
        CF_CONNECT_FLAG_REQUIRE_PROCESS_INFO = 2,
        CF_CONNECT_FLAG_REQUIRE_FULL_FILE_PATH = 4,
        CF_CONNECT_FLAG_BLOCK_SELF_IMPLICIT_HYDRATION = 8,
    };
    enum class CF_CONVERT_FLAGS : int32_t
    {
        CF_CONVERT_FLAG_NONE = 0,
        CF_CONVERT_FLAG_MARK_IN_SYNC = 1,
        CF_CONVERT_FLAG_DEHYDRATE = 2,
        CF_CONVERT_FLAG_ENABLE_ON_DEMAND_POPULATION = 4,
        CF_CONVERT_FLAG_ALWAYS_FULL = 8,
    };
    enum class CF_CREATE_FLAGS : int32_t
    {
        CF_CREATE_FLAG_NONE = 0,
        CF_CREATE_FLAG_STOP_ON_ERROR = 1,
    };
    enum class CF_DEHYDRATE_FLAGS : int32_t
    {
        CF_DEHYDRATE_FLAG_NONE = 0,
        CF_DEHYDRATE_FLAG_BACKGROUND = 1,
    };
    enum class CF_HARDLINK_POLICY : int32_t
    {
        CF_HARDLINK_POLICY_NONE = 0,
        CF_HARDLINK_POLICY_ALLOWED = 1,
    };
    enum class CF_HYDRATE_FLAGS : int32_t
    {
        CF_HYDRATE_FLAG_NONE = 0,
    };
    enum class CF_HYDRATION_POLICY_MODIFIER : int32_t
    {
        CF_HYDRATION_POLICY_MODIFIER_NONE = 0,
        CF_HYDRATION_POLICY_MODIFIER_VALIDATION_REQUIRED = 1,
        CF_HYDRATION_POLICY_MODIFIER_STREAMING_ALLOWED = 2,
        CF_HYDRATION_POLICY_MODIFIER_AUTO_DEHYDRATION_ALLOWED = 4,
    };
    enum class CF_HYDRATION_POLICY_PRIMARY : int32_t
    {
        CF_HYDRATION_POLICY_PARTIAL = 0,
        CF_HYDRATION_POLICY_PROGRESSIVE = 1,
        CF_HYDRATION_POLICY_FULL = 2,
        CF_HYDRATION_POLICY_ALWAYS_FULL = 3,
    };
    enum class CF_INSYNC_POLICY : int32_t
    {
        CF_INSYNC_POLICY_NONE = 0,
        CF_INSYNC_POLICY_TRACK_FILE_CREATION_TIME = 1,
        CF_INSYNC_POLICY_TRACK_FILE_READONLY_ATTRIBUTE = 2,
        CF_INSYNC_POLICY_TRACK_FILE_HIDDEN_ATTRIBUTE = 4,
        CF_INSYNC_POLICY_TRACK_FILE_SYSTEM_ATTRIBUTE = 8,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_CREATION_TIME = 16,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_READONLY_ATTRIBUTE = 32,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_HIDDEN_ATTRIBUTE = 64,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_SYSTEM_ATTRIBUTE = 128,
        CF_INSYNC_POLICY_TRACK_FILE_LAST_WRITE_TIME = 256,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_LAST_WRITE_TIME = 512,
        CF_INSYNC_POLICY_TRACK_FILE_ALL = 5592335,
        CF_INSYNC_POLICY_TRACK_DIRECTORY_ALL = 11184880,
        CF_INSYNC_POLICY_TRACK_ALL = 16777215,
        CF_INSYNC_POLICY_PRESERVE_INSYNC_FOR_SYNC_ENGINE = -2147483648,
    };
    enum class CF_IN_SYNC_STATE : int32_t
    {
        CF_IN_SYNC_STATE_NOT_IN_SYNC = 0,
        CF_IN_SYNC_STATE_IN_SYNC = 1,
    };
    enum class CF_OPEN_FILE_FLAGS : int32_t
    {
        CF_OPEN_FILE_FLAG_NONE = 0,
        CF_OPEN_FILE_FLAG_EXCLUSIVE = 1,
        CF_OPEN_FILE_FLAG_WRITE_ACCESS = 2,
        CF_OPEN_FILE_FLAG_DELETE_ACCESS = 4,
        CF_OPEN_FILE_FLAG_FOREGROUND = 8,
    };
    enum class CF_OPERATION_ACK_DATA_FLAGS : int32_t
    {
        CF_OPERATION_ACK_DATA_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_ACK_DEHYDRATE_FLAGS : int32_t
    {
        CF_OPERATION_ACK_DEHYDRATE_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_ACK_DELETE_FLAGS : int32_t
    {
        CF_OPERATION_ACK_DELETE_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_ACK_RENAME_FLAGS : int32_t
    {
        CF_OPERATION_ACK_RENAME_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_RESTART_HYDRATION_FLAGS : int32_t
    {
        CF_OPERATION_RESTART_HYDRATION_FLAG_NONE = 0,
        CF_OPERATION_RESTART_HYDRATION_FLAG_MARK_IN_SYNC = 1,
    };
    enum class CF_OPERATION_RETRIEVE_DATA_FLAGS : int32_t
    {
        CF_OPERATION_RETRIEVE_DATA_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_TRANSFER_DATA_FLAGS : int32_t
    {
        CF_OPERATION_TRANSFER_DATA_FLAG_NONE = 0,
    };
    enum class CF_OPERATION_TRANSFER_PLACEHOLDERS_FLAGS : int32_t
    {
        CF_OPERATION_TRANSFER_PLACEHOLDERS_FLAG_NONE = 0,
        CF_OPERATION_TRANSFER_PLACEHOLDERS_FLAG_STOP_ON_ERROR = 1,
        CF_OPERATION_TRANSFER_PLACEHOLDERS_FLAG_DISABLE_ON_DEMAND_POPULATION = 2,
    };
    enum class CF_OPERATION_TYPE : int32_t
    {
        CF_OPERATION_TYPE_TRANSFER_DATA = 0,
        CF_OPERATION_TYPE_RETRIEVE_DATA = 1,
        CF_OPERATION_TYPE_ACK_DATA = 2,
        CF_OPERATION_TYPE_RESTART_HYDRATION = 3,
        CF_OPERATION_TYPE_TRANSFER_PLACEHOLDERS = 4,
        CF_OPERATION_TYPE_ACK_DEHYDRATE = 5,
        CF_OPERATION_TYPE_ACK_DELETE = 6,
        CF_OPERATION_TYPE_ACK_RENAME = 7,
    };
    enum class CF_PIN_STATE : int32_t
    {
        CF_PIN_STATE_UNSPECIFIED = 0,
        CF_PIN_STATE_PINNED = 1,
        CF_PIN_STATE_UNPINNED = 2,
        CF_PIN_STATE_EXCLUDED = 3,
        CF_PIN_STATE_INHERIT = 4,
    };
    enum class CF_PLACEHOLDER_CREATE_FLAGS : int32_t
    {
        CF_PLACEHOLDER_CREATE_FLAG_NONE = 0,
        CF_PLACEHOLDER_CREATE_FLAG_DISABLE_ON_DEMAND_POPULATION = 1,
        CF_PLACEHOLDER_CREATE_FLAG_MARK_IN_SYNC = 2,
        CF_PLACEHOLDER_CREATE_FLAG_SUPERSEDE = 4,
        CF_PLACEHOLDER_CREATE_FLAG_ALWAYS_FULL = 8,
    };
    enum class CF_PLACEHOLDER_INFO_CLASS : int32_t
    {
        CF_PLACEHOLDER_INFO_BASIC = 0,
        CF_PLACEHOLDER_INFO_STANDARD = 1,
    };
    enum class CF_PLACEHOLDER_MANAGEMENT_POLICY : int32_t
    {
        CF_PLACEHOLDER_MANAGEMENT_POLICY_DEFAULT = 0,
        CF_PLACEHOLDER_MANAGEMENT_POLICY_CREATE_UNRESTRICTED = 1,
        CF_PLACEHOLDER_MANAGEMENT_POLICY_CONVERT_TO_UNRESTRICTED = 2,
        CF_PLACEHOLDER_MANAGEMENT_POLICY_UPDATE_UNRESTRICTED = 4,
    };
    enum class CF_PLACEHOLDER_RANGE_INFO_CLASS : int32_t
    {
        CF_PLACEHOLDER_RANGE_INFO_ONDISK = 1,
        CF_PLACEHOLDER_RANGE_INFO_VALIDATED = 2,
        CF_PLACEHOLDER_RANGE_INFO_MODIFIED = 3,
    };
    enum class CF_PLACEHOLDER_STATE : int32_t
    {
        CF_PLACEHOLDER_STATE_NO_STATES = 0,
        CF_PLACEHOLDER_STATE_PLACEHOLDER = 1,
        CF_PLACEHOLDER_STATE_SYNC_ROOT = 2,
        CF_PLACEHOLDER_STATE_ESSENTIAL_PROP_PRESENT = 4,
        CF_PLACEHOLDER_STATE_IN_SYNC = 8,
        CF_PLACEHOLDER_STATE_PARTIAL = 16,
        CF_PLACEHOLDER_STATE_PARTIALLY_ON_DISK = 32,
        CF_PLACEHOLDER_STATE_INVALID = -1,
    };
    enum class CF_POPULATION_POLICY_MODIFIER : int32_t
    {
        CF_POPULATION_POLICY_MODIFIER_NONE = 0,
    };
    enum class CF_POPULATION_POLICY_PRIMARY : int32_t
    {
        CF_POPULATION_POLICY_PARTIAL = 0,
        CF_POPULATION_POLICY_FULL = 2,
        CF_POPULATION_POLICY_ALWAYS_FULL = 3,
    };
    enum class CF_REGISTER_FLAGS : int32_t
    {
        CF_REGISTER_FLAG_NONE = 0,
        CF_REGISTER_FLAG_UPDATE = 1,
        CF_REGISTER_FLAG_DISABLE_ON_DEMAND_POPULATION_ON_ROOT = 2,
        CF_REGISTER_FLAG_MARK_IN_SYNC_ON_ROOT = 4,
    };
    enum class CF_REVERT_FLAGS : int32_t
    {
        CF_REVERT_FLAG_NONE = 0,
    };
    enum class CF_SET_IN_SYNC_FLAGS : int32_t
    {
        CF_SET_IN_SYNC_FLAG_NONE = 0,
    };
    enum class CF_SET_PIN_FLAGS : int32_t
    {
        CF_SET_PIN_FLAG_NONE = 0,
        CF_SET_PIN_FLAG_RECURSE = 1,
        CF_SET_PIN_FLAG_RECURSE_ONLY = 2,
        CF_SET_PIN_FLAG_RECURSE_STOP_ON_ERROR = 4,
    };
    enum class CF_SYNC_PROVIDER_STATUS : int32_t
    {
        CF_PROVIDER_STATUS_DISCONNECTED = 0,
        CF_PROVIDER_STATUS_IDLE = 1,
        CF_PROVIDER_STATUS_POPULATE_NAMESPACE = 2,
        CF_PROVIDER_STATUS_POPULATE_METADATA = 4,
        CF_PROVIDER_STATUS_POPULATE_CONTENT = 8,
        CF_PROVIDER_STATUS_SYNC_INCREMENTAL = 16,
        CF_PROVIDER_STATUS_SYNC_FULL = 32,
        CF_PROVIDER_STATUS_CONNECTIVITY_LOST = 64,
        CF_PROVIDER_STATUS_CLEAR_FLAGS = -2147483648,
        CF_PROVIDER_STATUS_TERMINATED = -1073741823,
        CF_PROVIDER_STATUS_ERROR = -1073741822,
    };
    enum class CF_SYNC_ROOT_INFO_CLASS : int32_t
    {
        CF_SYNC_ROOT_INFO_BASIC = 0,
        CF_SYNC_ROOT_INFO_STANDARD = 1,
        CF_SYNC_ROOT_INFO_PROVIDER = 2,
    };
    enum class CF_UPDATE_FLAGS : int32_t
    {
        CF_UPDATE_FLAG_NONE = 0,
        CF_UPDATE_FLAG_VERIFY_IN_SYNC = 1,
        CF_UPDATE_FLAG_MARK_IN_SYNC = 2,
        CF_UPDATE_FLAG_DEHYDRATE = 4,
        CF_UPDATE_FLAG_ENABLE_ON_DEMAND_POPULATION = 8,
        CF_UPDATE_FLAG_DISABLE_ON_DEMAND_POPULATION = 16,
        CF_UPDATE_FLAG_REMOVE_FILE_IDENTITY = 32,
        CF_UPDATE_FLAG_CLEAR_IN_SYNC = 64,
        CF_UPDATE_FLAG_REMOVE_PROPERTY = 128,
        CF_UPDATE_FLAG_PASSTHROUGH_FS_METADATA = 256,
        CF_UPDATE_FLAG_ALWAYS_FULL = 512,
        CF_UPDATE_FLAG_ALLOW_PARTIAL = 1024,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct CF_CALLBACK_INFO;
    struct CF_CALLBACK_PARAMETERS;
    struct CF_CALLBACK_REGISTRATION;
    struct CF_CONNECTION_KEY__;
    struct CF_FILE_RANGE;
    struct CF_FS_METADATA;
    struct CF_HYDRATION_POLICY;
    struct CF_HYDRATION_POLICY_MODIFIER_USHORT;
    struct CF_HYDRATION_POLICY_PRIMARY_USHORT;
    struct CF_OPERATION_INFO;
    struct CF_OPERATION_PARAMETERS;
    struct CF_PLACEHOLDER_BASIC_INFO;
    struct CF_PLACEHOLDER_CREATE_INFO;
    struct CF_PLACEHOLDER_STANDARD_INFO;
    struct CF_PLATFORM_INFO;
    struct CF_POPULATION_POLICY;
    struct CF_POPULATION_POLICY_MODIFIER_USHORT;
    struct CF_POPULATION_POLICY_PRIMARY_USHORT;
    struct CF_PROCESS_INFO;
    struct CF_SYNC_POLICIES;
    struct CF_SYNC_REGISTRATION;
    struct CF_SYNC_ROOT_BASIC_INFO;
    struct CF_SYNC_ROOT_PROVIDER_INFO;
    struct CF_SYNC_ROOT_STANDARD_INFO;
    struct CF_SYNC_STATUS;
#pragma endregion forward_declarations

#pragma region delegates
    using CF_CALLBACK = void __stdcall(Windows::Win32::CloudFilters::CF_CALLBACK_INFO*, Windows::Win32::CloudFilters::CF_CALLBACK_PARAMETERS*);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
#pragma endregion guids

}
#endif
