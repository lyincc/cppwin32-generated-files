// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Packaging_0_H
#define WIN32_Windows_Win32_Packaging_0_H
WIN32_EXPORT namespace win32::Windows::Win32::Packaging
{
#pragma region enums
    enum class OPC_CANONICALIZATION_METHOD : int32_t
    {
        OPC_CANONICALIZATION_NONE = 0,
        OPC_CANONICALIZATION_C14N = 1,
        OPC_CANONICALIZATION_C14N_WITH_COMMENTS = 2,
    };
    enum class OPC_CERTIFICATE_EMBEDDING_OPTION : int32_t
    {
        OPC_CERTIFICATE_IN_CERTIFICATE_PART = 0,
        OPC_CERTIFICATE_IN_SIGNATURE_PART = 1,
        OPC_CERTIFICATE_NOT_EMBEDDED = 2,
    };
    enum class OPC_COMPRESSION_OPTIONS : int32_t
    {
        OPC_COMPRESSION_NONE = -1,
        OPC_COMPRESSION_NORMAL = 0,
        OPC_COMPRESSION_MAXIMUM = 1,
        OPC_COMPRESSION_FAST = 2,
        OPC_COMPRESSION_SUPERFAST = 3,
    };
    enum class OPC_READ_FLAGS : int32_t
    {
        OPC_READ_DEFAULT = 0,
        OPC_VALIDATE_ON_LOAD = 1,
        OPC_CACHE_ON_ACCESS = 2,
    };
    enum class OPC_RELATIONSHIPS_SIGNING_OPTION : int32_t
    {
        OPC_RELATIONSHIP_SIGN_USING_SELECTORS = 0,
        OPC_RELATIONSHIP_SIGN_PART = 1,
    };
    enum class OPC_RELATIONSHIP_SELECTOR : int32_t
    {
        OPC_RELATIONSHIP_SELECT_BY_ID = 0,
        OPC_RELATIONSHIP_SELECT_BY_TYPE = 1,
    };
    enum class OPC_SIGNATURE_TIME_FORMAT : int32_t
    {
        OPC_SIGNATURE_TIME_FORMAT_MILLISECONDS = 0,
        OPC_SIGNATURE_TIME_FORMAT_SECONDS = 1,
        OPC_SIGNATURE_TIME_FORMAT_MINUTES = 2,
        OPC_SIGNATURE_TIME_FORMAT_DAYS = 3,
        OPC_SIGNATURE_TIME_FORMAT_MONTHS = 4,
        OPC_SIGNATURE_TIME_FORMAT_YEARS = 5,
    };
    enum class OPC_SIGNATURE_VALIDATION_RESULT : int32_t
    {
        OPC_SIGNATURE_VALID = 0,
        OPC_SIGNATURE_INVALID = -1,
    };
    enum class OPC_STREAM_IO_MODE : int32_t
    {
        OPC_STREAM_IO_READ = 1,
        OPC_STREAM_IO_WRITE = 2,
    };
    enum class OPC_URI_TARGET_MODE : int32_t
    {
        OPC_URI_TARGET_MODE_INTERNAL = 0,
        OPC_URI_TARGET_MODE_EXTERNAL = 1,
    };
    enum class OPC_WRITE_FLAGS : int32_t
    {
        OPC_WRITE_DEFAULT = 0,
        OPC_WRITE_FORCE_ZIP32 = 1,
    };
#pragma endregion enums

#pragma region forward_declarations
    struct IOpcCertificateEnumerator;
    struct IOpcCertificateSet;
    struct IOpcDigitalSignature;
    struct IOpcDigitalSignatureEnumerator;
    struct IOpcDigitalSignatureManager;
    struct IOpcFactory;
    struct IOpcPackage;
    struct IOpcPart;
    struct IOpcPartEnumerator;
    struct IOpcPartSet;
    struct IOpcPartUri;
    struct IOpcRelationship;
    struct IOpcRelationshipEnumerator;
    struct IOpcRelationshipSelector;
    struct IOpcRelationshipSelectorEnumerator;
    struct IOpcRelationshipSelectorSet;
    struct IOpcRelationshipSet;
    struct IOpcSignatureCustomObject;
    struct IOpcSignatureCustomObjectEnumerator;
    struct IOpcSignatureCustomObjectSet;
    struct IOpcSignaturePartReference;
    struct IOpcSignaturePartReferenceEnumerator;
    struct IOpcSignaturePartReferenceSet;
    struct IOpcSignatureReference;
    struct IOpcSignatureReferenceEnumerator;
    struct IOpcSignatureReferenceSet;
    struct IOpcSignatureRelationshipReference;
    struct IOpcSignatureRelationshipReferenceEnumerator;
    struct IOpcSignatureRelationshipReferenceSet;
    struct IOpcSigningOptions;
    struct IOpcUri;
    struct OpcFactory;
#pragma endregion forward_declarations

#pragma region delegates
#pragma endregion delegates

}
namespace win32::_impl_
{
#pragma region guids
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcCertificateEnumerator>{ 0x85131937,0x8F24,0x421F,{ 0xB4,0x39,0x59,0xAB,0x24,0xD1,0x40,0xB8 } }; // 85131937-8F24-421F-B439-59AB24D140B8
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcCertificateSet>{ 0x56EA4325,0x8E2D,0x4167,{ 0xB1,0xA4,0xE4,0x86,0xD2,0x4C,0x8F,0xA7 } }; // 56EA4325-8E2D-4167-B1A4-E486D24C8FA7
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcDigitalSignature>{ 0x52AB21DD,0x1CD0,0x4949,{ 0xBC,0x80,0x0C,0x12,0x32,0xD0,0x0C,0xB4 } }; // 52AB21DD-1CD0-4949-BC80-0C1232D00CB4
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcDigitalSignatureEnumerator>{ 0x967B6882,0x0BA3,0x4358,{ 0xB9,0xE7,0xB6,0x4C,0x75,0x06,0x3C,0x5E } }; // 967B6882-0BA3-4358-B9E7-B64C75063C5E
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcDigitalSignatureManager>{ 0xD5E62A0B,0x696D,0x462F,{ 0x94,0xDF,0x72,0xE3,0x3C,0xEF,0x26,0x59 } }; // D5E62A0B-696D-462F-94DF-72E33CEF2659
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcFactory>{ 0x6D0B4446,0xCD73,0x4AB3,{ 0x94,0xF4,0x8C,0xCD,0xF6,0x11,0x61,0x54 } }; // 6D0B4446-CD73-4AB3-94F4-8CCDF6116154
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcPackage>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x70 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE70
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcPart>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x71 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE71
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcPartEnumerator>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x75 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE75
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcPartSet>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x73 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE73
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcPartUri>{ 0x7D3BABE7,0x88B2,0x46BA,{ 0x85,0xCB,0x42,0x03,0xCB,0x01,0x6C,0x87 } }; // 7D3BABE7-88B2-46BA-85CB-4203CB016C87
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationship>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x72 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE72
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationshipEnumerator>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x76 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE76
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationshipSelector>{ 0xF8F26C7F,0xB28F,0x4899,{ 0x84,0xC8,0x5D,0x56,0x39,0xED,0xE7,0x5F } }; // F8F26C7F-B28F-4899-84C8-5D5639EDE75F
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationshipSelectorEnumerator>{ 0x5E50A181,0xA91B,0x48AC,{ 0x88,0xD2,0xBC,0xA3,0xD8,0xF8,0xC0,0xB1 } }; // 5E50A181-A91B-48AC-88D2-BCA3D8F8C0B1
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationshipSelectorSet>{ 0x6E34C269,0xA4D3,0x47C0,{ 0xB5,0xC4,0x87,0xFF,0x2B,0x3B,0x61,0x36 } }; // 6E34C269-A4D3-47C0-B5C4-87FF2B3B6136
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcRelationshipSet>{ 0x42195949,0x3B79,0x4FC8,{ 0x89,0xC6,0xFC,0x7F,0xB9,0x79,0xEE,0x74 } }; // 42195949-3B79-4FC8-89C6-FC7FB979EE74
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureCustomObject>{ 0x5D77A19E,0x62C1,0x44E7,{ 0xBE,0xCD,0x45,0xDA,0x5A,0xE5,0x1A,0x56 } }; // 5D77A19E-62C1-44E7-BECD-45DA5AE51A56
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureCustomObjectEnumerator>{ 0x5EE4FE1D,0xE1B0,0x4683,{ 0x80,0x79,0x7E,0xA0,0xFC,0xF8,0x0B,0x4C } }; // 5EE4FE1D-E1B0-4683-8079-7EA0FCF80B4C
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureCustomObjectSet>{ 0x8F792AC5,0x7947,0x4E11,{ 0xBC,0x3D,0x26,0x59,0xFF,0x04,0x6A,0xE1 } }; // 8F792AC5-7947-4E11-BC3D-2659FF046AE1
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignaturePartReference>{ 0xE24231CA,0x59F4,0x484E,{ 0xB6,0x4B,0x36,0xEE,0xDA,0x36,0x07,0x2C } }; // E24231CA-59F4-484E-B64B-36EEDA36072C
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignaturePartReferenceEnumerator>{ 0x80EB1561,0x8C77,0x49CF,{ 0x82,0x66,0x45,0x9B,0x35,0x6E,0xE9,0x9A } }; // 80EB1561-8C77-49CF-8266-459B356EE99A
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignaturePartReferenceSet>{ 0x6C9FE28C,0xECD9,0x4B22,{ 0x9D,0x36,0x7F,0xDD,0xE6,0x70,0xFE,0xC0 } }; // 6C9FE28C-ECD9-4B22-9D36-7FDDE670FEC0
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureReference>{ 0x1B47005E,0x3011,0x4EDC,{ 0xBE,0x6F,0x0F,0x65,0xE5,0xAB,0x03,0x42 } }; // 1B47005E-3011-4EDC-BE6F-0F65E5AB0342
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureReferenceEnumerator>{ 0xCFA59A45,0x28B1,0x4868,{ 0x96,0x9E,0xFA,0x80,0x97,0xFD,0xC1,0x2A } }; // CFA59A45-28B1-4868-969E-FA8097FDC12A
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureReferenceSet>{ 0xF3B02D31,0xAB12,0x42DD,{ 0x9E,0x2F,0x2B,0x16,0x76,0x1C,0x3C,0x1E } }; // F3B02D31-AB12-42DD-9E2F-2B16761C3C1E
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureRelationshipReference>{ 0x57BABAC6,0x9D4A,0x4E50,{ 0x8B,0x86,0xE5,0xD4,0x05,0x1E,0xAE,0x7C } }; // 57BABAC6-9D4A-4E50-8B86-E5D4051EAE7C
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureRelationshipReferenceEnumerator>{ 0x773BA3E4,0xF021,0x48E4,{ 0xAA,0x04,0x98,0x16,0xDB,0x5D,0x34,0x95 } }; // 773BA3E4-F021-48E4-AA04-9816DB5D3495
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSignatureRelationshipReferenceSet>{ 0x9F863CA5,0x3631,0x404C,{ 0x82,0x8D,0x80,0x7E,0x07,0x15,0x06,0x9B } }; // 9F863CA5-3631-404C-828D-807E0715069B
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcSigningOptions>{ 0x50D2D6A5,0x7AEB,0x46C0,{ 0xB2,0x41,0x43,0xAB,0x0E,0x9B,0x40,0x7E } }; // 50D2D6A5-7AEB-46C0-B241-43AB0E9B407E
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::IOpcUri>{ 0xBC9C1B9B,0xD62C,0x49EB,{ 0xAE,0xF0,0x3B,0x4E,0x0B,0x28,0xEB,0xED } }; // BC9C1B9B-D62C-49EB-AEF0-3B4E0B28EBED
    template <> inline constexpr guid guid_v<Windows::Win32::Packaging::OpcFactory>{ 0x6B2D6BA0,0x9F3E,0x4F27,{ 0x92,0x0B,0x31,0x3C,0xC4,0x26,0xA3,0x9E } }; // 6B2D6BA0-9F3E-4F27-920B-313CC426A39E
#pragma endregion guids

}
#endif