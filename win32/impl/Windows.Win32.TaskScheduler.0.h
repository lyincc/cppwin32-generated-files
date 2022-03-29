// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_TaskScheduler_0_H
#define WIN32_Windows_Win32_TaskScheduler_0_H
WIN32_EXPORT namespace win32::Windows::Win32::TaskScheduler
{
#pragma region enums
    enum class TASKPAGE : int32_t
    {
        TASKPAGE_TASK = 0,
        TASKPAGE_SCHEDULE = 1,
        TASKPAGE_SETTINGS = 2,
    };
    enum class TASK_ACTION_TYPE : int32_t
    {
        TASK_ACTION_EXEC = 0,
        TASK_ACTION_COM_HANDLER = 5,
        TASK_ACTION_SEND_EMAIL = 6,
        TASK_ACTION_SHOW_MESSAGE = 7,
    };
    enum class TASK_COMPATIBILITY : int32_t
    {
        TASK_COMPATIBILITY_AT = 0,
        TASK_COMPATIBILITY_V1 = 1,
        TASK_COMPATIBILITY_V2 = 2,
        TASK_COMPATIBILITY_V2_1 = 3,
        TASK_COMPATIBILITY_V2_2 = 4,
        TASK_COMPATIBILITY_V2_3 = 5,
        TASK_COMPATIBILITY_V2_4 = 6,
    };
    enum class TASK_CREATION : int32_t
    {
        TASK_VALIDATE_ONLY = 1,
        TASK_CREATE = 2,
        TASK_UPDATE = 4,
        TASK_CREATE_OR_UPDATE = 6,
        TASK_DISABLE = 8,
        TASK_DONT_ADD_PRINCIPAL_ACE = 16,
        TASK_IGNORE_REGISTRATION_TRIGGERS = 32,
    };
    enum class TASK_ENUM_FLAGS : int32_t
    {
        TASK_ENUM_HIDDEN = 1,
    };
    enum class TASK_INSTANCES_POLICY : int32_t
    {
        TASK_INSTANCES_PARALLEL = 0,
        TASK_INSTANCES_QUEUE = 1,
        TASK_INSTANCES_IGNORE_NEW = 2,
        TASK_INSTANCES_STOP_EXISTING = 3,
    };
    enum class TASK_LOGON_TYPE : int32_t
    {
        TASK_LOGON_NONE = 0,
        TASK_LOGON_PASSWORD = 1,
        TASK_LOGON_S4U = 2,
        TASK_LOGON_INTERACTIVE_TOKEN = 3,
        TASK_LOGON_GROUP = 4,
        TASK_LOGON_SERVICE_ACCOUNT = 5,
        TASK_LOGON_INTERACTIVE_TOKEN_OR_PASSWORD = 6,
    };
    enum class TASK_PROCESSTOKENSID_TYPE : int32_t
    {
        TASK_PROCESSTOKENSID_NONE = 0,
        TASK_PROCESSTOKENSID_UNRESTRICTED = 1,
        TASK_PROCESSTOKENSID_DEFAULT = 2,
    };
    enum class TASK_RUNLEVEL_TYPE : int32_t
    {
        TASK_RUNLEVEL_LUA = 0,
        TASK_RUNLEVEL_HIGHEST = 1,
    };
    enum class TASK_RUN_FLAGS : int32_t
    {
        TASK_RUN_NO_FLAGS = 0,
        TASK_RUN_AS_SELF = 1,
        TASK_RUN_IGNORE_CONSTRAINTS = 2,
        TASK_RUN_USE_SESSION_ID = 4,
        TASK_RUN_USER_SID = 8,
    };
    enum class TASK_SESSION_STATE_CHANGE_TYPE : int32_t
    {
        TASK_CONSOLE_CONNECT = 1,
        TASK_CONSOLE_DISCONNECT = 2,
        TASK_REMOTE_CONNECT = 3,
        TASK_REMOTE_DISCONNECT = 4,
        TASK_SESSION_LOCK = 7,
        TASK_SESSION_UNLOCK = 8,
    };
    enum class TASK_STATE : int32_t
    {
        TASK_STATE_UNKNOWN = 0,
        TASK_STATE_DISABLED = 1,
        TASK_STATE_QUEUED = 2,
        TASK_STATE_READY = 3,
        TASK_STATE_RUNNING = 4,
    };
    enum class TASK_TRIGGER_TYPE : int32_t
    {
        TASK_TIME_TRIGGER_ONCE = 0,
        TASK_TIME_TRIGGER_DAILY = 1,
        TASK_TIME_TRIGGER_WEEKLY = 2,
        TASK_TIME_TRIGGER_MONTHLYDATE = 3,
        TASK_TIME_TRIGGER_MONTHLYDOW = 4,
        TASK_EVENT_TRIGGER_ON_IDLE = 5,
        TASK_EVENT_TRIGGER_AT_SYSTEMSTART = 6,
        TASK_EVENT_TRIGGER_AT_LOGON = 7,
    };
    enum class TASK_TRIGGER_TYPE2 : int32_t
    {
        TASK_TRIGGER_EVENT = 0,
        TASK_TRIGGER_TIME = 1,
        TASK_TRIGGER_DAILY = 2,
        TASK_TRIGGER_WEEKLY = 3,
        TASK_TRIGGER_MONTHLY = 4,
        TASK_TRIGGER_MONTHLYDOW = 5,
        TASK_TRIGGER_IDLE = 6,
        TASK_TRIGGER_REGISTRATION = 7,
        TASK_TRIGGER_BOOT = 8,
        TASK_TRIGGER_LOGON = 9,
        TASK_TRIGGER_SESSION_STATE_CHANGE = 11,
        TASK_TRIGGER_CUSTOM_TRIGGER_01 = 12,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DAILY;
    struct MONTHLYDATE;
    struct MONTHLYDOW;
    struct TASK_TRIGGER;
    union TRIGGER_TYPE_UNION;
    struct WEEKLY;
    struct IAction;
    struct IActionCollection;
    struct IBootTrigger;
    struct IComHandlerAction;
    struct IDailyTrigger;
    struct IEmailAction;
    struct IEnumWorkItems;
    struct IEventTrigger;
    struct IExecAction;
    struct IExecAction2;
    struct IIdleSettings;
    struct IIdleTrigger;
    struct ILogonTrigger;
    struct IMaintenanceSettings;
    struct IMonthlyDOWTrigger;
    struct IMonthlyTrigger;
    struct INetworkSettings;
    struct IPrincipal;
    struct IPrincipal2;
    struct IProvideTaskPage;
    struct IRegisteredTask;
    struct IRegisteredTaskCollection;
    struct IRegistrationInfo;
    struct IRegistrationTrigger;
    struct IRepetitionPattern;
    struct IRunningTask;
    struct IRunningTaskCollection;
    struct IScheduledWorkItem;
    struct ISessionStateChangeTrigger;
    struct IShowMessageAction;
    struct ITask;
    struct ITaskDefinition;
    struct ITaskFolder;
    struct ITaskFolderCollection;
    struct ITaskHandler;
    struct ITaskHandlerStatus;
    struct ITaskNamedValueCollection;
    struct ITaskNamedValuePair;
    struct ITaskScheduler;
    struct ITaskService;
    struct ITaskSettings;
    struct ITaskSettings2;
    struct ITaskSettings3;
    struct ITaskTrigger;
    struct ITaskVariables;
    struct ITimeTrigger;
    struct ITrigger;
    struct ITriggerCollection;
    struct IWeeklyTrigger;
    struct TaskHandlerPS;
    struct TaskHandlerStatusPS;
    struct TaskScheduler;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IAction>{ 0xBAE54997,0x48B1,0x4CBE,{ 0x99,0x65,0xD6,0xBE,0x26,0x3E,0xBE,0xA4 } }; // BAE54997-48B1-4CBE-9965-D6BE263EBEA4
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IActionCollection>{ 0x02820E19,0x7B98,0x4ED2,{ 0xB2,0xE8,0xFD,0xCC,0xCE,0xFF,0x61,0x9B } }; // 02820E19-7B98-4ED2-B2E8-FDCCCEFF619B
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IBootTrigger>{ 0x2A9C35DA,0xD357,0x41F4,{ 0xBB,0xC1,0x20,0x7A,0xC1,0xB1,0xF3,0xCB } }; // 2A9C35DA-D357-41F4-BBC1-207AC1B1F3CB
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IComHandlerAction>{ 0x6D2FD252,0x75C5,0x4F66,{ 0x90,0xBA,0x2A,0x7D,0x8C,0xC3,0x03,0x9F } }; // 6D2FD252-75C5-4F66-90BA-2A7D8CC3039F
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IDailyTrigger>{ 0x126C5CD8,0xB288,0x41D5,{ 0x8D,0xBF,0xE4,0x91,0x44,0x6A,0xDC,0x5C } }; // 126C5CD8-B288-41D5-8DBF-E491446ADC5C
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IEmailAction>{ 0x10F62C64,0x7E16,0x4314,{ 0xA0,0xC2,0x0C,0x36,0x83,0xF9,0x9D,0x40 } }; // 10F62C64-7E16-4314-A0C2-0C3683F99D40
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IEnumWorkItems>{ 0x148BD528,0xA2AB,0x11CE,{ 0xB1,0x1F,0x00,0xAA,0x00,0x53,0x05,0x03 } }; // 148BD528-A2AB-11CE-B11F-00AA00530503
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IEventTrigger>{ 0xD45B0167,0x9653,0x4EEF,{ 0xB9,0x4F,0x07,0x32,0xCA,0x7A,0xF2,0x51 } }; // D45B0167-9653-4EEF-B94F-0732CA7AF251
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IExecAction>{ 0x4C3D624D,0xFD6B,0x49A3,{ 0xB9,0xB7,0x09,0xCB,0x3C,0xD3,0xF0,0x47 } }; // 4C3D624D-FD6B-49A3-B9B7-09CB3CD3F047
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IExecAction2>{ 0xF2A82542,0xBDA5,0x4E6B,{ 0x91,0x43,0xE2,0xBF,0x4F,0x89,0x87,0xB6 } }; // F2A82542-BDA5-4E6B-9143-E2BF4F8987B6
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IIdleSettings>{ 0x84594461,0x0053,0x4342,{ 0xA8,0xFD,0x08,0x8F,0xAB,0xF1,0x1F,0x32 } }; // 84594461-0053-4342-A8FD-088FABF11F32
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IIdleTrigger>{ 0xD537D2B0,0x9FB3,0x4D34,{ 0x97,0x39,0x1F,0xF5,0xCE,0x7B,0x1E,0xF3 } }; // D537D2B0-9FB3-4D34-9739-1FF5CE7B1EF3
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ILogonTrigger>{ 0x72DADE38,0xFAE4,0x4B3E,{ 0xBA,0xF4,0x5D,0x00,0x9A,0xF0,0x2B,0x1C } }; // 72DADE38-FAE4-4B3E-BAF4-5D009AF02B1C
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IMaintenanceSettings>{ 0xA6024FA8,0x9652,0x4ADB,{ 0xA6,0xBF,0x5C,0xFC,0xD8,0x77,0xA7,0xBA } }; // A6024FA8-9652-4ADB-A6BF-5CFCD877A7BA
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IMonthlyDOWTrigger>{ 0x77D025A3,0x90FA,0x43AA,{ 0xB5,0x2E,0xCD,0xA5,0x49,0x9B,0x94,0x6A } }; // 77D025A3-90FA-43AA-B52E-CDA5499B946A
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IMonthlyTrigger>{ 0x97C45EF1,0x6B02,0x4A1A,{ 0x9C,0x0E,0x1E,0xBF,0xBA,0x15,0x00,0xAC } }; // 97C45EF1-6B02-4A1A-9C0E-1EBFBA1500AC
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::INetworkSettings>{ 0x9F7DEA84,0xC30B,0x4245,{ 0x80,0xB6,0x00,0xE9,0xF6,0x46,0xF1,0xB4 } }; // 9F7DEA84-C30B-4245-80B6-00E9F646F1B4
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IPrincipal>{ 0xD98D51E5,0xC9B4,0x496A,{ 0xA9,0xC1,0x18,0x98,0x02,0x61,0xCF,0x0F } }; // D98D51E5-C9B4-496A-A9C1-18980261CF0F
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IPrincipal2>{ 0x248919AE,0xE345,0x4A6D,{ 0x8A,0xEB,0xE0,0xD3,0x16,0x5C,0x90,0x4E } }; // 248919AE-E345-4A6D-8AEB-E0D3165C904E
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IProvideTaskPage>{ 0x4086658A,0xCBBB,0x11CF,{ 0xB6,0x04,0x00,0xC0,0x4F,0xD8,0xD5,0x65 } }; // 4086658A-CBBB-11CF-B604-00C04FD8D565
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRegisteredTask>{ 0x9C86F320,0xDEE3,0x4DD1,{ 0xB9,0x72,0xA3,0x03,0xF2,0x6B,0x06,0x1E } }; // 9C86F320-DEE3-4DD1-B972-A303F26B061E
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRegisteredTaskCollection>{ 0x86627EB4,0x42A7,0x41E4,{ 0xA4,0xD9,0xAC,0x33,0xA7,0x2F,0x2D,0x52 } }; // 86627EB4-42A7-41E4-A4D9-AC33A72F2D52
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRegistrationInfo>{ 0x416D8B73,0xCB41,0x4EA1,{ 0x80,0x5C,0x9B,0xE9,0xA5,0xAC,0x4A,0x74 } }; // 416D8B73-CB41-4EA1-805C-9BE9A5AC4A74
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRegistrationTrigger>{ 0x4C8FEC3A,0xC218,0x4E0C,{ 0xB2,0x3D,0x62,0x90,0x24,0xDB,0x91,0xA2 } }; // 4C8FEC3A-C218-4E0C-B23D-629024DB91A2
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRepetitionPattern>{ 0x7FB9ACF1,0x26BE,0x400E,{ 0x85,0xB5,0x29,0x4B,0x9C,0x75,0xDF,0xD6 } }; // 7FB9ACF1-26BE-400E-85B5-294B9C75DFD6
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRunningTask>{ 0x653758FB,0x7B9A,0x4F1E,{ 0xA4,0x71,0xBE,0xEB,0x8E,0x9B,0x83,0x4E } }; // 653758FB-7B9A-4F1E-A471-BEEB8E9B834E
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IRunningTaskCollection>{ 0x6A67614B,0x6828,0x4FEC,{ 0xAA,0x54,0x6D,0x52,0xE8,0xF1,0xF2,0xDB } }; // 6A67614B-6828-4FEC-AA54-6D52E8F1F2DB
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IScheduledWorkItem>{ 0xA6B952F0,0xA4B1,0x11D0,{ 0x99,0x7D,0x00,0xAA,0x00,0x68,0x87,0xEC } }; // A6B952F0-A4B1-11D0-997D-00AA006887EC
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ISessionStateChangeTrigger>{ 0x754DA71B,0x4385,0x4475,{ 0x9D,0xD9,0x59,0x82,0x94,0xFA,0x36,0x41 } }; // 754DA71B-4385-4475-9DD9-598294FA3641
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IShowMessageAction>{ 0x505E9E68,0xAF89,0x46B8,{ 0xA3,0x0F,0x56,0x16,0x2A,0x83,0xD5,0x37 } }; // 505E9E68-AF89-46B8-A30F-56162A83D537
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITask>{ 0x148BD524,0xA2AB,0x11CE,{ 0xB1,0x1F,0x00,0xAA,0x00,0x53,0x05,0x03 } }; // 148BD524-A2AB-11CE-B11F-00AA00530503
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskDefinition>{ 0xF5BC8FC5,0x536D,0x4F77,{ 0xB8,0x52,0xFB,0xC1,0x35,0x6F,0xDE,0xB6 } }; // F5BC8FC5-536D-4F77-B852-FBC1356FDEB6
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskFolder>{ 0x8CFAC062,0xA080,0x4C15,{ 0x9A,0x88,0xAA,0x7C,0x2A,0xF8,0x0D,0xFC } }; // 8CFAC062-A080-4C15-9A88-AA7C2AF80DFC
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskFolderCollection>{ 0x79184A66,0x8664,0x423F,{ 0x97,0xF1,0x63,0x73,0x56,0xA5,0xD8,0x12 } }; // 79184A66-8664-423F-97F1-637356A5D812
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskHandler>{ 0x839D7762,0x5121,0x4009,{ 0x92,0x34,0x4F,0x0D,0x19,0x39,0x4F,0x04 } }; // 839D7762-5121-4009-9234-4F0D19394F04
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskHandlerStatus>{ 0xEAEC7A8F,0x27A0,0x4DDC,{ 0x86,0x75,0x14,0x72,0x6A,0x01,0xA3,0x8A } }; // EAEC7A8F-27A0-4DDC-8675-14726A01A38A
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskNamedValueCollection>{ 0xB4EF826B,0x63C3,0x46E4,{ 0xA5,0x04,0xEF,0x69,0xE4,0xF7,0xEA,0x4D } }; // B4EF826B-63C3-46E4-A504-EF69E4F7EA4D
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskNamedValuePair>{ 0x39038068,0x2B46,0x4AFD,{ 0x86,0x62,0x7B,0xB6,0xF8,0x68,0xD2,0x21 } }; // 39038068-2B46-4AFD-8662-7BB6F868D221
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskScheduler>{ 0x148BD527,0xA2AB,0x11CE,{ 0xB1,0x1F,0x00,0xAA,0x00,0x53,0x05,0x03 } }; // 148BD527-A2AB-11CE-B11F-00AA00530503
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskService>{ 0x2FABA4C7,0x4DA9,0x4013,{ 0x96,0x97,0x20,0xCC,0x3F,0xD4,0x0F,0x85 } }; // 2FABA4C7-4DA9-4013-9697-20CC3FD40F85
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskSettings>{ 0x8FD4711D,0x2D02,0x4C8C,{ 0x87,0xE3,0xEF,0xF6,0x99,0xDE,0x12,0x7E } }; // 8FD4711D-2D02-4C8C-87E3-EFF699DE127E
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskSettings2>{ 0x2C05C3F0,0x6EED,0x4C05,{ 0xA1,0x5F,0xED,0x7D,0x7A,0x98,0xA3,0x69 } }; // 2C05C3F0-6EED-4C05-A15F-ED7D7A98A369
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskSettings3>{ 0x0AD9D0D7,0x0C7F,0x4EBB,{ 0x9A,0x5F,0xD1,0xC6,0x48,0xDC,0xA5,0x28 } }; // 0AD9D0D7-0C7F-4EBB-9A5F-D1C648DCA528
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskTrigger>{ 0x148BD52B,0xA2AB,0x11CE,{ 0xB1,0x1F,0x00,0xAA,0x00,0x53,0x05,0x03 } }; // 148BD52B-A2AB-11CE-B11F-00AA00530503
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITaskVariables>{ 0x3E4C9351,0xD966,0x4B8B,{ 0xBB,0x87,0xCE,0xBA,0x68,0xBB,0x01,0x07 } }; // 3E4C9351-D966-4B8B-BB87-CEBA68BB0107
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITimeTrigger>{ 0xB45747E0,0xEBA7,0x4276,{ 0x9F,0x29,0x85,0xC5,0xBB,0x30,0x00,0x06 } }; // B45747E0-EBA7-4276-9F29-85C5BB300006
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITrigger>{ 0x09941815,0xEA89,0x4B5B,{ 0x89,0xE0,0x2A,0x77,0x38,0x01,0xFA,0xC3 } }; // 09941815-EA89-4B5B-89E0-2A773801FAC3
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::ITriggerCollection>{ 0x85DF5081,0x1B24,0x4F32,{ 0x87,0x8A,0xD9,0xD1,0x4D,0xF4,0xCB,0x77 } }; // 85DF5081-1B24-4F32-878A-D9D14DF4CB77
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::IWeeklyTrigger>{ 0x5038FC98,0x82FF,0x436D,{ 0x87,0x28,0xA5,0x12,0xA5,0x7C,0x9D,0xC1 } }; // 5038FC98-82FF-436D-8728-A512A57C9DC1
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::TaskHandlerPS>{ 0xF2A69DB7,0xDA2C,0x4352,{ 0x90,0x66,0x86,0xFE,0xE6,0xDA,0xCA,0xC9 } }; // F2A69DB7-DA2C-4352-9066-86FEE6DACAC9
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::TaskHandlerStatusPS>{ 0x9F15266D,0xD7BA,0x48F0,{ 0x93,0xC1,0xE6,0x89,0x5F,0x6F,0xE5,0xAC } }; // 9F15266D-D7BA-48F0-93C1-E6895F6FE5AC
    template <> inline constexpr guid guid_v<Windows::Win32::TaskScheduler::TaskScheduler>{ 0x0F87369F,0xA4E5,0x4CFC,{ 0xBD,0x3E,0x73,0xE6,0x15,0x45,0x72,0xDD } }; // 0F87369F-A4E5-4CFC-BD3E-73E6154572DD
#pragma endregion guids

}
#endif