// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Xps_0_H
#define WIN32_Windows_Win32_Xps_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Gdi
{
    struct HDC;
}
WIN32_EXPORT namespace win32::Windows::Win32::SystemServices
{
    struct BOOL;
}
WIN32_EXPORT namespace win32::Windows::Win32::Xps
{
#pragma region enums
    enum class EDefaultDevmodeType : int32_t
    {
        kUserDefaultDevmode = 0,
        kPrinterDefaultDevmode = 1,
    };
    enum class EPrintTicketScope : int32_t
    {
        kPTPageScope = 0,
        kPTDocumentScope = 1,
        kPTJobScope = 2,
    };
    enum class PrintDocumentPackageCompletion : int32_t
    {
        PrintDocumentPackageCompletion_InProgress = 0,
        PrintDocumentPackageCompletion_Completed = 1,
        PrintDocumentPackageCompletion_Canceled = 2,
        PrintDocumentPackageCompletion_Failed = 3,
    };
    enum class XPS_COLOR_INTERPOLATION : int32_t
    {
        XPS_COLOR_INTERPOLATION_SCRGBLINEAR = 1,
        XPS_COLOR_INTERPOLATION_SRGBLINEAR = 2,
    };
    enum class XPS_COLOR_TYPE : int32_t
    {
        XPS_COLOR_TYPE_SRGB = 1,
        XPS_COLOR_TYPE_SCRGB = 2,
        XPS_COLOR_TYPE_CONTEXT = 3,
    };
    enum class XPS_DASH_CAP : int32_t
    {
        XPS_DASH_CAP_FLAT = 1,
        XPS_DASH_CAP_ROUND = 2,
        XPS_DASH_CAP_SQUARE = 3,
        XPS_DASH_CAP_TRIANGLE = 4,
    };
    enum class XPS_DOCUMENT_TYPE : int32_t
    {
        XPS_DOCUMENT_TYPE_UNSPECIFIED = 1,
        XPS_DOCUMENT_TYPE_XPS = 2,
        XPS_DOCUMENT_TYPE_OPENXPS = 3,
    };
    enum class XPS_FILL_RULE : int32_t
    {
        XPS_FILL_RULE_EVENODD = 1,
        XPS_FILL_RULE_NONZERO = 2,
    };
    enum class XPS_FONT_EMBEDDING : int32_t
    {
        XPS_FONT_EMBEDDING_NORMAL = 1,
        XPS_FONT_EMBEDDING_OBFUSCATED = 2,
        XPS_FONT_EMBEDDING_RESTRICTED = 3,
        XPS_FONT_EMBEDDING_RESTRICTED_UNOBFUSCATED = 4,
    };
    enum class XPS_IMAGE_TYPE : int32_t
    {
        XPS_IMAGE_TYPE_JPEG = 1,
        XPS_IMAGE_TYPE_PNG = 2,
        XPS_IMAGE_TYPE_TIFF = 3,
        XPS_IMAGE_TYPE_WDP = 4,
        XPS_IMAGE_TYPE_JXR = 5,
    };
    enum class XPS_INTERLEAVING : int32_t
    {
        XPS_INTERLEAVING_OFF = 1,
        XPS_INTERLEAVING_ON = 2,
    };
    enum class XPS_LINE_CAP : int32_t
    {
        XPS_LINE_CAP_FLAT = 1,
        XPS_LINE_CAP_ROUND = 2,
        XPS_LINE_CAP_SQUARE = 3,
        XPS_LINE_CAP_TRIANGLE = 4,
    };
    enum class XPS_LINE_JOIN : int32_t
    {
        XPS_LINE_JOIN_MITER = 1,
        XPS_LINE_JOIN_BEVEL = 2,
        XPS_LINE_JOIN_ROUND = 3,
    };
    enum class XPS_OBJECT_TYPE : int32_t
    {
        XPS_OBJECT_TYPE_CANVAS = 1,
        XPS_OBJECT_TYPE_GLYPHS = 2,
        XPS_OBJECT_TYPE_PATH = 3,
        XPS_OBJECT_TYPE_MATRIX_TRANSFORM = 4,
        XPS_OBJECT_TYPE_GEOMETRY = 5,
        XPS_OBJECT_TYPE_SOLID_COLOR_BRUSH = 6,
        XPS_OBJECT_TYPE_IMAGE_BRUSH = 7,
        XPS_OBJECT_TYPE_LINEAR_GRADIENT_BRUSH = 8,
        XPS_OBJECT_TYPE_RADIAL_GRADIENT_BRUSH = 9,
        XPS_OBJECT_TYPE_VISUAL_BRUSH = 10,
    };
    enum class XPS_SEGMENT_STROKE_PATTERN : int32_t
    {
        XPS_SEGMENT_STROKE_PATTERN_ALL = 1,
        XPS_SEGMENT_STROKE_PATTERN_NONE = 2,
        XPS_SEGMENT_STROKE_PATTERN_MIXED = 3,
    };
    enum class XPS_SEGMENT_TYPE : int32_t
    {
        XPS_SEGMENT_TYPE_ARC_LARGE_CLOCKWISE = 1,
        XPS_SEGMENT_TYPE_ARC_LARGE_COUNTERCLOCKWISE = 2,
        XPS_SEGMENT_TYPE_ARC_SMALL_CLOCKWISE = 3,
        XPS_SEGMENT_TYPE_ARC_SMALL_COUNTERCLOCKWISE = 4,
        XPS_SEGMENT_TYPE_BEZIER = 5,
        XPS_SEGMENT_TYPE_LINE = 6,
        XPS_SEGMENT_TYPE_QUADRATIC_BEZIER = 7,
    };
    enum class XPS_SIGNATURE_STATUS : int32_t
    {
        XPS_SIGNATURE_STATUS_INCOMPLIANT = 1,
        XPS_SIGNATURE_STATUS_INCOMPLETE = 2,
        XPS_SIGNATURE_STATUS_BROKEN = 3,
        XPS_SIGNATURE_STATUS_QUESTIONABLE = 4,
        XPS_SIGNATURE_STATUS_VALID = 5,
    };
    enum class XPS_SIGN_FLAGS : int32_t
    {
        XPS_SIGN_FLAGS_NONE = 0,
        XPS_SIGN_FLAGS_IGNORE_MARKUP_COMPATIBILITY = 1,
    };
    enum class XPS_SIGN_POLICY : int32_t
    {
        XPS_SIGN_POLICY_NONE = 0,
        XPS_SIGN_POLICY_CORE_PROPERTIES = 1,
        XPS_SIGN_POLICY_SIGNATURE_RELATIONSHIPS = 2,
        XPS_SIGN_POLICY_PRINT_TICKET = 4,
        XPS_SIGN_POLICY_DISCARD_CONTROL = 8,
        XPS_SIGN_POLICY_ALL = 15,
    };
    enum class XPS_SPREAD_METHOD : int32_t
    {
        XPS_SPREAD_METHOD_PAD = 1,
        XPS_SPREAD_METHOD_REFLECT = 2,
        XPS_SPREAD_METHOD_REPEAT = 3,
    };
    enum class XPS_STYLE_SIMULATION : int32_t
    {
        XPS_STYLE_SIMULATION_NONE = 1,
        XPS_STYLE_SIMULATION_ITALIC = 2,
        XPS_STYLE_SIMULATION_BOLD = 3,
        XPS_STYLE_SIMULATION_BOLDITALIC = 4,
    };
    enum class XPS_THUMBNAIL_SIZE : int32_t
    {
        XPS_THUMBNAIL_SIZE_VERYSMALL = 1,
        XPS_THUMBNAIL_SIZE_SMALL = 2,
        XPS_THUMBNAIL_SIZE_MEDIUM = 3,
        XPS_THUMBNAIL_SIZE_LARGE = 4,
    };
    enum class XPS_TILE_MODE : int32_t
    {
        XPS_TILE_MODE_NONE = 1,
        XPS_TILE_MODE_TILE = 2,
        XPS_TILE_MODE_FLIPX = 3,
        XPS_TILE_MODE_FLIPY = 4,
        XPS_TILE_MODE_FLIPXY = 5,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct DEVMODEA;
    struct DOCINFOA;
    struct DOCINFOW;
    struct DRAWPATRECT;
    struct HPTPROVIDER__;
    struct PSFEATURE_CUSTPAPER;
    struct PSFEATURE_OUTPUT;
    struct PSINJECTDATA;
    struct PrintDocumentPackageStatus;
    struct XPS_COLOR;
    struct XPS_DASH;
    struct XPS_GLYPH_MAPPING;
    struct XPS_MATRIX;
    struct XPS_POINT;
    struct XPS_RECT;
    struct XPS_SIZE;
    struct IPrintDocumentPackageStatusEvent;
    struct IPrintDocumentPackageTarget;
    struct IPrintDocumentPackageTargetFactory;
    struct IXpsDocumentPackageTarget;
    struct IXpsDocumentPackageTarget3D;
    struct IXpsOMBrush;
    struct IXpsOMCanvas;
    struct IXpsOMColorProfileResource;
    struct IXpsOMColorProfileResourceCollection;
    struct IXpsOMCoreProperties;
    struct IXpsOMDashCollection;
    struct IXpsOMDictionary;
    struct IXpsOMDocument;
    struct IXpsOMDocumentCollection;
    struct IXpsOMDocumentSequence;
    struct IXpsOMDocumentStructureResource;
    struct IXpsOMFontResource;
    struct IXpsOMFontResourceCollection;
    struct IXpsOMGeometry;
    struct IXpsOMGeometryFigure;
    struct IXpsOMGeometryFigureCollection;
    struct IXpsOMGlyphs;
    struct IXpsOMGlyphsEditor;
    struct IXpsOMGradientBrush;
    struct IXpsOMGradientStop;
    struct IXpsOMGradientStopCollection;
    struct IXpsOMImageBrush;
    struct IXpsOMImageResource;
    struct IXpsOMImageResourceCollection;
    struct IXpsOMLinearGradientBrush;
    struct IXpsOMMatrixTransform;
    struct IXpsOMNameCollection;
    struct IXpsOMObjectFactory;
    struct IXpsOMObjectFactory1;
    struct IXpsOMPackage;
    struct IXpsOMPackage1;
    struct IXpsOMPackageTarget;
    struct IXpsOMPackageWriter;
    struct IXpsOMPackageWriter3D;
    struct IXpsOMPage;
    struct IXpsOMPage1;
    struct IXpsOMPageReference;
    struct IXpsOMPageReferenceCollection;
    struct IXpsOMPart;
    struct IXpsOMPartResources;
    struct IXpsOMPartUriCollection;
    struct IXpsOMPath;
    struct IXpsOMPrintTicketResource;
    struct IXpsOMRadialGradientBrush;
    struct IXpsOMRemoteDictionaryResource;
    struct IXpsOMRemoteDictionaryResource1;
    struct IXpsOMRemoteDictionaryResourceCollection;
    struct IXpsOMResource;
    struct IXpsOMShareable;
    struct IXpsOMSignatureBlockResource;
    struct IXpsOMSignatureBlockResourceCollection;
    struct IXpsOMSolidColorBrush;
    struct IXpsOMStoryFragmentsResource;
    struct IXpsOMThumbnailGenerator;
    struct IXpsOMTileBrush;
    struct IXpsOMVisual;
    struct IXpsOMVisualBrush;
    struct IXpsOMVisualCollection;
    struct IXpsSignature;
    struct IXpsSignatureBlock;
    struct IXpsSignatureBlockCollection;
    struct IXpsSignatureCollection;
    struct IXpsSignatureManager;
    struct IXpsSignatureRequest;
    struct IXpsSignatureRequestCollection;
    struct IXpsSigningOptions;
    struct PrintDocumentPackageTarget;
    struct PrintDocumentPackageTargetFactory;
    struct XpsOMObjectFactory;
    struct XpsOMThumbnailGenerator;
    struct XpsSignatureManager;
#pragma endregion forward_declarations

#pragma region delegates
    using ABORTPROC = Windows::Win32::SystemServices::BOOL __stdcall(Windows::Win32::Gdi::HDC, int32_t);
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IPrintDocumentPackageStatusEvent>{ 0xED90C8AD,0x5C34,0x4D05,{ 0xA1,0xEC,0x0E,0x8A,0x9B,0x3A,0xD7,0xAF } }; // ED90C8AD-5C34-4D05-A1EC-0E8A9B3AD7AF
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IPrintDocumentPackageTarget>{ 0x1B8EFEC4,0x3019,0x4C27,{ 0x96,0x4E,0x36,0x72,0x02,0x15,0x69,0x06 } }; // 1B8EFEC4-3019-4C27-964E-367202156906
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IPrintDocumentPackageTargetFactory>{ 0xD2959BF7,0xB31B,0x4A3D,{ 0x96,0x00,0x71,0x2E,0xB1,0x33,0x5B,0xA4 } }; // D2959BF7-B31B-4A3D-9600-712EB1335BA4
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsDocumentPackageTarget>{ 0x3B0B6D38,0x53AD,0x41DA,{ 0xB2,0x12,0xD3,0x76,0x37,0xA6,0x71,0x4E } }; // 3B0B6D38-53AD-41DA-B212-D37637A6714E
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsDocumentPackageTarget3D>{ 0x60BA71B8,0x3101,0x4984,{ 0x91,0x99,0xF4,0xEA,0x77,0x5F,0xF0,0x1D } }; // 60BA71B8-3101-4984-9199-F4EA775FF01D
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMBrush>{ 0x56A3F80C,0xEA4C,0x4187,{ 0xA5,0x7B,0xA2,0xA4,0x73,0xB2,0xB4,0x2B } }; // 56A3F80C-EA4C-4187-A57B-A2A473B2B42B
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMCanvas>{ 0x221D1452,0x331E,0x47C6,{ 0x87,0xE9,0x6C,0xCE,0xFB,0x9B,0x5B,0xA3 } }; // 221D1452-331E-47C6-87E9-6CCEFB9B5BA3
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMColorProfileResource>{ 0x67BD7D69,0x1EEF,0x4BB1,{ 0xB5,0xE7,0x6F,0x4F,0x87,0xBE,0x8A,0xBE } }; // 67BD7D69-1EEF-4BB1-B5E7-6F4F87BE8ABE
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMColorProfileResourceCollection>{ 0x12759630,0x5FBA,0x4283,{ 0x8F,0x7D,0xCC,0xA8,0x49,0x80,0x9E,0xDB } }; // 12759630-5FBA-4283-8F7D-CCA849809EDB
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMCoreProperties>{ 0x3340FE8F,0x4027,0x4AA1,{ 0x8F,0x5F,0xD3,0x5A,0xE4,0x5F,0xE5,0x97 } }; // 3340FE8F-4027-4AA1-8F5F-D35AE45FE597
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDashCollection>{ 0x081613F4,0x74EB,0x48F2,{ 0x83,0xB3,0x37,0xA9,0xCE,0x2D,0x7D,0xC6 } }; // 081613F4-74EB-48F2-83B3-37A9CE2D7DC6
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDictionary>{ 0x897C86B8,0x8EAF,0x4AE3,{ 0xBD,0xDE,0x56,0x41,0x9F,0xCF,0x42,0x36 } }; // 897C86B8-8EAF-4AE3-BDDE-56419FCF4236
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDocument>{ 0x2C2C94CB,0xAC5F,0x4254,{ 0x8E,0xE9,0x23,0x94,0x83,0x09,0xD9,0xF0 } }; // 2C2C94CB-AC5F-4254-8EE9-23948309D9F0
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDocumentCollection>{ 0xD1C87F0D,0xE947,0x4754,{ 0x8A,0x25,0x97,0x14,0x78,0xF7,0xE8,0x3E } }; // D1C87F0D-E947-4754-8A25-971478F7E83E
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDocumentSequence>{ 0x56492EB4,0xD8D5,0x425E,{ 0x82,0x56,0x4C,0x2B,0x64,0xAD,0x02,0x64 } }; // 56492EB4-D8D5-425E-8256-4C2B64AD0264
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMDocumentStructureResource>{ 0x85FEBC8A,0x6B63,0x48A9,{ 0xAF,0x07,0x70,0x64,0xE4,0xEC,0xFF,0x30 } }; // 85FEBC8A-6B63-48A9-AF07-7064E4ECFF30
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMFontResource>{ 0xA8C45708,0x47D9,0x4AF4,{ 0x8D,0x20,0x33,0xB4,0x8C,0x9B,0x84,0x85 } }; // A8C45708-47D9-4AF4-8D20-33B48C9B8485
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMFontResourceCollection>{ 0x70B4A6BB,0x88D4,0x4FA8,{ 0xAA,0xF9,0x6D,0x9C,0x59,0x6F,0xDB,0xAD } }; // 70B4A6BB-88D4-4FA8-AAF9-6D9C596FDBAD
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGeometry>{ 0x64FCF3D7,0x4D58,0x44BA,{ 0xAD,0x73,0xA1,0x3A,0xF6,0x49,0x20,0x72 } }; // 64FCF3D7-4D58-44BA-AD73-A13AF6492072
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGeometryFigure>{ 0xD410DC83,0x908C,0x443E,{ 0x89,0x47,0xB1,0x79,0x5D,0x3C,0x16,0x5A } }; // D410DC83-908C-443E-8947-B1795D3C165A
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGeometryFigureCollection>{ 0xFD48C3F3,0xA58E,0x4B5A,{ 0x88,0x26,0x1D,0xE5,0x4A,0xBE,0x72,0xB2 } }; // FD48C3F3-A58E-4B5A-8826-1DE54ABE72B2
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGlyphs>{ 0x819B3199,0x0A5A,0x4B64,{ 0xBE,0xC7,0xA9,0xE1,0x7E,0x78,0x0D,0xE2 } }; // 819B3199-0A5A-4B64-BEC7-A9E17E780DE2
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGlyphsEditor>{ 0xA5AB8616,0x5B16,0x4B9F,{ 0x96,0x29,0x89,0xB3,0x23,0xED,0x79,0x09 } }; // A5AB8616-5B16-4B9F-9629-89B323ED7909
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGradientBrush>{ 0xEDB59622,0x61A2,0x42C3,{ 0xBA,0xCE,0xAC,0xF2,0x28,0x6C,0x06,0xBF } }; // EDB59622-61A2-42C3-BACE-ACF2286C06BF
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGradientStop>{ 0x5CF4F5CC,0x3969,0x49B5,{ 0xA7,0x0A,0x55,0x50,0xB6,0x18,0xFE,0x49 } }; // 5CF4F5CC-3969-49B5-A70A-5550B618FE49
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMGradientStopCollection>{ 0xC9174C3A,0x3CD3,0x4319,{ 0xBD,0xA4,0x11,0xA3,0x93,0x92,0xCE,0xEF } }; // C9174C3A-3CD3-4319-BDA4-11A39392CEEF
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMImageBrush>{ 0x3DF0B466,0xD382,0x49EF,{ 0x85,0x50,0xDD,0x94,0xC8,0x02,0x42,0xE4 } }; // 3DF0B466-D382-49EF-8550-DD94C80242E4
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMImageResource>{ 0x3DB8417D,0xAE50,0x485E,{ 0x9A,0x44,0xD7,0x75,0x8F,0x78,0xA2,0x3F } }; // 3DB8417D-AE50-485E-9A44-D7758F78A23F
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMImageResourceCollection>{ 0x7A4A1A71,0x9CDE,0x4B71,{ 0xB3,0x3F,0x62,0xDE,0x84,0x3E,0xAB,0xFE } }; // 7A4A1A71-9CDE-4B71-B33F-62DE843EABFE
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMLinearGradientBrush>{ 0x005E279F,0xC30D,0x40FF,{ 0x93,0xEC,0x19,0x50,0xD3,0xC5,0x28,0xDB } }; // 005E279F-C30D-40FF-93EC-1950D3C528DB
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMMatrixTransform>{ 0xB77330FF,0xBB37,0x4501,{ 0xA9,0x3E,0xF1,0xB1,0xE5,0x0B,0xFC,0x46 } }; // B77330FF-BB37-4501-A93E-F1B1E50BFC46
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMNameCollection>{ 0x4BDDF8EC,0xC915,0x421B,{ 0xA1,0x66,0xD1,0x73,0xD2,0x56,0x53,0xD2 } }; // 4BDDF8EC-C915-421B-A166-D173D25653D2
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMObjectFactory>{ 0xF9B2A685,0xA50D,0x4FC2,{ 0xB7,0x64,0xB5,0x6E,0x09,0x3E,0xA0,0xCA } }; // F9B2A685-A50D-4FC2-B764-B56E093EA0CA
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMObjectFactory1>{ 0x0A91B617,0xD612,0x4181,{ 0xBF,0x7C,0xBE,0x58,0x24,0xE9,0xCC,0x8F } }; // 0A91B617-D612-4181-BF7C-BE5824E9CC8F
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPackage>{ 0x18C3DF65,0x81E1,0x4674,{ 0x91,0xDC,0xFC,0x45,0x2F,0x5A,0x41,0x6F } }; // 18C3DF65-81E1-4674-91DC-FC452F5A416F
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPackage1>{ 0x95A9435E,0x12BB,0x461B,{ 0x8E,0x7F,0xC6,0xAD,0xB0,0x4C,0xD9,0x6A } }; // 95A9435E-12BB-461B-8E7F-C6ADB04CD96A
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPackageTarget>{ 0x219A9DB0,0x4959,0x47D0,{ 0x80,0x34,0xB1,0xCE,0x84,0xF4,0x1A,0x4D } }; // 219A9DB0-4959-47D0-8034-B1CE84F41A4D
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPackageWriter>{ 0x4E2AA182,0xA443,0x42C6,{ 0xB4,0x1B,0x4F,0x8E,0x9D,0xE7,0x3F,0xF9 } }; // 4E2AA182-A443-42C6-B41B-4F8E9DE73FF9
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPackageWriter3D>{ 0xE8A45033,0x640E,0x43FA,{ 0x9B,0xDF,0xFD,0xDE,0xAA,0x31,0xC6,0xA0 } }; // E8A45033-640E-43FA-9BDF-FDDEAA31C6A0
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPage>{ 0xD3E18888,0xF120,0x4FEE,{ 0x8C,0x68,0x35,0x29,0x6E,0xAE,0x91,0xD4 } }; // D3E18888-F120-4FEE-8C68-35296EAE91D4
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPage1>{ 0x305B60EF,0x6892,0x4DDA,{ 0x9C,0xBB,0x3A,0xA6,0x59,0x74,0x50,0x8A } }; // 305B60EF-6892-4DDA-9CBB-3AA65974508A
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPageReference>{ 0xED360180,0x6F92,0x4998,{ 0x89,0x0D,0x2F,0x20,0x85,0x31,0xA0,0xA0 } }; // ED360180-6F92-4998-890D-2F208531A0A0
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPageReferenceCollection>{ 0xCA16BA4D,0xE7B9,0x45C5,{ 0x95,0x8B,0xF9,0x80,0x22,0x47,0x37,0x45 } }; // CA16BA4D-E7B9-45C5-958B-F98022473745
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPart>{ 0x74EB2F0B,0xA91E,0x4486,{ 0xAF,0xAC,0x0F,0xAB,0xEC,0xA3,0xDF,0xC6 } }; // 74EB2F0B-A91E-4486-AFAC-0FABECA3DFC6
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPartResources>{ 0xF4CF7729,0x4864,0x4275,{ 0x99,0xB3,0xA8,0x71,0x71,0x63,0xEC,0xAF } }; // F4CF7729-4864-4275-99B3-A8717163ECAF
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPartUriCollection>{ 0x57C650D4,0x067C,0x4893,{ 0x8C,0x33,0xF6,0x2A,0x06,0x33,0x73,0x0F } }; // 57C650D4-067C-4893-8C33-F62A0633730F
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPath>{ 0x37D38BB6,0x3EE9,0x4110,{ 0x93,0x12,0x14,0xB1,0x94,0x16,0x33,0x37 } }; // 37D38BB6-3EE9-4110-9312-14B194163337
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMPrintTicketResource>{ 0xE7FF32D2,0x34AA,0x499B,{ 0xBB,0xE9,0x9C,0xD4,0xEE,0x6C,0x59,0xF7 } }; // E7FF32D2-34AA-499B-BBE9-9CD4EE6C59F7
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMRadialGradientBrush>{ 0x75F207E5,0x08BF,0x413C,{ 0x96,0xB1,0xB8,0x2B,0x40,0x64,0x17,0x6B } }; // 75F207E5-08BF-413C-96B1-B82B4064176B
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMRemoteDictionaryResource>{ 0xC9BD7CD4,0xE16A,0x4BF8,{ 0x8C,0x84,0xC9,0x50,0xAF,0x7A,0x30,0x61 } }; // C9BD7CD4-E16A-4BF8-8C84-C950AF7A3061
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMRemoteDictionaryResource1>{ 0xBF8FC1D4,0x9D46,0x4141,{ 0xBA,0x5F,0x94,0xBB,0x92,0x50,0xD0,0x41 } }; // BF8FC1D4-9D46-4141-BA5F-94BB9250D041
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMRemoteDictionaryResourceCollection>{ 0x5C38DB61,0x7FEC,0x464A,{ 0x87,0xBD,0x41,0xE3,0xBE,0xF0,0x18,0xBE } }; // 5C38DB61-7FEC-464A-87BD-41E3BEF018BE
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMResource>{ 0xDA2AC0A2,0x73A2,0x4975,{ 0xAD,0x14,0x74,0x09,0x7C,0x3F,0xF3,0xA5 } }; // DA2AC0A2-73A2-4975-AD14-74097C3FF3A5
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMShareable>{ 0x7137398F,0x2FC1,0x454D,{ 0x8C,0x6A,0x2C,0x31,0x15,0xA1,0x6E,0xCE } }; // 7137398F-2FC1-454D-8C6A-2C3115A16ECE
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMSignatureBlockResource>{ 0x4776AD35,0x2E04,0x4357,{ 0x87,0x43,0xEB,0xF6,0xC1,0x71,0xA9,0x05 } }; // 4776AD35-2E04-4357-8743-EBF6C171A905
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMSignatureBlockResourceCollection>{ 0xAB8F5D8E,0x351B,0x4D33,{ 0xAA,0xED,0xFA,0x56,0xF0,0x02,0x29,0x31 } }; // AB8F5D8E-351B-4D33-AAED-FA56F0022931
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMSolidColorBrush>{ 0xA06F9F05,0x3BE9,0x4763,{ 0x98,0xA8,0x09,0x4F,0xC6,0x72,0xE4,0x88 } }; // A06F9F05-3BE9-4763-98A8-094FC672E488
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMStoryFragmentsResource>{ 0xC2B3CA09,0x0473,0x4282,{ 0x87,0xAE,0x17,0x80,0x86,0x32,0x23,0xF0 } }; // C2B3CA09-0473-4282-87AE-1780863223F0
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMThumbnailGenerator>{ 0x15B873D5,0x1971,0x41E8,{ 0x83,0xA3,0x65,0x78,0x40,0x30,0x64,0xC7 } }; // 15B873D5-1971-41E8-83A3-6578403064C7
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMTileBrush>{ 0x0FC2328D,0xD722,0x4A54,{ 0xB2,0xEC,0xBE,0x90,0x21,0x8A,0x78,0x9E } }; // 0FC2328D-D722-4A54-B2EC-BE90218A789E
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMVisual>{ 0xBC3E7333,0xFB0B,0x4AF3,{ 0xA8,0x19,0x0B,0x4E,0xAA,0xD0,0xD2,0xFD } }; // BC3E7333-FB0B-4AF3-A819-0B4EAAD0D2FD
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMVisualBrush>{ 0x97E294AF,0x5B37,0x46B4,{ 0x80,0x57,0x87,0x4D,0x2F,0x64,0x11,0x9B } }; // 97E294AF-5B37-46B4-8057-874D2F64119B
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsOMVisualCollection>{ 0x94D8ABDE,0xAB91,0x46A8,{ 0x82,0xB7,0xF5,0xB0,0x5E,0xF0,0x1A,0x96 } }; // 94D8ABDE-AB91-46A8-82B7-F5B05EF01A96
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignature>{ 0x6AE4C93E,0x1ADE,0x42FB,{ 0x89,0x8B,0x3A,0x56,0x58,0x28,0x48,0x57 } }; // 6AE4C93E-1ADE-42FB-898B-3A5658284857
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureBlock>{ 0x151FAC09,0x0B97,0x4AC6,{ 0xA3,0x23,0x5E,0x42,0x97,0xD4,0x32,0x2B } }; // 151FAC09-0B97-4AC6-A323-5E4297D4322B
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureBlockCollection>{ 0x23397050,0xFE99,0x467A,{ 0x8D,0xCE,0x92,0x37,0xF0,0x74,0xFF,0xE4 } }; // 23397050-FE99-467A-8DCE-9237F074FFE4
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureCollection>{ 0xA2D1D95D,0xADD2,0x4DFF,{ 0xAB,0x27,0x6B,0x9C,0x64,0x5F,0xF3,0x22 } }; // A2D1D95D-ADD2-4DFF-AB27-6B9C645FF322
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureManager>{ 0xD3E8D338,0xFDC4,0x4AFC,{ 0x80,0xB5,0xD5,0x32,0xA1,0x78,0x2E,0xE1 } }; // D3E8D338-FDC4-4AFC-80B5-D532A1782EE1
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureRequest>{ 0xAC58950B,0x7208,0x4B2D,{ 0xB2,0xC4,0x95,0x10,0x83,0xD3,0xB8,0xEB } }; // AC58950B-7208-4B2D-B2C4-951083D3B8EB
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSignatureRequestCollection>{ 0xF0253E68,0x9F19,0x412E,{ 0x9B,0x4F,0x54,0xD3,0xB0,0xAC,0x6C,0xD9 } }; // F0253E68-9F19-412E-9B4F-54D3B0AC6CD9
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::IXpsSigningOptions>{ 0x7718EAE4,0x3215,0x49BE,{ 0xAF,0x5B,0x59,0x4F,0xEF,0x7F,0xCF,0xA6 } }; // 7718EAE4-3215-49BE-AF5B-594FEF7FCFA6
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::PrintDocumentPackageTarget>{ 0x4842669E,0x9947,0x46EA,{ 0x8B,0xA2,0xD8,0xCC,0xE4,0x32,0xC2,0xCA } }; // 4842669E-9947-46EA-8BA2-D8CCE432C2CA
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::PrintDocumentPackageTargetFactory>{ 0x348EF17D,0x6C81,0x4982,{ 0x92,0xB4,0xEE,0x18,0x8A,0x43,0x86,0x7A } }; // 348EF17D-6C81-4982-92B4-EE188A43867A
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::XpsOMObjectFactory>{ 0xE974D26D,0x3D9B,0x4D47,{ 0x88,0xCC,0x38,0x72,0xF2,0xDC,0x35,0x85 } }; // E974D26D-3D9B-4D47-88CC-3872F2DC3585
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::XpsOMThumbnailGenerator>{ 0x7E4A23E2,0xB969,0x4761,{ 0xBE,0x35,0x1A,0x8C,0xED,0x58,0xE3,0x23 } }; // 7E4A23E2-B969-4761-BE35-1A8CED58E323
    template <> inline constexpr guid guid_v<Windows::Win32::Xps::XpsSignatureManager>{ 0xB0C43320,0x2315,0x44A2,{ 0xB7,0x0A,0x09,0x43,0xA1,0x40,0xA8,0xEE } }; // B0C43320-2315-44A2-B70A-0943A140A8EE
#pragma endregion guids

}
#endif