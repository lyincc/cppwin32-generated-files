// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_AppxPackaging_H
#define WIN32_Windows_Win32_AppxPackaging_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.AppxPackaging.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::AppxPackaging
{
#pragma region methods
    inline int32_t GetCurrentPackageId(uint32_t* bufferLength, uint8_t* buffer)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackageId(bufferLength, buffer);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackageFullName(uint32_t* packageFullNameLength, uint16_t* packageFullName)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackageFullName(packageFullNameLength, packageFullName);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackageFamilyName(uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackageFamilyName(packageFamilyNameLength, packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackagePath(uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackagePath(pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetPackageId(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t* bufferLength, uint8_t* buffer)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageId(hProcess, bufferLength, buffer);
        return win32_impl_result;
    }
    inline int32_t GetPackageFullName(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t* packageFullNameLength, uint16_t* packageFullName)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageFullName(hProcess, packageFullNameLength, packageFullName);
        return win32_impl_result;
    }
    inline int32_t GetPackageFullNameFromToken(Windows::Win32::SystemServices::HANDLE token, uint32_t* packageFullNameLength, uint16_t* packageFullName)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageFullNameFromToken(token, packageFullNameLength, packageFullName);
        return win32_impl_result;
    }
    inline int32_t GetPackageFamilyName(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageFamilyName(hProcess, packageFamilyNameLength, packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t GetPackageFamilyNameFromToken(Windows::Win32::SystemServices::HANDLE token, uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageFamilyNameFromToken(token, packageFamilyNameLength, packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t GetPackagePath(Windows::Win32::AppxPackaging::PACKAGE_ID* packageId, uint32_t reserved, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackagePath(packageId, reserved, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetPackagePathByFullName(uint16_t* packageFullName, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackagePathByFullName(packageFullName, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetStagedPackagePathByFullName(uint16_t* packageFullName, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetStagedPackagePathByFullName(packageFullName, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetPackagePathByFullName2(uint16_t* packageFullName, Windows::Win32::AppxPackaging::PackagePathType packagePathType, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackagePathByFullName2(packageFullName, packagePathType, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetStagedPackagePathByFullName2(uint16_t* packageFullName, Windows::Win32::AppxPackaging::PackagePathType packagePathType, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetStagedPackagePathByFullName2(packageFullName, packagePathType, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackageInfo2(uint32_t flags, Windows::Win32::AppxPackaging::PackagePathType packagePathType, uint32_t* bufferLength, uint8_t* buffer, uint32_t* count)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackageInfo2(flags, packagePathType, bufferLength, buffer, count);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackagePath2(Windows::Win32::AppxPackaging::PackagePathType packagePathType, uint32_t* pathLength, uint16_t* path)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackagePath2(packagePathType, pathLength, path);
        return win32_impl_result;
    }
    inline int32_t GetCurrentApplicationUserModelId(uint32_t* applicationUserModelIdLength, uint16_t* applicationUserModelId)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentApplicationUserModelId(applicationUserModelIdLength, applicationUserModelId);
        return win32_impl_result;
    }
    inline int32_t GetApplicationUserModelId(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t* applicationUserModelIdLength, uint16_t* applicationUserModelId)
    {
        auto win32_impl_result = WIN32_IMPL_GetApplicationUserModelId(hProcess, applicationUserModelIdLength, applicationUserModelId);
        return win32_impl_result;
    }
    inline int32_t GetApplicationUserModelIdFromToken(Windows::Win32::SystemServices::HANDLE token, uint32_t* applicationUserModelIdLength, uint16_t* applicationUserModelId)
    {
        auto win32_impl_result = WIN32_IMPL_GetApplicationUserModelIdFromToken(token, applicationUserModelIdLength, applicationUserModelId);
        return win32_impl_result;
    }
    inline int32_t VerifyPackageFullName(uint16_t* packageFullName)
    {
        auto win32_impl_result = WIN32_IMPL_VerifyPackageFullName(packageFullName);
        return win32_impl_result;
    }
    inline int32_t VerifyPackageFamilyName(uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_VerifyPackageFamilyName(packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t VerifyPackageId(Windows::Win32::AppxPackaging::PACKAGE_ID* packageId)
    {
        auto win32_impl_result = WIN32_IMPL_VerifyPackageId(packageId);
        return win32_impl_result;
    }
    inline int32_t VerifyApplicationUserModelId(uint16_t* applicationUserModelId)
    {
        auto win32_impl_result = WIN32_IMPL_VerifyApplicationUserModelId(applicationUserModelId);
        return win32_impl_result;
    }
    inline int32_t VerifyPackageRelativeApplicationId(uint16_t* packageRelativeApplicationId)
    {
        auto win32_impl_result = WIN32_IMPL_VerifyPackageRelativeApplicationId(packageRelativeApplicationId);
        return win32_impl_result;
    }
    inline int32_t PackageIdFromFullName(uint16_t* packageFullName, uint32_t flags, uint32_t* bufferLength, uint8_t* buffer)
    {
        auto win32_impl_result = WIN32_IMPL_PackageIdFromFullName(packageFullName, flags, bufferLength, buffer);
        return win32_impl_result;
    }
    inline int32_t PackageFullNameFromId(Windows::Win32::AppxPackaging::PACKAGE_ID* packageId, uint32_t* packageFullNameLength, uint16_t* packageFullName)
    {
        auto win32_impl_result = WIN32_IMPL_PackageFullNameFromId(packageId, packageFullNameLength, packageFullName);
        return win32_impl_result;
    }
    inline int32_t PackageFamilyNameFromId(Windows::Win32::AppxPackaging::PACKAGE_ID* packageId, uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_PackageFamilyNameFromId(packageId, packageFamilyNameLength, packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t PackageFamilyNameFromFullName(uint16_t* packageFullName, uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName)
    {
        auto win32_impl_result = WIN32_IMPL_PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
        return win32_impl_result;
    }
    inline int32_t PackageNameAndPublisherIdFromFamilyName(uint16_t* packageFamilyName, uint32_t* packageNameLength, uint16_t* packageName, uint32_t* packagePublisherIdLength, uint16_t* packagePublisherId)
    {
        auto win32_impl_result = WIN32_IMPL_PackageNameAndPublisherIdFromFamilyName(packageFamilyName, packageNameLength, packageName, packagePublisherIdLength, packagePublisherId);
        return win32_impl_result;
    }
    inline int32_t FormatApplicationUserModelId(uint16_t* packageFamilyName, uint16_t* packageRelativeApplicationId, uint32_t* applicationUserModelIdLength, uint16_t* applicationUserModelId)
    {
        auto win32_impl_result = WIN32_IMPL_FormatApplicationUserModelId(packageFamilyName, packageRelativeApplicationId, applicationUserModelIdLength, applicationUserModelId);
        return win32_impl_result;
    }
    inline int32_t ParseApplicationUserModelId(uint16_t* applicationUserModelId, uint32_t* packageFamilyNameLength, uint16_t* packageFamilyName, uint32_t* packageRelativeApplicationIdLength, uint16_t* packageRelativeApplicationId)
    {
        auto win32_impl_result = WIN32_IMPL_ParseApplicationUserModelId(applicationUserModelId, packageFamilyNameLength, packageFamilyName, packageRelativeApplicationIdLength, packageRelativeApplicationId);
        return win32_impl_result;
    }
    inline int32_t GetPackagesByPackageFamily(uint16_t* packageFamilyName, uint32_t* count, uint16_t** packageFullNames, uint32_t* bufferLength, uint16_t* buffer)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackagesByPackageFamily(packageFamilyName, count, packageFullNames, bufferLength, buffer);
        return win32_impl_result;
    }
    inline int32_t FindPackagesByPackageFamily(uint16_t* packageFamilyName, uint32_t packageFilters, uint32_t* count, uint16_t** packageFullNames, uint32_t* bufferLength, uint16_t* buffer, uint32_t* packageProperties)
    {
        auto win32_impl_result = WIN32_IMPL_FindPackagesByPackageFamily(packageFamilyName, packageFilters, count, packageFullNames, bufferLength, buffer, packageProperties);
        return win32_impl_result;
    }
    inline int32_t GetStagedPackageOrigin(uint16_t* packageFullName, Windows::Win32::AppxPackaging::PackageOrigin* origin)
    {
        auto win32_impl_result = WIN32_IMPL_GetStagedPackageOrigin(packageFullName, origin);
        return win32_impl_result;
    }
    inline int32_t GetCurrentPackageInfo(uint32_t flags, uint32_t* bufferLength, uint8_t* buffer, uint32_t* count)
    {
        auto win32_impl_result = WIN32_IMPL_GetCurrentPackageInfo(flags, bufferLength, buffer, count);
        return win32_impl_result;
    }
    inline int32_t OpenPackageInfoByFullName(uint16_t* packageFullName, uint32_t reserved, Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE** packageInfoReference)
    {
        auto win32_impl_result = WIN32_IMPL_OpenPackageInfoByFullName(packageFullName, reserved, packageInfoReference);
        return win32_impl_result;
    }
    inline int32_t OpenPackageInfoByFullNameForUser(void* userSid, uint16_t* packageFullName, uint32_t reserved, Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE** packageInfoReference)
    {
        auto win32_impl_result = WIN32_IMPL_OpenPackageInfoByFullNameForUser(userSid, packageFullName, reserved, packageInfoReference);
        return win32_impl_result;
    }
    inline int32_t ClosePackageInfo(Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE* packageInfoReference)
    {
        auto win32_impl_result = WIN32_IMPL_ClosePackageInfo(packageInfoReference);
        return win32_impl_result;
    }
    inline int32_t GetPackageInfo(Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE* packageInfoReference, uint32_t flags, uint32_t* bufferLength, uint8_t* buffer, uint32_t* count)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageInfo(packageInfoReference, flags, bufferLength, buffer, count);
        return win32_impl_result;
    }
    inline int32_t GetPackageApplicationIds(Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE* packageInfoReference, uint32_t* bufferLength, uint8_t* buffer, uint32_t* count)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageApplicationIds(packageInfoReference, bufferLength, buffer, count);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetLifecycleManagement(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyLifecycleManagement* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetLifecycleManagement(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetWindowingModel(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyWindowingModel* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetWindowingModel(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetMediaFoundationCodecLoading(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyMediaFoundationCodecLoading* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetMediaFoundationCodecLoading(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetClrCompat(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyClrCompat* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetClrCompat(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetThreadInitializationType(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyThreadInitializationType* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetThreadInitializationType(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetShowDeveloperDiagnostic(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyShowDeveloperDiagnostic* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetShowDeveloperDiagnostic(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetProcessTerminationMethod(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyProcessTerminationMethod* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetProcessTerminationMethod(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t AppPolicyGetCreateFileAccess(Windows::Win32::SystemServices::HANDLE processToken, Windows::Win32::AppxPackaging::AppPolicyCreateFileAccess* policy)
    {
        auto win32_impl_result = WIN32_IMPL_AppPolicyGetCreateFileAccess(processToken, policy);
        return win32_impl_result;
    }
    inline int32_t GetPackageInfo2(Windows::Win32::AppxPackaging::_PACKAGE_INFO_REFERENCE* packageInfoReference, uint32_t flags, Windows::Win32::AppxPackaging::PackagePathType packagePathType, uint32_t* bufferLength, uint8_t* buffer, uint32_t* count)
    {
        auto win32_impl_result = WIN32_IMPL_GetPackageInfo2(packageInfoReference, flags, packagePathType, bufferLength, buffer, count);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif