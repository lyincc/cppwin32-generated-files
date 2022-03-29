// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WindowsErrorReporting_H
#define WIN32_Windows_Win32_WindowsErrorReporting_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.WindowsErrorReporting.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::WindowsErrorReporting
{
#pragma region methods
    inline int32_t WerReportCreate(uint16_t* pwzEventType, Windows::Win32::WindowsErrorReporting::WER_REPORT_TYPE repType, Windows::Win32::WindowsErrorReporting::WER_REPORT_INFORMATION* pReportInformation, intptr_t* phReportHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportCreate(pwzEventType, repType, pReportInformation, phReportHandle);
        return win32_impl_result;
    }
    inline int32_t WerReportSetParameter(intptr_t hReportHandle, uint32_t dwparamID, uint16_t* pwzName, uint16_t* pwzValue)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportSetParameter(hReportHandle, dwparamID, pwzName, pwzValue);
        return win32_impl_result;
    }
    inline int32_t WerReportAddFile(intptr_t hReportHandle, uint16_t* pwzPath, Windows::Win32::WindowsErrorReporting::WER_FILE_TYPE repFileType, uint32_t dwFileFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportAddFile(hReportHandle, pwzPath, repFileType, dwFileFlags);
        return win32_impl_result;
    }
    inline int32_t WerReportSetUIOption(intptr_t hReportHandle, Windows::Win32::WindowsErrorReporting::WER_REPORT_UI repUITypeID, uint16_t* pwzValue)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportSetUIOption(hReportHandle, repUITypeID, pwzValue);
        return win32_impl_result;
    }
    inline int32_t WerReportSubmit(intptr_t hReportHandle, Windows::Win32::WindowsErrorReporting::WER_CONSENT consent, uint32_t dwFlags, Windows::Win32::WindowsErrorReporting::WER_SUBMIT_RESULT* pSubmitResult)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportSubmit(hReportHandle, consent, dwFlags, pSubmitResult);
        return win32_impl_result;
    }
    inline int32_t WerReportAddDump(intptr_t hReportHandle, Windows::Win32::SystemServices::HANDLE hProcess, Windows::Win32::SystemServices::HANDLE hThread, Windows::Win32::WindowsErrorReporting::WER_DUMP_TYPE dumpType, Windows::Win32::WindowsErrorReporting::WER_EXCEPTION_INFORMATION* pExceptionParam, Windows::Win32::WindowsErrorReporting::WER_DUMP_CUSTOM_OPTIONS* pDumpCustomOptions, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportAddDump(hReportHandle, hProcess, hThread, dumpType, pExceptionParam, pDumpCustomOptions, dwFlags);
        return win32_impl_result;
    }
    inline int32_t WerReportCloseHandle(intptr_t hReportHandle)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportCloseHandle(hReportHandle);
        return win32_impl_result;
    }
    inline int32_t WerRegisterFile(uint16_t* pwzFile, Windows::Win32::WindowsErrorReporting::WER_REGISTER_FILE_TYPE regFileType, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterFile(pwzFile, regFileType, dwFlags);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterFile(uint16_t* pwzFilePath)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterFile(pwzFilePath);
        return win32_impl_result;
    }
    inline int32_t WerRegisterMemoryBlock(void* pvAddress, uint32_t dwSize)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterMemoryBlock(pvAddress, dwSize);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterMemoryBlock(void* pvAddress)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterMemoryBlock(pvAddress);
        return win32_impl_result;
    }
    inline int32_t WerRegisterExcludedMemoryBlock(void* address, uint32_t size)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterExcludedMemoryBlock(address, size);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterExcludedMemoryBlock(void* address)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterExcludedMemoryBlock(address);
        return win32_impl_result;
    }
    inline int32_t WerRegisterCustomMetadata(uint16_t* key, uint16_t* value)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterCustomMetadata(key, value);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterCustomMetadata(uint16_t* key)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterCustomMetadata(key);
        return win32_impl_result;
    }
    inline int32_t WerRegisterAdditionalProcess(uint32_t processId, uint32_t captureExtraInfoForThreadId)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterAdditionalProcess(processId, captureExtraInfoForThreadId);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterAdditionalProcess(uint32_t processId)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterAdditionalProcess(processId);
        return win32_impl_result;
    }
    inline int32_t WerRegisterAppLocalDump(uint16_t* localAppDataRelativePath)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterAppLocalDump(localAppDataRelativePath);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterAppLocalDump()
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterAppLocalDump();
        return win32_impl_result;
    }
    inline int32_t WerSetFlags(uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WerSetFlags(dwFlags);
        return win32_impl_result;
    }
    inline int32_t WerGetFlags(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t* pdwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_WerGetFlags(hProcess, pdwFlags);
        return win32_impl_result;
    }
    inline int32_t WerAddExcludedApplication(uint16_t* pwzExeName, Windows::Win32::SystemServices::BOOL bAllUsers)
    {
        auto win32_impl_result = WIN32_IMPL_WerAddExcludedApplication(pwzExeName, bAllUsers);
        return win32_impl_result;
    }
    inline int32_t WerRemoveExcludedApplication(uint16_t* pwzExeName, Windows::Win32::SystemServices::BOOL bAllUsers)
    {
        auto win32_impl_result = WIN32_IMPL_WerRemoveExcludedApplication(pwzExeName, bAllUsers);
        return win32_impl_result;
    }
    inline int32_t WerRegisterRuntimeExceptionModule(uint16_t* pwszOutOfProcessCallbackDll, void* pContext)
    {
        auto win32_impl_result = WIN32_IMPL_WerRegisterRuntimeExceptionModule(pwszOutOfProcessCallbackDll, pContext);
        return win32_impl_result;
    }
    inline int32_t WerUnregisterRuntimeExceptionModule(uint16_t* pwszOutOfProcessCallbackDll, void* pContext)
    {
        auto win32_impl_result = WIN32_IMPL_WerUnregisterRuntimeExceptionModule(pwszOutOfProcessCallbackDll, pContext);
        return win32_impl_result;
    }
    inline int32_t WerStoreOpen(Windows::Win32::WindowsErrorReporting::REPORT_STORE_TYPES repStoreType, void** phReportStore)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreOpen(repStoreType, phReportStore);
        return win32_impl_result;
    }
    inline void WerStoreClose(void* hReportStore)
    {
        WIN32_IMPL_WerStoreClose(hReportStore);
    }
    inline int32_t WerStoreGetFirstReportKey(void* hReportStore, uint16_t** ppszReportKey)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreGetFirstReportKey(hReportStore, ppszReportKey);
        return win32_impl_result;
    }
    inline int32_t WerStoreGetNextReportKey(void* hReportStore, uint16_t** ppszReportKey)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreGetNextReportKey(hReportStore, ppszReportKey);
        return win32_impl_result;
    }
    inline int32_t WerStoreQueryReportMetadataV2(void* hReportStore, uint16_t* pszReportKey, Windows::Win32::WindowsErrorReporting::WER_REPORT_METADATA_V2* pReportMetadata)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreQueryReportMetadataV2(hReportStore, pszReportKey, pReportMetadata);
        return win32_impl_result;
    }
    inline int32_t WerStoreQueryReportMetadataV3(void* hReportStore, uint16_t* pszReportKey, Windows::Win32::WindowsErrorReporting::WER_REPORT_METADATA_V3* pReportMetadata)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreQueryReportMetadataV3(hReportStore, pszReportKey, pReportMetadata);
        return win32_impl_result;
    }
    inline void WerFreeString(uint16_t* pwszStr)
    {
        WIN32_IMPL_WerFreeString(pwszStr);
    }
    inline int32_t WerStorePurge()
    {
        auto win32_impl_result = WIN32_IMPL_WerStorePurge();
        return win32_impl_result;
    }
    inline int32_t WerStoreGetReportCount(void* hReportStore, uint32_t* pdwReportCount)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreGetReportCount(hReportStore, pdwReportCount);
        return win32_impl_result;
    }
    inline int32_t WerStoreGetSizeOnDisk(void* hReportStore, uint64_t* pqwSizeInBytes)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreGetSizeOnDisk(hReportStore, pqwSizeInBytes);
        return win32_impl_result;
    }
    inline int32_t WerStoreQueryReportMetadataV1(void* hReportStore, uint16_t* pszReportKey, Windows::Win32::WindowsErrorReporting::WER_REPORT_METADATA_V1* pReportMetadata)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreQueryReportMetadataV1(hReportStore, pszReportKey, pReportMetadata);
        return win32_impl_result;
    }
    inline int32_t WerStoreUploadReport(void* hReportStore, uint16_t* pszReportKey, uint32_t dwFlags, Windows::Win32::WindowsErrorReporting::WER_SUBMIT_RESULT* pSubmitResult)
    {
        auto win32_impl_result = WIN32_IMPL_WerStoreUploadReport(hReportStore, pszReportKey, dwFlags, pSubmitResult);
        return win32_impl_result;
    }
    inline Windows::Win32::WindowsErrorReporting::EFaultRepRetVal ReportFault(Windows::Win32::Debug::EXCEPTION_POINTERS* pep, uint32_t dwOpt)
    {
        auto win32_impl_result = WIN32_IMPL_ReportFault(pep, dwOpt);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL AddERExcludedApplicationA(int8_t* szApplication)
    {
        auto win32_impl_result = WIN32_IMPL_AddERExcludedApplicationA(szApplication);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL AddERExcludedApplicationW(uint16_t* wszApplication)
    {
        auto win32_impl_result = WIN32_IMPL_AddERExcludedApplicationW(wszApplication);
        return win32_impl_result;
    }
    inline int32_t WerReportHang(Windows::Win32::WindowsAndMessaging::HWND hwndHungApp, uint16_t* pwzHungApplicationName)
    {
        auto win32_impl_result = WIN32_IMPL_WerReportHang(hwndHungApp, pwzHungApplicationName);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif