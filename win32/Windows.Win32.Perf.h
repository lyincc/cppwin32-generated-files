// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Perf_H
#define WIN32_Windows_Win32_Perf_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Perf.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Perf
{
#pragma region methods
    inline uint32_t LoadPerfCounterTextStringsA(int8_t* lpCommandLine, Windows::Win32::SystemServices::BOOL bQuietModeArg)
    {
        auto win32_impl_result = WIN32_IMPL_LoadPerfCounterTextStringsA(lpCommandLine, bQuietModeArg);
        return win32_impl_result;
    }
    inline uint32_t LoadPerfCounterTextStringsW(uint16_t* lpCommandLine, Windows::Win32::SystemServices::BOOL bQuietModeArg)
    {
        auto win32_impl_result = WIN32_IMPL_LoadPerfCounterTextStringsW(lpCommandLine, bQuietModeArg);
        return win32_impl_result;
    }
    inline uint32_t UnloadPerfCounterTextStringsW(uint16_t* lpCommandLine, Windows::Win32::SystemServices::BOOL bQuietModeArg)
    {
        auto win32_impl_result = WIN32_IMPL_UnloadPerfCounterTextStringsW(lpCommandLine, bQuietModeArg);
        return win32_impl_result;
    }
    inline uint32_t UnloadPerfCounterTextStringsA(int8_t* lpCommandLine, Windows::Win32::SystemServices::BOOL bQuietModeArg)
    {
        auto win32_impl_result = WIN32_IMPL_UnloadPerfCounterTextStringsA(lpCommandLine, bQuietModeArg);
        return win32_impl_result;
    }
    inline uint32_t UpdatePerfNameFilesA(int8_t* szNewCtrFilePath, int8_t* szNewHlpFilePath, int8_t* szLanguageID, size_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_UpdatePerfNameFilesA(szNewCtrFilePath, szNewHlpFilePath, szLanguageID, dwFlags);
        return win32_impl_result;
    }
    inline uint32_t UpdatePerfNameFilesW(uint16_t* szNewCtrFilePath, uint16_t* szNewHlpFilePath, uint16_t* szLanguageID, size_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_UpdatePerfNameFilesW(szNewCtrFilePath, szNewHlpFilePath, szLanguageID, dwFlags);
        return win32_impl_result;
    }
    inline uint32_t SetServiceAsTrustedA(int8_t* szReserved, int8_t* szServiceName)
    {
        auto win32_impl_result = WIN32_IMPL_SetServiceAsTrustedA(szReserved, szServiceName);
        return win32_impl_result;
    }
    inline uint32_t SetServiceAsTrustedW(uint16_t* szReserved, uint16_t* szServiceName)
    {
        auto win32_impl_result = WIN32_IMPL_SetServiceAsTrustedW(szReserved, szServiceName);
        return win32_impl_result;
    }
    inline uint32_t BackupPerfRegistryToFileW(uint16_t* szFileName, uint16_t* szCommentString)
    {
        auto win32_impl_result = WIN32_IMPL_BackupPerfRegistryToFileW(szFileName, szCommentString);
        return win32_impl_result;
    }
    inline uint32_t RestorePerfRegistryFromFileW(uint16_t* szFileName, uint16_t* szLangId)
    {
        auto win32_impl_result = WIN32_IMPL_RestorePerfRegistryFromFileW(szFileName, szLangId);
        return win32_impl_result;
    }
    inline uint32_t PerfStartProvider(::win32::guid* ProviderGuid, Windows::Win32::Perf::PERFLIBREQUEST* ControlCallback, Windows::Win32::Perf::PerfProviderHandle* phProvider)
    {
        auto win32_impl_result = WIN32_IMPL_PerfStartProvider(ProviderGuid, ControlCallback, phProvider);
        return win32_impl_result;
    }
    inline uint32_t PerfStartProviderEx(::win32::guid* ProviderGuid, Windows::Win32::Perf::PERF_PROVIDER_CONTEXT* ProviderContext, Windows::Win32::Perf::PerfProviderHandle* Provider)
    {
        auto win32_impl_result = WIN32_IMPL_PerfStartProviderEx(ProviderGuid, ProviderContext, Provider);
        return win32_impl_result;
    }
    inline uint32_t PerfStopProvider(Windows::Win32::Perf::PerfProviderHandle ProviderHandle)
    {
        auto win32_impl_result = WIN32_IMPL_PerfStopProvider(ProviderHandle);
        return win32_impl_result;
    }
    inline uint32_t PerfSetCounterSetInfo(Windows::Win32::SystemServices::HANDLE ProviderHandle, Windows::Win32::Perf::PERF_COUNTERSET_INFO* Template, uint32_t TemplateSize)
    {
        auto win32_impl_result = WIN32_IMPL_PerfSetCounterSetInfo(ProviderHandle, Template, TemplateSize);
        return win32_impl_result;
    }
    inline Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* PerfCreateInstance(Windows::Win32::Perf::PerfProviderHandle ProviderHandle, ::win32::guid* CounterSetGuid, uint16_t* Name, uint32_t Id)
    {
        auto win32_impl_result = WIN32_IMPL_PerfCreateInstance(ProviderHandle, CounterSetGuid, Name, Id);
        return win32_impl_result;
    }
    inline uint32_t PerfDeleteInstance(Windows::Win32::Perf::PerfProviderHandle Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* InstanceBlock)
    {
        auto win32_impl_result = WIN32_IMPL_PerfDeleteInstance(Provider, InstanceBlock);
        return win32_impl_result;
    }
    inline Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* PerfQueryInstance(Windows::Win32::SystemServices::HANDLE ProviderHandle, ::win32::guid* CounterSetGuid, uint16_t* Name, uint32_t Id)
    {
        auto win32_impl_result = WIN32_IMPL_PerfQueryInstance(ProviderHandle, CounterSetGuid, Name, Id);
        return win32_impl_result;
    }
    inline uint32_t PerfSetCounterRefValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, void* Address)
    {
        auto win32_impl_result = WIN32_IMPL_PerfSetCounterRefValue(Provider, Instance, CounterId, Address);
        return win32_impl_result;
    }
    inline uint32_t PerfSetULongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfSetULongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfSetULongLongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfSetULongLongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfIncrementULongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfIncrementULongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfIncrementULongLongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfIncrementULongLongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfDecrementULongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint32_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfDecrementULongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfDecrementULongLongCounterValue(Windows::Win32::SystemServices::HANDLE Provider, Windows::Win32::Perf::PERF_COUNTERSET_INSTANCE* Instance, uint32_t CounterId, uint64_t Value)
    {
        auto win32_impl_result = WIN32_IMPL_PerfDecrementULongLongCounterValue(Provider, Instance, CounterId, Value);
        return win32_impl_result;
    }
    inline uint32_t PerfEnumerateCounterSet(uint16_t* szMachine, ::win32::guid* pCounterSetIds, uint32_t cCounterSetIds, uint32_t* pcCounterSetIdsActual)
    {
        auto win32_impl_result = WIN32_IMPL_PerfEnumerateCounterSet(szMachine, pCounterSetIds, cCounterSetIds, pcCounterSetIdsActual);
        return win32_impl_result;
    }
    inline uint32_t PerfEnumerateCounterSetInstances(uint16_t* szMachine, ::win32::guid* pCounterSetId, Windows::Win32::Perf::PERF_INSTANCE_HEADER* pInstances, uint32_t cbInstances, uint32_t* pcbInstancesActual)
    {
        auto win32_impl_result = WIN32_IMPL_PerfEnumerateCounterSetInstances(szMachine, pCounterSetId, pInstances, cbInstances, pcbInstancesActual);
        return win32_impl_result;
    }
    inline uint32_t PerfQueryCounterSetRegistrationInfo(uint16_t* szMachine, ::win32::guid* pCounterSetId, Windows::Win32::Perf::PerfRegInfoType requestCode, uint32_t requestLangId, uint8_t* pbRegInfo, uint32_t cbRegInfo, uint32_t* pcbRegInfoActual)
    {
        auto win32_impl_result = WIN32_IMPL_PerfQueryCounterSetRegistrationInfo(szMachine, pCounterSetId, requestCode, requestLangId, pbRegInfo, cbRegInfo, pcbRegInfoActual);
        return win32_impl_result;
    }
    inline uint32_t PerfOpenQueryHandle(uint16_t* szMachine, Windows::Win32::Perf::PerfQueryHandle* phQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PerfOpenQueryHandle(szMachine, phQuery);
        return win32_impl_result;
    }
    inline uint32_t PerfCloseQueryHandle(Windows::Win32::SystemServices::HANDLE hQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PerfCloseQueryHandle(hQuery);
        return win32_impl_result;
    }
    inline uint32_t PerfQueryCounterInfo(Windows::Win32::Perf::PerfQueryHandle hQuery, Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters, uint32_t* pcbCountersActual)
    {
        auto win32_impl_result = WIN32_IMPL_PerfQueryCounterInfo(hQuery, pCounters, cbCounters, pcbCountersActual);
        return win32_impl_result;
    }
    inline uint32_t PerfQueryCounterData(Windows::Win32::Perf::PerfQueryHandle hQuery, Windows::Win32::Perf::PERF_DATA_HEADER* pCounterBlock, uint32_t cbCounterBlock, uint32_t* pcbCounterBlockActual)
    {
        auto win32_impl_result = WIN32_IMPL_PerfQueryCounterData(hQuery, pCounterBlock, cbCounterBlock, pcbCounterBlockActual);
        return win32_impl_result;
    }
    inline uint32_t PerfAddCounters(Windows::Win32::Perf::PerfQueryHandle hQuery, Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters)
    {
        auto win32_impl_result = WIN32_IMPL_PerfAddCounters(hQuery, pCounters, cbCounters);
        return win32_impl_result;
    }
    inline uint32_t PerfDeleteCounters(Windows::Win32::Perf::PerfQueryHandle hQuery, Windows::Win32::Perf::PERF_COUNTER_IDENTIFIER* pCounters, uint32_t cbCounters)
    {
        auto win32_impl_result = WIN32_IMPL_PerfDeleteCounters(hQuery, pCounters, cbCounters);
        return win32_impl_result;
    }
    inline int32_t PdhGetDllVersion(uint32_t* lpdwVersion)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDllVersion(lpdwVersion);
        return win32_impl_result;
    }
    inline int32_t PdhOpenQueryW(uint16_t* szDataSource, size_t dwUserData, intptr_t* phQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhOpenQueryW(szDataSource, dwUserData, phQuery);
        return win32_impl_result;
    }
    inline int32_t PdhOpenQueryA(int8_t* szDataSource, size_t dwUserData, intptr_t* phQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhOpenQueryA(szDataSource, dwUserData, phQuery);
        return win32_impl_result;
    }
    inline int32_t PdhAddCounterW(intptr_t hQuery, uint16_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter)
    {
        auto win32_impl_result = WIN32_IMPL_PdhAddCounterW(hQuery, szFullCounterPath, dwUserData, phCounter);
        return win32_impl_result;
    }
    inline int32_t PdhAddCounterA(intptr_t hQuery, int8_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter)
    {
        auto win32_impl_result = WIN32_IMPL_PdhAddCounterA(hQuery, szFullCounterPath, dwUserData, phCounter);
        return win32_impl_result;
    }
    inline int32_t PdhAddEnglishCounterW(intptr_t hQuery, uint16_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter)
    {
        auto win32_impl_result = WIN32_IMPL_PdhAddEnglishCounterW(hQuery, szFullCounterPath, dwUserData, phCounter);
        return win32_impl_result;
    }
    inline int32_t PdhAddEnglishCounterA(intptr_t hQuery, int8_t* szFullCounterPath, size_t dwUserData, intptr_t* phCounter)
    {
        auto win32_impl_result = WIN32_IMPL_PdhAddEnglishCounterA(hQuery, szFullCounterPath, dwUserData, phCounter);
        return win32_impl_result;
    }
    inline int32_t PdhCollectQueryDataWithTime(intptr_t hQuery, int64_t* pllTimeStamp)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCollectQueryDataWithTime(hQuery, pllTimeStamp);
        return win32_impl_result;
    }
    inline int32_t PdhValidatePathExW(intptr_t hDataSource, uint16_t* szFullPathBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhValidatePathExW(hDataSource, szFullPathBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhValidatePathExA(intptr_t hDataSource, int8_t* szFullPathBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhValidatePathExA(hDataSource, szFullPathBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhRemoveCounter(intptr_t hCounter)
    {
        auto win32_impl_result = WIN32_IMPL_PdhRemoveCounter(hCounter);
        return win32_impl_result;
    }
    inline int32_t PdhCollectQueryData(intptr_t hQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCollectQueryData(hQuery);
        return win32_impl_result;
    }
    inline int32_t PdhCloseQuery(intptr_t hQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCloseQuery(hQuery);
        return win32_impl_result;
    }
    inline int32_t PdhGetFormattedCounterValue(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwType, Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* pValue)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetFormattedCounterValue(hCounter, dwFormat, lpdwType, pValue);
        return win32_impl_result;
    }
    inline int32_t PdhGetFormattedCounterArrayA(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, Windows::Win32::Perf::PDH_FMT_COUNTERVALUE_ITEM_A* ItemBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetFormattedCounterArrayA(hCounter, dwFormat, lpdwBufferSize, lpdwItemCount, ItemBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhGetFormattedCounterArrayW(intptr_t hCounter, uint32_t dwFormat, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, Windows::Win32::Perf::PDH_FMT_COUNTERVALUE_ITEM_W* ItemBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetFormattedCounterArrayW(hCounter, dwFormat, lpdwBufferSize, lpdwItemCount, ItemBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhGetRawCounterValue(intptr_t hCounter, uint32_t* lpdwType, Windows::Win32::Perf::PDH_RAW_COUNTER* pValue)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetRawCounterValue(hCounter, lpdwType, pValue);
        return win32_impl_result;
    }
    inline int32_t PdhGetRawCounterArrayA(intptr_t hCounter, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, Windows::Win32::Perf::PDH_RAW_COUNTER_ITEM_A* ItemBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetRawCounterArrayA(hCounter, lpdwBufferSize, lpdwItemCount, ItemBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhGetRawCounterArrayW(intptr_t hCounter, uint32_t* lpdwBufferSize, uint32_t* lpdwItemCount, Windows::Win32::Perf::PDH_RAW_COUNTER_ITEM_W* ItemBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetRawCounterArrayW(hCounter, lpdwBufferSize, lpdwItemCount, ItemBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhCalculateCounterFromRawValue(intptr_t hCounter, uint32_t dwFormat, Windows::Win32::Perf::PDH_RAW_COUNTER* rawValue1, Windows::Win32::Perf::PDH_RAW_COUNTER* rawValue2, Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* fmtValue)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCalculateCounterFromRawValue(hCounter, dwFormat, rawValue1, rawValue2, fmtValue);
        return win32_impl_result;
    }
    inline int32_t PdhComputeCounterStatistics(intptr_t hCounter, uint32_t dwFormat, uint32_t dwFirstEntry, uint32_t dwNumEntries, Windows::Win32::Perf::PDH_RAW_COUNTER* lpRawValueArray, Windows::Win32::Perf::PDH_STATISTICS* data)
    {
        auto win32_impl_result = WIN32_IMPL_PdhComputeCounterStatistics(hCounter, dwFormat, dwFirstEntry, dwNumEntries, lpRawValueArray, data);
        return win32_impl_result;
    }
    inline int32_t PdhGetCounterInfoW(intptr_t hCounter, uint8_t bRetrieveExplainText, uint32_t* pdwBufferSize, Windows::Win32::Perf::PDH_COUNTER_INFO_W* lpBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetCounterInfoW(hCounter, bRetrieveExplainText, pdwBufferSize, lpBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhGetCounterInfoA(intptr_t hCounter, uint8_t bRetrieveExplainText, uint32_t* pdwBufferSize, Windows::Win32::Perf::PDH_COUNTER_INFO_A* lpBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetCounterInfoA(hCounter, bRetrieveExplainText, pdwBufferSize, lpBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhSetCounterScaleFactor(intptr_t hCounter, int32_t lFactor)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSetCounterScaleFactor(hCounter, lFactor);
        return win32_impl_result;
    }
    inline int32_t PdhConnectMachineW(uint16_t* szMachineName)
    {
        auto win32_impl_result = WIN32_IMPL_PdhConnectMachineW(szMachineName);
        return win32_impl_result;
    }
    inline int32_t PdhConnectMachineA(int8_t* szMachineName)
    {
        auto win32_impl_result = WIN32_IMPL_PdhConnectMachineA(szMachineName);
        return win32_impl_result;
    }
    inline int32_t PdhEnumMachinesW(uint16_t* szDataSource, uint16_t* mszMachineList, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumMachinesW(szDataSource, mszMachineList, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhEnumMachinesA(int8_t* szDataSource, int8_t* mszMachineList, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumMachinesA(szDataSource, mszMachineList, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectsW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, Windows::Win32::SystemServices::BOOL bRefresh)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectsW(szDataSource, szMachineName, mszObjectList, pcchBufferSize, dwDetailLevel, bRefresh);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectsA(int8_t* szDataSource, int8_t* szMachineName, int8_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, Windows::Win32::SystemServices::BOOL bRefresh)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectsA(szDataSource, szMachineName, mszObjectList, pcchBufferSize, dwDetailLevel, bRefresh);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectItemsW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* mszCounterList, uint32_t* pcchCounterListLength, uint16_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectItemsW(szDataSource, szMachineName, szObjectName, mszCounterList, pcchCounterListLength, mszInstanceList, pcchInstanceListLength, dwDetailLevel, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectItemsA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* mszCounterList, uint32_t* pcchCounterListLength, int8_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectItemsA(szDataSource, szMachineName, szObjectName, mszCounterList, pcchCounterListLength, mszInstanceList, pcchInstanceListLength, dwDetailLevel, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhMakeCounterPathW(Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_W* pCounterPathElements, uint16_t* szFullPathBuffer, uint32_t* pcchBufferSize, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhMakeCounterPathW(pCounterPathElements, szFullPathBuffer, pcchBufferSize, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhMakeCounterPathA(Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_A* pCounterPathElements, int8_t* szFullPathBuffer, uint32_t* pcchBufferSize, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhMakeCounterPathA(pCounterPathElements, szFullPathBuffer, pcchBufferSize, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhParseCounterPathW(uint16_t* szFullPathBuffer, Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_W* pCounterPathElements, uint32_t* pdwBufferSize, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhParseCounterPathW(szFullPathBuffer, pCounterPathElements, pdwBufferSize, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhParseCounterPathA(int8_t* szFullPathBuffer, Windows::Win32::Perf::PDH_COUNTER_PATH_ELEMENTS_A* pCounterPathElements, uint32_t* pdwBufferSize, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhParseCounterPathA(szFullPathBuffer, pCounterPathElements, pdwBufferSize, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhParseInstanceNameW(uint16_t* szInstanceString, uint16_t* szInstanceName, uint32_t* pcchInstanceNameLength, uint16_t* szParentName, uint32_t* pcchParentNameLength, uint32_t* lpIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PdhParseInstanceNameW(szInstanceString, szInstanceName, pcchInstanceNameLength, szParentName, pcchParentNameLength, lpIndex);
        return win32_impl_result;
    }
    inline int32_t PdhParseInstanceNameA(int8_t* szInstanceString, int8_t* szInstanceName, uint32_t* pcchInstanceNameLength, int8_t* szParentName, uint32_t* pcchParentNameLength, uint32_t* lpIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PdhParseInstanceNameA(szInstanceString, szInstanceName, pcchInstanceNameLength, szParentName, pcchParentNameLength, lpIndex);
        return win32_impl_result;
    }
    inline int32_t PdhValidatePathW(uint16_t* szFullPathBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhValidatePathW(szFullPathBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhValidatePathA(int8_t* szFullPathBuffer)
    {
        auto win32_impl_result = WIN32_IMPL_PdhValidatePathA(szFullPathBuffer);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfObjectW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szDefaultObjectName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfObjectW(szDataSource, szMachineName, szDefaultObjectName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfObjectA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szDefaultObjectName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfObjectA(szDataSource, szMachineName, szDefaultObjectName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfCounterW(uint16_t* szDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* szDefaultCounterName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfCounterW(szDataSource, szMachineName, szObjectName, szDefaultCounterName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfCounterA(int8_t* szDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* szDefaultCounterName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfCounterA(szDataSource, szMachineName, szObjectName, szDefaultCounterName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhBrowseCountersW(Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_W* pBrowseDlgData)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBrowseCountersW(pBrowseDlgData);
        return win32_impl_result;
    }
    inline int32_t PdhBrowseCountersA(Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_A* pBrowseDlgData)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBrowseCountersA(pBrowseDlgData);
        return win32_impl_result;
    }
    inline int32_t PdhExpandCounterPathW(uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandCounterPathW(szWildCardPath, mszExpandedPathList, pcchPathListLength);
        return win32_impl_result;
    }
    inline int32_t PdhExpandCounterPathA(int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandCounterPathA(szWildCardPath, mszExpandedPathList, pcchPathListLength);
        return win32_impl_result;
    }
    inline int32_t PdhLookupPerfNameByIndexW(uint16_t* szMachineName, uint32_t dwNameIndex, uint16_t* szNameBuffer, uint32_t* pcchNameBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhLookupPerfNameByIndexW(szMachineName, dwNameIndex, szNameBuffer, pcchNameBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhLookupPerfNameByIndexA(int8_t* szMachineName, uint32_t dwNameIndex, int8_t* szNameBuffer, uint32_t* pcchNameBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhLookupPerfNameByIndexA(szMachineName, dwNameIndex, szNameBuffer, pcchNameBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhLookupPerfIndexByNameW(uint16_t* szMachineName, uint16_t* szNameBuffer, uint32_t* pdwIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PdhLookupPerfIndexByNameW(szMachineName, szNameBuffer, pdwIndex);
        return win32_impl_result;
    }
    inline int32_t PdhLookupPerfIndexByNameA(int8_t* szMachineName, int8_t* szNameBuffer, uint32_t* pdwIndex)
    {
        auto win32_impl_result = WIN32_IMPL_PdhLookupPerfIndexByNameA(szMachineName, szNameBuffer, pdwIndex);
        return win32_impl_result;
    }
    inline int32_t PdhExpandWildCardPathA(int8_t* szDataSource, int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandWildCardPathA(szDataSource, szWildCardPath, mszExpandedPathList, pcchPathListLength, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhExpandWildCardPathW(uint16_t* szDataSource, uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandWildCardPathW(szDataSource, szWildCardPath, mszExpandedPathList, pcchPathListLength, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhOpenLogW(uint16_t* szLogFileName, uint32_t dwAccessFlags, uint32_t* lpdwLogType, intptr_t hQuery, uint32_t dwMaxSize, uint16_t* szUserCaption, intptr_t* phLog)
    {
        auto win32_impl_result = WIN32_IMPL_PdhOpenLogW(szLogFileName, dwAccessFlags, lpdwLogType, hQuery, dwMaxSize, szUserCaption, phLog);
        return win32_impl_result;
    }
    inline int32_t PdhOpenLogA(int8_t* szLogFileName, uint32_t dwAccessFlags, uint32_t* lpdwLogType, intptr_t hQuery, uint32_t dwMaxSize, int8_t* szUserCaption, intptr_t* phLog)
    {
        auto win32_impl_result = WIN32_IMPL_PdhOpenLogA(szLogFileName, dwAccessFlags, lpdwLogType, hQuery, dwMaxSize, szUserCaption, phLog);
        return win32_impl_result;
    }
    inline int32_t PdhUpdateLogW(intptr_t hLog, uint16_t* szUserString)
    {
        auto win32_impl_result = WIN32_IMPL_PdhUpdateLogW(hLog, szUserString);
        return win32_impl_result;
    }
    inline int32_t PdhUpdateLogA(intptr_t hLog, int8_t* szUserString)
    {
        auto win32_impl_result = WIN32_IMPL_PdhUpdateLogA(hLog, szUserString);
        return win32_impl_result;
    }
    inline int32_t PdhUpdateLogFileCatalog(intptr_t hLog)
    {
        auto win32_impl_result = WIN32_IMPL_PdhUpdateLogFileCatalog(hLog);
        return win32_impl_result;
    }
    inline int32_t PdhGetLogFileSize(intptr_t hLog, int64_t* llSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetLogFileSize(hLog, llSize);
        return win32_impl_result;
    }
    inline int32_t PdhCloseLog(intptr_t hLog, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCloseLog(hLog, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhSelectDataSourceW(Windows::Win32::WindowsAndMessaging::HWND hWndOwner, uint32_t dwFlags, uint16_t* szDataSource, uint32_t* pcchBufferLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSelectDataSourceW(hWndOwner, dwFlags, szDataSource, pcchBufferLength);
        return win32_impl_result;
    }
    inline int32_t PdhSelectDataSourceA(Windows::Win32::WindowsAndMessaging::HWND hWndOwner, uint32_t dwFlags, int8_t* szDataSource, uint32_t* pcchBufferLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSelectDataSourceA(hWndOwner, dwFlags, szDataSource, pcchBufferLength);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL PdhIsRealTimeQuery(intptr_t hQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhIsRealTimeQuery(hQuery);
        return win32_impl_result;
    }
    inline int32_t PdhSetQueryTimeRange(intptr_t hQuery, Windows::Win32::Perf::PDH_TIME_INFO* pInfo)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSetQueryTimeRange(hQuery, pInfo);
        return win32_impl_result;
    }
    inline int32_t PdhGetDataSourceTimeRangeW(uint16_t* szDataSource, uint32_t* pdwNumEntries, Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDataSourceTimeRangeW(szDataSource, pdwNumEntries, pInfo, pdwBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDataSourceTimeRangeA(int8_t* szDataSource, uint32_t* pdwNumEntries, Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDataSourceTimeRangeA(szDataSource, pdwNumEntries, pInfo, pdwBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhCollectQueryDataEx(intptr_t hQuery, uint32_t dwIntervalTime, Windows::Win32::SystemServices::HANDLE hNewDataEvent)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCollectQueryDataEx(hQuery, dwIntervalTime, hNewDataEvent);
        return win32_impl_result;
    }
    inline int32_t PdhFormatFromRawValue(uint32_t dwCounterType, uint32_t dwFormat, int64_t* pTimeBase, Windows::Win32::Perf::PDH_RAW_COUNTER* pRawValue1, Windows::Win32::Perf::PDH_RAW_COUNTER* pRawValue2, Windows::Win32::Perf::PDH_FMT_COUNTERVALUE* pFmtValue)
    {
        auto win32_impl_result = WIN32_IMPL_PdhFormatFromRawValue(dwCounterType, dwFormat, pTimeBase, pRawValue1, pRawValue2, pFmtValue);
        return win32_impl_result;
    }
    inline int32_t PdhGetCounterTimeBase(intptr_t hCounter, int64_t* pTimeBase)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetCounterTimeBase(hCounter, pTimeBase);
        return win32_impl_result;
    }
    inline int32_t PdhReadRawLogRecord(intptr_t hLog, Windows::Win32::WindowsProgramming::FILETIME ftRecord, Windows::Win32::Perf::PDH_RAW_LOG_RECORD* pRawLogRecord, uint32_t* pdwBufferLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhReadRawLogRecord(hLog, ftRecord, pRawLogRecord, pdwBufferLength);
        return win32_impl_result;
    }
    inline int32_t PdhSetDefaultRealTimeDataSource(uint32_t dwDataSourceId)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSetDefaultRealTimeDataSource(dwDataSourceId);
        return win32_impl_result;
    }
    inline int32_t PdhBindInputDataSourceW(intptr_t* phDataSource, uint16_t* LogFileNameList)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBindInputDataSourceW(phDataSource, LogFileNameList);
        return win32_impl_result;
    }
    inline int32_t PdhBindInputDataSourceA(intptr_t* phDataSource, int8_t* LogFileNameList)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBindInputDataSourceA(phDataSource, LogFileNameList);
        return win32_impl_result;
    }
    inline int32_t PdhOpenQueryH(intptr_t hDataSource, size_t dwUserData, intptr_t* phQuery)
    {
        auto win32_impl_result = WIN32_IMPL_PdhOpenQueryH(hDataSource, dwUserData, phQuery);
        return win32_impl_result;
    }
    inline int32_t PdhEnumMachinesHW(intptr_t hDataSource, uint16_t* mszMachineList, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumMachinesHW(hDataSource, mszMachineList, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhEnumMachinesHA(intptr_t hDataSource, int8_t* mszMachineList, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumMachinesHA(hDataSource, mszMachineList, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectsHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, Windows::Win32::SystemServices::BOOL bRefresh)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectsHW(hDataSource, szMachineName, mszObjectList, pcchBufferSize, dwDetailLevel, bRefresh);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectsHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* mszObjectList, uint32_t* pcchBufferSize, uint32_t dwDetailLevel, Windows::Win32::SystemServices::BOOL bRefresh)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectsHA(hDataSource, szMachineName, mszObjectList, pcchBufferSize, dwDetailLevel, bRefresh);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectItemsHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* mszCounterList, uint32_t* pcchCounterListLength, uint16_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectItemsHW(hDataSource, szMachineName, szObjectName, mszCounterList, pcchCounterListLength, mszInstanceList, pcchInstanceListLength, dwDetailLevel, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhEnumObjectItemsHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* mszCounterList, uint32_t* pcchCounterListLength, int8_t* mszInstanceList, uint32_t* pcchInstanceListLength, uint32_t dwDetailLevel, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumObjectItemsHA(hDataSource, szMachineName, szObjectName, mszCounterList, pcchCounterListLength, mszInstanceList, pcchInstanceListLength, dwDetailLevel, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhExpandWildCardPathHW(intptr_t hDataSource, uint16_t* szWildCardPath, uint16_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandWildCardPathHW(hDataSource, szWildCardPath, mszExpandedPathList, pcchPathListLength, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhExpandWildCardPathHA(intptr_t hDataSource, int8_t* szWildCardPath, int8_t* mszExpandedPathList, uint32_t* pcchPathListLength, uint32_t dwFlags)
    {
        auto win32_impl_result = WIN32_IMPL_PdhExpandWildCardPathHA(hDataSource, szWildCardPath, mszExpandedPathList, pcchPathListLength, dwFlags);
        return win32_impl_result;
    }
    inline int32_t PdhGetDataSourceTimeRangeH(intptr_t hDataSource, uint32_t* pdwNumEntries, Windows::Win32::Perf::PDH_TIME_INFO* pInfo, uint32_t* pdwBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDataSourceTimeRangeH(hDataSource, pdwNumEntries, pInfo, pdwBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfObjectHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szDefaultObjectName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfObjectHW(hDataSource, szMachineName, szDefaultObjectName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfObjectHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szDefaultObjectName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfObjectHA(hDataSource, szMachineName, szDefaultObjectName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfCounterHW(intptr_t hDataSource, uint16_t* szMachineName, uint16_t* szObjectName, uint16_t* szDefaultCounterName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfCounterHW(hDataSource, szMachineName, szObjectName, szDefaultCounterName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhGetDefaultPerfCounterHA(intptr_t hDataSource, int8_t* szMachineName, int8_t* szObjectName, int8_t* szDefaultCounterName, uint32_t* pcchBufferSize)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetDefaultPerfCounterHA(hDataSource, szMachineName, szObjectName, szDefaultCounterName, pcchBufferSize);
        return win32_impl_result;
    }
    inline int32_t PdhBrowseCountersHW(Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_HW* pBrowseDlgData)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBrowseCountersHW(pBrowseDlgData);
        return win32_impl_result;
    }
    inline int32_t PdhBrowseCountersHA(Windows::Win32::Perf::PDH_BROWSE_DLG_CONFIG_HA* pBrowseDlgData)
    {
        auto win32_impl_result = WIN32_IMPL_PdhBrowseCountersHA(pBrowseDlgData);
        return win32_impl_result;
    }
    inline int32_t PdhVerifySQLDBW(uint16_t* szDataSource)
    {
        auto win32_impl_result = WIN32_IMPL_PdhVerifySQLDBW(szDataSource);
        return win32_impl_result;
    }
    inline int32_t PdhVerifySQLDBA(int8_t* szDataSource)
    {
        auto win32_impl_result = WIN32_IMPL_PdhVerifySQLDBA(szDataSource);
        return win32_impl_result;
    }
    inline int32_t PdhCreateSQLTablesW(uint16_t* szDataSource)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCreateSQLTablesW(szDataSource);
        return win32_impl_result;
    }
    inline int32_t PdhCreateSQLTablesA(int8_t* szDataSource)
    {
        auto win32_impl_result = WIN32_IMPL_PdhCreateSQLTablesA(szDataSource);
        return win32_impl_result;
    }
    inline int32_t PdhEnumLogSetNamesW(uint16_t* szDataSource, uint16_t* mszDataSetNameList, uint32_t* pcchBufferLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumLogSetNamesW(szDataSource, mszDataSetNameList, pcchBufferLength);
        return win32_impl_result;
    }
    inline int32_t PdhEnumLogSetNamesA(int8_t* szDataSource, int8_t* mszDataSetNameList, uint32_t* pcchBufferLength)
    {
        auto win32_impl_result = WIN32_IMPL_PdhEnumLogSetNamesA(szDataSource, mszDataSetNameList, pcchBufferLength);
        return win32_impl_result;
    }
    inline int32_t PdhGetLogSetGUID(intptr_t hLog, ::win32::guid* pGuid, int32_t* pRunId)
    {
        auto win32_impl_result = WIN32_IMPL_PdhGetLogSetGUID(hLog, pGuid, pRunId);
        return win32_impl_result;
    }
    inline int32_t PdhSetLogSetRunID(intptr_t hLog, int32_t RunId)
    {
        auto win32_impl_result = WIN32_IMPL_PdhSetLogSetRunID(hLog, RunId);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
