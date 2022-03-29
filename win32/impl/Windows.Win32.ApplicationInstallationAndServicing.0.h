// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_ApplicationInstallationAndServicing_0_H
#define WIN32_Windows_Win32_ApplicationInstallationAndServicing_0_H
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::ApplicationInstallationAndServicing
{
#pragma region enums
    enum class ACTCTX_COMPATIBILITY_ELEMENT_TYPE : int32_t
    {
        ACTCTX_COMPATIBILITY_ELEMENT_TYPE_UNKNOWN = 0,
        ACTCTX_COMPATIBILITY_ELEMENT_TYPE_OS = 1,
        ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MITIGATION = 2,
        ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MAXVERSIONTESTED = 3,
    };
    enum class ACTCTX_REQUESTED_RUN_LEVEL : int32_t
    {
        ACTCTX_RUN_LEVEL_UNSPECIFIED = 0,
        ACTCTX_RUN_LEVEL_AS_INVOKER = 1,
        ACTCTX_RUN_LEVEL_HIGHEST_AVAILABLE = 2,
        ACTCTX_RUN_LEVEL_REQUIRE_ADMIN = 3,
        ACTCTX_RUN_LEVEL_NUMBERS = 4,
    };
    enum class ADVERTISEFLAGS : int32_t
    {
        ADVERTISEFLAGS_MACHINEASSIGN = 0,
        ADVERTISEFLAGS_USERASSIGN = 1,
    };
    enum class ASM_CMP_FLAGS : int32_t
    {
        ASM_CMPF_NAME = 1,
        ASM_CMPF_MAJOR_VERSION = 2,
        ASM_CMPF_MINOR_VERSION = 4,
        ASM_CMPF_BUILD_NUMBER = 8,
        ASM_CMPF_REVISION_NUMBER = 16,
        ASM_CMPF_PUBLIC_KEY_TOKEN = 32,
        ASM_CMPF_CULTURE = 64,
        ASM_CMPF_CUSTOM = 128,
        ASM_CMPF_ALL = 255,
        ASM_CMPF_DEFAULT = 256,
    };
    enum class ASM_DISPLAY_FLAGS : int32_t
    {
        ASM_DISPLAYF_VERSION = 1,
        ASM_DISPLAYF_CULTURE = 2,
        ASM_DISPLAYF_PUBLIC_KEY_TOKEN = 4,
        ASM_DISPLAYF_PUBLIC_KEY = 8,
        ASM_DISPLAYF_CUSTOM = 16,
        ASM_DISPLAYF_PROCESSORARCHITECTURE = 32,
        ASM_DISPLAYF_LANGUAGEID = 64,
    };
    enum class ASM_NAME : int32_t
    {
        ASM_NAME_PUBLIC_KEY = 0,
        ASM_NAME_PUBLIC_KEY_TOKEN = 1,
        ASM_NAME_HASH_VALUE = 2,
        ASM_NAME_NAME = 3,
        ASM_NAME_MAJOR_VERSION = 4,
        ASM_NAME_MINOR_VERSION = 5,
        ASM_NAME_BUILD_NUMBER = 6,
        ASM_NAME_REVISION_NUMBER = 7,
        ASM_NAME_CULTURE = 8,
        ASM_NAME_PROCESSOR_ID_ARRAY = 9,
        ASM_NAME_OSINFO_ARRAY = 10,
        ASM_NAME_HASH_ALGID = 11,
        ASM_NAME_ALIAS = 12,
        ASM_NAME_CODEBASE_URL = 13,
        ASM_NAME_CODEBASE_LASTMOD = 14,
        ASM_NAME_NULL_PUBLIC_KEY = 15,
        ASM_NAME_NULL_PUBLIC_KEY_TOKEN = 16,
        ASM_NAME_CUSTOM = 17,
        ASM_NAME_NULL_CUSTOM = 18,
        ASM_NAME_MVID = 19,
        ASM_NAME_MAX_PARAMS = 20,
    };
    enum class CREATE_ASM_NAME_OBJ_FLAGS : int32_t
    {
        CANOF_PARSE_DISPLAY_NAME = 1,
        CANOF_SET_DEFAULT_VALUES = 2,
    };
    enum class INSTALLFEATUREATTRIBUTE : int32_t
    {
        INSTALLFEATUREATTRIBUTE_FAVORLOCAL = 1,
        INSTALLFEATUREATTRIBUTE_FAVORSOURCE = 2,
        INSTALLFEATUREATTRIBUTE_FOLLOWPARENT = 4,
        INSTALLFEATUREATTRIBUTE_FAVORADVERTISE = 8,
        INSTALLFEATUREATTRIBUTE_DISALLOWADVERTISE = 16,
        INSTALLFEATUREATTRIBUTE_NOUNSUPPORTEDADVERTISE = 32,
    };
    enum class INSTALLLEVEL : int32_t
    {
        INSTALLLEVEL_DEFAULT = 0,
        INSTALLLEVEL_MINIMUM = 1,
        INSTALLLEVEL_MAXIMUM = 65535,
    };
    enum class INSTALLLOGATTRIBUTES : int32_t
    {
        INSTALLLOGATTRIBUTES_APPEND = 1,
        INSTALLLOGATTRIBUTES_FLUSHEACHLINE = 2,
    };
    enum class INSTALLMESSAGE : int32_t
    {
        INSTALLMESSAGE_FATALEXIT = 0,
        INSTALLMESSAGE_ERROR = 16777216,
        INSTALLMESSAGE_WARNING = 33554432,
        INSTALLMESSAGE_USER = 50331648,
        INSTALLMESSAGE_INFO = 67108864,
        INSTALLMESSAGE_FILESINUSE = 83886080,
        INSTALLMESSAGE_RESOLVESOURCE = 100663296,
        INSTALLMESSAGE_OUTOFDISKSPACE = 117440512,
        INSTALLMESSAGE_ACTIONSTART = 134217728,
        INSTALLMESSAGE_ACTIONDATA = 150994944,
        INSTALLMESSAGE_PROGRESS = 167772160,
        INSTALLMESSAGE_COMMONDATA = 184549376,
        INSTALLMESSAGE_INITIALIZE = 201326592,
        INSTALLMESSAGE_TERMINATE = 218103808,
        INSTALLMESSAGE_SHOWDIALOG = 234881024,
        INSTALLMESSAGE_PERFORMANCE = 251658240,
        INSTALLMESSAGE_RMFILESINUSE = 419430400,
        INSTALLMESSAGE_INSTALLSTART = 436207616,
        INSTALLMESSAGE_INSTALLEND = 452984832,
    };
    enum class INSTALLMODE : int32_t
    {
        INSTALLMODE_NODETECTION_ANY = -4,
        INSTALLMODE_NOSOURCERESOLUTION = -3,
        INSTALLMODE_NODETECTION = -2,
        INSTALLMODE_EXISTING = -1,
        INSTALLMODE_DEFAULT = 0,
    };
    enum class INSTALLSTATE : int32_t
    {
        INSTALLSTATE_NOTUSED = -7,
        INSTALLSTATE_BADCONFIG = -6,
        INSTALLSTATE_INCOMPLETE = -5,
        INSTALLSTATE_SOURCEABSENT = -4,
        INSTALLSTATE_MOREDATA = -3,
        INSTALLSTATE_INVALIDARG = -2,
        INSTALLSTATE_UNKNOWN = -1,
        INSTALLSTATE_BROKEN = 0,
        INSTALLSTATE_ADVERTISED = 1,
        INSTALLSTATE_REMOVED = 1,
        INSTALLSTATE_ABSENT = 2,
        INSTALLSTATE_LOCAL = 3,
        INSTALLSTATE_SOURCE = 4,
        INSTALLSTATE_DEFAULT = 5,
    };
    enum class INSTALLTYPE : int32_t
    {
        INSTALLTYPE_DEFAULT = 0,
        INSTALLTYPE_NETWORK_IMAGE = 1,
        INSTALLTYPE_SINGLE_INSTANCE = 2,
    };
    enum class INSTALLUILEVEL : int32_t
    {
        INSTALLUILEVEL_NOCHANGE = 0,
        INSTALLUILEVEL_DEFAULT = 1,
        INSTALLUILEVEL_NONE = 2,
        INSTALLUILEVEL_BASIC = 3,
        INSTALLUILEVEL_REDUCED = 4,
        INSTALLUILEVEL_FULL = 5,
        INSTALLUILEVEL_ENDDIALOG = 128,
        INSTALLUILEVEL_PROGRESSONLY = 64,
        INSTALLUILEVEL_HIDECANCEL = 32,
        INSTALLUILEVEL_SOURCERESONLY = 256,
        INSTALLUILEVEL_UACONLY = 512,
    };
    enum class MSIADVERTISEOPTIONFLAGS : int32_t
    {
        MSIADVERTISEOPTIONFLAGS_INSTANCE = 1,
    };
    enum class MSIARCHITECTUREFLAGS : int32_t
    {
        MSIARCHITECTUREFLAGS_X86 = 1,
        MSIARCHITECTUREFLAGS_IA64 = 2,
        MSIARCHITECTUREFLAGS_AMD64 = 4,
        MSIARCHITECTUREFLAGS_ARM = 8,
    };
    enum class MSICODE : int32_t
    {
        MSICODE_PRODUCT = 0,
        MSICODE_PATCH = 1073741824,
    };
    enum class MSICOLINFO : int32_t
    {
        MSICOLINFO_NAMES = 0,
        MSICOLINFO_TYPES = 1,
    };
    enum class MSICONDITION : int32_t
    {
        MSICONDITION_FALSE = 0,
        MSICONDITION_TRUE = 1,
        MSICONDITION_NONE = 2,
        MSICONDITION_ERROR = 3,
    };
    enum class MSICOSTTREE : int32_t
    {
        MSICOSTTREE_SELFONLY = 0,
        MSICOSTTREE_CHILDREN = 1,
        MSICOSTTREE_PARENTS = 2,
        MSICOSTTREE_RESERVED = 3,
    };
    enum class MSIDBERROR : int32_t
    {
        MSIDBERROR_INVALIDARG = -3,
        MSIDBERROR_MOREDATA = -2,
        MSIDBERROR_FUNCTIONERROR = -1,
        MSIDBERROR_NOERROR = 0,
        MSIDBERROR_DUPLICATEKEY = 1,
        MSIDBERROR_REQUIRED = 2,
        MSIDBERROR_BADLINK = 3,
        MSIDBERROR_OVERFLOW = 4,
        MSIDBERROR_UNDERFLOW = 5,
        MSIDBERROR_NOTINSET = 6,
        MSIDBERROR_BADVERSION = 7,
        MSIDBERROR_BADCASE = 8,
        MSIDBERROR_BADGUID = 9,
        MSIDBERROR_BADWILDCARD = 10,
        MSIDBERROR_BADIDENTIFIER = 11,
        MSIDBERROR_BADLANGUAGE = 12,
        MSIDBERROR_BADFILENAME = 13,
        MSIDBERROR_BADPATH = 14,
        MSIDBERROR_BADCONDITION = 15,
        MSIDBERROR_BADFORMATTED = 16,
        MSIDBERROR_BADTEMPLATE = 17,
        MSIDBERROR_BADDEFAULTDIR = 18,
        MSIDBERROR_BADREGPATH = 19,
        MSIDBERROR_BADCUSTOMSOURCE = 20,
        MSIDBERROR_BADPROPERTY = 21,
        MSIDBERROR_MISSINGDATA = 22,
        MSIDBERROR_BADCATEGORY = 23,
        MSIDBERROR_BADKEYTABLE = 24,
        MSIDBERROR_BADMAXMINVALUES = 25,
        MSIDBERROR_BADCABINET = 26,
        MSIDBERROR_BADSHORTCUT = 27,
        MSIDBERROR_STRINGOVERFLOW = 28,
        MSIDBERROR_BADLOCALIZEATTRIB = 29,
    };
    enum class MSIDBSTATE : int32_t
    {
        MSIDBSTATE_ERROR = -1,
        MSIDBSTATE_READ = 0,
        MSIDBSTATE_WRITE = 1,
    };
    enum class MSIINSTALLCONTEXT : int32_t
    {
        MSIINSTALLCONTEXT_FIRSTVISIBLE = 0,
        MSIINSTALLCONTEXT_NONE = 0,
        MSIINSTALLCONTEXT_USERMANAGED = 1,
        MSIINSTALLCONTEXT_USERUNMANAGED = 2,
        MSIINSTALLCONTEXT_MACHINE = 4,
        MSIINSTALLCONTEXT_ALL = 7,
        MSIINSTALLCONTEXT_ALLUSERMANAGED = 8,
    };
    enum class MSIMODIFY : int32_t
    {
        MSIMODIFY_SEEK = -1,
        MSIMODIFY_REFRESH = 0,
        MSIMODIFY_INSERT = 1,
        MSIMODIFY_UPDATE = 2,
        MSIMODIFY_ASSIGN = 3,
        MSIMODIFY_REPLACE = 4,
        MSIMODIFY_MERGE = 5,
        MSIMODIFY_DELETE = 6,
        MSIMODIFY_INSERT_TEMPORARY = 7,
        MSIMODIFY_VALIDATE = 8,
        MSIMODIFY_VALIDATE_NEW = 9,
        MSIMODIFY_VALIDATE_FIELD = 10,
        MSIMODIFY_VALIDATE_DELETE = 11,
    };
    enum class MSIOPENPACKAGEFLAGS : int32_t
    {
        MSIOPENPACKAGEFLAGS_IGNOREMACHINESTATE = 1,
    };
    enum class MSIPATCHDATATYPE : int32_t
    {
        MSIPATCH_DATATYPE_PATCHFILE = 0,
        MSIPATCH_DATATYPE_XMLPATH = 1,
        MSIPATCH_DATATYPE_XMLBLOB = 2,
    };
    enum class MSIPATCHSTATE : int32_t
    {
        MSIPATCHSTATE_INVALID = 0,
        MSIPATCHSTATE_APPLIED = 1,
        MSIPATCHSTATE_SUPERSEDED = 2,
        MSIPATCHSTATE_OBSOLETED = 4,
        MSIPATCHSTATE_REGISTERED = 8,
        MSIPATCHSTATE_ALL = 15,
    };
    enum class MSIRUNMODE : int32_t
    {
        MSIRUNMODE_ADMIN = 0,
        MSIRUNMODE_ADVERTISE = 1,
        MSIRUNMODE_MAINTENANCE = 2,
        MSIRUNMODE_ROLLBACKENABLED = 3,
        MSIRUNMODE_LOGENABLED = 4,
        MSIRUNMODE_OPERATIONS = 5,
        MSIRUNMODE_REBOOTATEND = 6,
        MSIRUNMODE_REBOOTNOW = 7,
        MSIRUNMODE_CABINET = 8,
        MSIRUNMODE_SOURCESHORTNAMES = 9,
        MSIRUNMODE_TARGETSHORTNAMES = 10,
        MSIRUNMODE_RESERVED11 = 11,
        MSIRUNMODE_WINDOWS9X = 12,
        MSIRUNMODE_ZAWENABLED = 13,
        MSIRUNMODE_RESERVED14 = 14,
        MSIRUNMODE_RESERVED15 = 15,
        MSIRUNMODE_SCHEDULED = 16,
        MSIRUNMODE_ROLLBACK = 17,
        MSIRUNMODE_COMMIT = 18,
    };
    enum class MSISOURCETYPE : int32_t
    {
        MSISOURCETYPE_UNKNOWN = 0,
        MSISOURCETYPE_NETWORK = 1,
        MSISOURCETYPE_URL = 2,
        MSISOURCETYPE_MEDIA = 4,
    };
    enum class MSITRANSACTION : int32_t
    {
        MSITRANSACTION_CHAIN_EMBEDDEDUI = 1,
        MSITRANSACTION_JOIN_EXISTING_EMBEDDEDUI = 2,
    };
    enum class MSITRANSACTIONSTATE : int32_t
    {
        MSITRANSACTIONSTATE_ROLLBACK = 0,
        MSITRANSACTIONSTATE_COMMIT = 1,
    };
    enum class MSITRANSFORM_ERROR : int32_t
    {
        MSITRANSFORM_ERROR_ADDEXISTINGROW = 1,
        MSITRANSFORM_ERROR_DELMISSINGROW = 2,
        MSITRANSFORM_ERROR_ADDEXISTINGTABLE = 4,
        MSITRANSFORM_ERROR_DELMISSINGTABLE = 8,
        MSITRANSFORM_ERROR_UPDATEMISSINGROW = 16,
        MSITRANSFORM_ERROR_CHANGECODEPAGE = 32,
        MSITRANSFORM_ERROR_VIEWTRANSFORM = 256,
    };
    enum class MSITRANSFORM_VALIDATE : int32_t
    {
        MSITRANSFORM_VALIDATE_LANGUAGE = 1,
        MSITRANSFORM_VALIDATE_PRODUCT = 2,
        MSITRANSFORM_VALIDATE_PLATFORM = 4,
        MSITRANSFORM_VALIDATE_MAJORVERSION = 8,
        MSITRANSFORM_VALIDATE_MINORVERSION = 16,
        MSITRANSFORM_VALIDATE_UPDATEVERSION = 32,
        MSITRANSFORM_VALIDATE_NEWLESSBASEVERSION = 64,
        MSITRANSFORM_VALIDATE_NEWLESSEQUALBASEVERSION = 128,
        MSITRANSFORM_VALIDATE_NEWEQUALBASEVERSION = 256,
        MSITRANSFORM_VALIDATE_NEWGREATEREQUALBASEVERSION = 512,
        MSITRANSFORM_VALIDATE_NEWGREATERBASEVERSION = 1024,
        MSITRANSFORM_VALIDATE_UPGRADECODE = 2048,
    };
    enum class REINSTALLMODE : int32_t
    {
        REINSTALLMODE_REPAIR = 1,
        REINSTALLMODE_FILEMISSING = 2,
        REINSTALLMODE_FILEOLDERVERSION = 4,
        REINSTALLMODE_FILEEQUALVERSION = 8,
        REINSTALLMODE_FILEEXACT = 16,
        REINSTALLMODE_FILEVERIFY = 32,
        REINSTALLMODE_FILEREPLACE = 64,
        REINSTALLMODE_MACHINEDATA = 128,
        REINSTALLMODE_USERDATA = 256,
        REINSTALLMODE_SHORTCUT = 512,
        REINSTALLMODE_PACKAGE = 1024,
    };
    enum class RESULTTYPES : int32_t
    {
        ieUnknown = 0,
        ieError = 1,
        ieWarning = 2,
        ieInfo = 3,
    };
    enum class SCRIPTFLAGS : int32_t
    {
        SCRIPTFLAGS_CACHEINFO = 1,
        SCRIPTFLAGS_SHORTCUTS = 4,
        SCRIPTFLAGS_MACHINEASSIGN = 8,
        SCRIPTFLAGS_REGDATA_CNFGINFO = 32,
        SCRIPTFLAGS_VALIDATE_TRANSFORMS_LIST = 64,
        SCRIPTFLAGS_REGDATA_CLASSINFO = 128,
        SCRIPTFLAGS_REGDATA_EXTENSIONINFO = 256,
        SCRIPTFLAGS_REGDATA_APPINFO = 384,
        SCRIPTFLAGS_REGDATA = 416,
    };
    enum class STATUSTYPES : int32_t
    {
        ieStatusGetCUB = 0,
        ieStatusICECount = 1,
        ieStatusMerge = 2,
        ieStatusSummaryInfo = 3,
        ieStatusCreateEngine = 4,
        ieStatusStarting = 5,
        ieStatusRunICE = 6,
        ieStatusShutdown = 7,
        ieStatusSuccess = 8,
        ieStatusFail = 9,
        ieStatusCancel = 10,
    };
    enum class USERINFOSTATE : int32_t
    {
        USERINFOSTATE_MOREDATA = -3,
        USERINFOSTATE_INVALIDARG = -2,
        USERINFOSTATE_UNKNOWN = -1,
        USERINFOSTATE_ABSENT = 0,
        USERINFOSTATE_PRESENT = 1,
    };
    enum class __MIDL_IAssemblyName_0002 : int32_t
    {
        ASM_BINDF_FORCE_CACHE_INSTALL = 1,
        ASM_BINDF_RFS_INTEGRITY_CHECK = 2,
        ASM_BINDF_RFS_MODULE_CHECK = 4,
        ASM_BINDF_BINPATH_PROBE_ONLY = 8,
        ASM_BINDF_SHARED_BINPATH_HINT = 16,
        ASM_BINDF_PARENT_ASM_HINT = 32,
    };
    enum class msmErrorType : int32_t
    {
        msmErrorLanguageUnsupported = 1,
        msmErrorLanguageFailed = 2,
        msmErrorExclusion = 3,
        msmErrorTableMerge = 4,
        msmErrorResequenceMerge = 5,
        msmErrorFileCreate = 6,
        msmErrorDirCreate = 7,
        msmErrorFeatureRequired = 8,
    };
    enum class tagINSTALLOGMODE : int32_t
    {
        INSTALLLOGMODE_FATALEXIT = 1,
        INSTALLLOGMODE_ERROR = 2,
        INSTALLLOGMODE_WARNING = 4,
        INSTALLLOGMODE_USER = 8,
        INSTALLLOGMODE_INFO = 16,
        INSTALLLOGMODE_RESOLVESOURCE = 64,
        INSTALLLOGMODE_OUTOFDISKSPACE = 128,
        INSTALLLOGMODE_ACTIONSTART = 256,
        INSTALLLOGMODE_ACTIONDATA = 512,
        INSTALLLOGMODE_COMMONDATA = 2048,
        INSTALLLOGMODE_PROPERTYDUMP = 1024,
        INSTALLLOGMODE_VERBOSE = 4096,
        INSTALLLOGMODE_EXTRADEBUG = 8192,
        INSTALLLOGMODE_LOGONLYONERROR = 16384,
        INSTALLLOGMODE_LOGPERFORMANCE = 32768,
        INSTALLLOGMODE_PROGRESS = 1024,
        INSTALLLOGMODE_INITIALIZE = 4096,
        INSTALLLOGMODE_TERMINATE = 8192,
        INSTALLLOGMODE_SHOWDIALOG = 16384,
        INSTALLLOGMODE_FILESINUSE = 32,
        INSTALLLOGMODE_RMFILESINUSE = 33554432,
        INSTALLLOGMODE_INSTALLSTART = 67108864,
        INSTALLLOGMODE_INSTALLEND = 134217728,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct ACTCTXA;
    struct ACTCTXW;
    struct ACTCTX_SECTION_KEYED_DATA;
    struct ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
    struct ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
    struct ACTIVATION_CONTEXT_DETAILED_INFORMATION;
    struct ACTIVATION_CONTEXT_QUERY_INDEX;
    struct ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
    struct ASSEMBLY_FILE_DETAILED_INFORMATION;
    struct ASSEMBLY_INFO;
    struct CABINET_INFO_A;
    struct CABINET_INFO_W;
    struct COMPATIBILITY_CONTEXT_ELEMENT;
    struct FILEPATHS_A;
    struct FILEPATHS_SIGNERINFO_A;
    struct FILEPATHS_SIGNERINFO_W;
    struct FILEPATHS_W;
    struct FILE_IN_CABINET_INFO_A;
    struct FILE_IN_CABINET_INFO_W;
    struct FUSION_INSTALL_REFERENCE;
    struct INFCONTEXT;
    struct MSIFILEHASHINFO;
    struct MSIPATCHSEQUENCEINFOA;
    struct MSIPATCHSEQUENCEINFOW;
    struct PMSIHANDLE;
    struct PROTECTED_FILE_DATA;
    struct SOURCE_MEDIA_A;
    struct SOURCE_MEDIA_W;
    struct SP_ALTPLATFORM_INFO_V1;
    struct SP_ALTPLATFORM_INFO_V2;
    struct SP_FILE_COPY_PARAMS_A;
    struct SP_FILE_COPY_PARAMS_W;
    struct SP_INF_INFORMATION;
    struct SP_INF_SIGNER_INFO_V1_A;
    struct SP_INF_SIGNER_INFO_V1_W;
    struct SP_INF_SIGNER_INFO_V2_A;
    struct SP_INF_SIGNER_INFO_V2_W;
    struct SP_ORIGINAL_FILE_INFO_A;
    struct SP_ORIGINAL_FILE_INFO_W;
    struct SP_REGISTER_CONTROL_STATUSA;
    struct SP_REGISTER_CONTROL_STATUSW;
    struct IAssemblyCache;
    struct IAssemblyCacheItem;
    struct IAssemblyName;
    struct IEnumMsmDependency;
    struct IEnumMsmError;
    struct IEnumMsmString;
    struct IMsmDependencies;
    struct IMsmDependency;
    struct IMsmError;
    struct IMsmErrors;
    struct IMsmGetFiles;
    struct IMsmMerge;
    struct IMsmStrings;
    struct IValidate;
    struct MsmMerge;
#pragma endregion forward_declarations

#pragma region delegates
    using LPDISPLAYVAL = Windows::Win32::SystemServices::BOOL __stdcall(void*, Windows::Win32::ApplicationInstallationAndServicing::RESULTTYPES, uint16_t*, uint16_t*, uint16_t*);
    using LPEVALCOMCALLBACK = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::ApplicationInstallationAndServicing::STATUSTYPES, uint16_t*, void*);
    using INSTALLUI_HANDLERA = int32_t __stdcall(void*, uint32_t, int8_t*);
    using INSTALLUI_HANDLERW = int32_t __stdcall(void*, uint32_t, uint16_t*);
    using INSTALLUI_HANDLER_RECORD = int32_t __stdcall(void*, uint32_t, uint32_t);
    using PINSTALLUI_HANDLER_RECORD = int32_t __stdcall();
    using PSP_FILE_CALLBACK_A = uint32_t __stdcall(void*, uint32_t, size_t, size_t);
    using PSP_FILE_CALLBACK_W = uint32_t __stdcall(void*, uint32_t, size_t, size_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IAssemblyCache>{ 0xE707DCDE,0xD1CD,0x11D2,{ 0xBA,0xB9,0x00,0xC0,0x4F,0x8E,0xCE,0xAE } }; // E707DCDE-D1CD-11D2-BAB9-00C04F8ECEAE
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IAssemblyCacheItem>{ 0x9E3AAEB4,0xD1CD,0x11D2,{ 0xBA,0xB9,0x00,0xC0,0x4F,0x8E,0xCE,0xAE } }; // 9E3AAEB4-D1CD-11D2-BAB9-00C04F8ECEAE
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IAssemblyName>{ 0xCD193BC0,0xB4BC,0x11D2,{ 0x98,0x33,0x00,0xC0,0x4F,0xC3,0x1D,0x2E } }; // CD193BC0-B4BC-11D2-9833-00C04FC31D2E
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IEnumMsmDependency>{ 0x0ADDA82C,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA82C-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IEnumMsmError>{ 0x0ADDA829,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA829-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IEnumMsmString>{ 0x0ADDA826,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA826-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmDependencies>{ 0x0ADDA82D,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA82D-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmDependency>{ 0x0ADDA82B,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA82B-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmError>{ 0x0ADDA828,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA828-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmErrors>{ 0x0ADDA82A,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA82A-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmGetFiles>{ 0x7041AE26,0x2D78,0x11D2,{ 0x88,0x8A,0x00,0xA0,0xC9,0x81,0xB0,0x15 } }; // 7041AE26-2D78-11D2-888A-00A0C981B015
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmMerge>{ 0x0ADDA82E,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA82E-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::IMsmStrings>{ 0x0ADDA827,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA827-2C26-11D2-AD65-00A0C9AF11A6
    template <> inline constexpr guid guid_v<Windows::Win32::ApplicationInstallationAndServicing::MsmMerge>{ 0x0ADDA830,0x2C26,0x11D2,{ 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6 } }; // 0ADDA830-2C26-11D2-AD65-00A0C9AF11A6
#pragma endregion guids

}
#endif