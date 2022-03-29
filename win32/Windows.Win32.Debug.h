// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Debug_H
#define WIN32_Windows_Win32_Debug_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Debug.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Debug
{
#pragma region methods
    inline void RtlCaptureContext(Windows::Win32::Debug::CONTEXT* ContextRecord)
    {
        WIN32_IMPL_RtlCaptureContext(ContextRecord);
    }
    inline void RtlUnwind(void* TargetFrame, void* TargetIp, Windows::Win32::Debug::EXCEPTION_RECORD* ExceptionRecord, void* ReturnValue)
    {
        WIN32_IMPL_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
    }
    inline void* RtlPcToFileHeader(void* PcValue, void** BaseOfImage)
    {
        auto win32_impl_result = WIN32_IMPL_RtlPcToFileHeader(PcValue, BaseOfImage);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL ReadProcessMemory(Windows::Win32::SystemServices::HANDLE hProcess, void* lpBaseAddress, void* lpBuffer, size_t nSize, size_t* lpNumberOfBytesRead)
    {
        auto win32_impl_result = WIN32_IMPL_ReadProcessMemory(hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesRead);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL WriteProcessMemory(Windows::Win32::SystemServices::HANDLE hProcess, void* lpBaseAddress, void* lpBuffer, size_t nSize, size_t* lpNumberOfBytesWritten)
    {
        auto win32_impl_result = WIN32_IMPL_WriteProcessMemory(hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesWritten);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FlashWindow(Windows::Win32::WindowsAndMessaging::HWND hWnd, Windows::Win32::SystemServices::BOOL bInvert)
    {
        auto win32_impl_result = WIN32_IMPL_FlashWindow(hWnd, bInvert);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FlashWindowEx(Windows::Win32::Debug::FLASHWINFO* pfwi)
    {
        auto win32_impl_result = WIN32_IMPL_FlashWindowEx(pfwi);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL MessageBeep(uint32_t uType)
    {
        auto win32_impl_result = WIN32_IMPL_MessageBeep(uType);
        return win32_impl_result;
    }
    inline void SetLastErrorEx(uint32_t dwErrCode, uint32_t dwType)
    {
        WIN32_IMPL_SetLastErrorEx(dwErrCode, dwType);
    }
    inline Windows::Win32::SystemServices::BOOL Wow64GetThreadContext(Windows::Win32::SystemServices::HANDLE hThread, Windows::Win32::Debug::WOW64_CONTEXT* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_Wow64GetThreadContext(hThread, lpContext);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL Wow64SetThreadContext(Windows::Win32::SystemServices::HANDLE hThread, Windows::Win32::Debug::WOW64_CONTEXT* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_Wow64SetThreadContext(hThread, lpContext);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL GetThreadContext(Windows::Win32::SystemServices::HANDLE hThread, Windows::Win32::Debug::CONTEXT* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_GetThreadContext(hThread, lpContext);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL SetThreadContext(Windows::Win32::SystemServices::HANDLE hThread, Windows::Win32::Debug::CONTEXT* lpContext)
    {
        auto win32_impl_result = WIN32_IMPL_SetThreadContext(hThread, lpContext);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL FlushInstructionCache(Windows::Win32::SystemServices::HANDLE hProcess, void* lpBaseAddress, size_t dwSize)
    {
        auto win32_impl_result = WIN32_IMPL_FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
        return win32_impl_result;
    }
    inline void FatalExit(int32_t ExitCode)
    {
        WIN32_IMPL_FatalExit(ExitCode);
    }
    inline Windows::Win32::SystemServices::BOOL GetThreadSelectorEntry(Windows::Win32::SystemServices::HANDLE hThread, uint32_t dwSelector, Windows::Win32::Debug::LDT_ENTRY* lpSelectorEntry)
    {
        auto win32_impl_result = WIN32_IMPL_GetThreadSelectorEntry(hThread, dwSelector, lpSelectorEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL Wow64GetThreadSelectorEntry(Windows::Win32::SystemServices::HANDLE hThread, uint32_t dwSelector, Windows::Win32::Debug::WOW64_LDT_ENTRY* lpSelectorEntry)
    {
        auto win32_impl_result = WIN32_IMPL_Wow64GetThreadSelectorEntry(hThread, dwSelector, lpSelectorEntry);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL DebugSetProcessKillOnExit(Windows::Win32::SystemServices::BOOL KillOnExit)
    {
        auto win32_impl_result = WIN32_IMPL_DebugSetProcessKillOnExit(KillOnExit);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL DebugBreakProcess(Windows::Win32::SystemServices::HANDLE Process)
    {
        auto win32_impl_result = WIN32_IMPL_DebugBreakProcess(Process);
        return win32_impl_result;
    }
    inline uint32_t FormatMessageA(uint32_t dwFlags, void* lpSource, uint32_t dwMessageId, uint32_t dwLanguageId, int8_t* lpBuffer, uint32_t nSize, int8_t** Arguments)
    {
        auto win32_impl_result = WIN32_IMPL_FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
        return win32_impl_result;
    }
    inline uint32_t FormatMessageW(uint32_t dwFlags, void* lpSource, uint32_t dwMessageId, uint32_t dwLanguageId, uint16_t* lpBuffer, uint32_t nSize, int8_t** Arguments)
    {
        auto win32_impl_result = WIN32_IMPL_FormatMessageW(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL CopyContext(Windows::Win32::Debug::CONTEXT* Destination, uint32_t ContextFlags, Windows::Win32::Debug::CONTEXT* Source)
    {
        auto win32_impl_result = WIN32_IMPL_CopyContext(Destination, ContextFlags, Source);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL InitializeContext(void* Buffer, uint32_t ContextFlags, Windows::Win32::Debug::CONTEXT** Context, uint32_t* ContextLength)
    {
        auto win32_impl_result = WIN32_IMPL_InitializeContext(Buffer, ContextFlags, Context, ContextLength);
        return win32_impl_result;
    }
    inline uint64_t GetEnabledXStateFeatures()
    {
        auto win32_impl_result = WIN32_IMPL_GetEnabledXStateFeatures();
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL GetXStateFeaturesMask(Windows::Win32::Debug::CONTEXT* Context, uint64_t* FeatureMask)
    {
        auto win32_impl_result = WIN32_IMPL_GetXStateFeaturesMask(Context, FeatureMask);
        return win32_impl_result;
    }
    inline void* LocateXStateFeature(Windows::Win32::Debug::CONTEXT* Context, uint32_t FeatureId, uint32_t* Length)
    {
        auto win32_impl_result = WIN32_IMPL_LocateXStateFeature(Context, FeatureId, Length);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL SetXStateFeaturesMask(Windows::Win32::Debug::CONTEXT* Context, uint64_t FeatureMask)
    {
        auto win32_impl_result = WIN32_IMPL_SetXStateFeaturesMask(Context, FeatureMask);
        return win32_impl_result;
    }
    inline uint32_t RtlNtStatusToDosError(Windows::Win32::SystemServices::NTSTATUS Status)
    {
        auto win32_impl_result = WIN32_IMPL_RtlNtStatusToDosError(Status);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL IsDebuggerPresent()
    {
        auto win32_impl_result = WIN32_IMPL_IsDebuggerPresent();
        return win32_impl_result;
    }
    inline void DebugBreak()
    {
        WIN32_IMPL_DebugBreak();
    }
    inline void OutputDebugStringA(int8_t* lpOutputString)
    {
        WIN32_IMPL_OutputDebugStringA(lpOutputString);
    }
    inline void OutputDebugStringW(uint16_t* lpOutputString)
    {
        WIN32_IMPL_OutputDebugStringW(lpOutputString);
    }
    inline Windows::Win32::SystemServices::BOOL ContinueDebugEvent(uint32_t dwProcessId, uint32_t dwThreadId, uint32_t dwContinueStatus)
    {
        auto win32_impl_result = WIN32_IMPL_ContinueDebugEvent(dwProcessId, dwThreadId, dwContinueStatus);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL WaitForDebugEvent(Windows::Win32::Debug::DEBUG_EVENT* lpDebugEvent, uint32_t dwMilliseconds)
    {
        auto win32_impl_result = WIN32_IMPL_WaitForDebugEvent(lpDebugEvent, dwMilliseconds);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL DebugActiveProcess(uint32_t dwProcessId)
    {
        auto win32_impl_result = WIN32_IMPL_DebugActiveProcess(dwProcessId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL DebugActiveProcessStop(uint32_t dwProcessId)
    {
        auto win32_impl_result = WIN32_IMPL_DebugActiveProcessStop(dwProcessId);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL CheckRemoteDebuggerPresent(Windows::Win32::SystemServices::HANDLE hProcess, int32_t* pbDebuggerPresent)
    {
        auto win32_impl_result = WIN32_IMPL_CheckRemoteDebuggerPresent(hProcess, pbDebuggerPresent);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL WaitForDebugEventEx(Windows::Win32::Debug::DEBUG_EVENT* lpDebugEvent, uint32_t dwMilliseconds)
    {
        auto win32_impl_result = WIN32_IMPL_WaitForDebugEventEx(lpDebugEvent, dwMilliseconds);
        return win32_impl_result;
    }
    inline void* EncodePointer(void* Ptr)
    {
        auto win32_impl_result = WIN32_IMPL_EncodePointer(Ptr);
        return win32_impl_result;
    }
    inline void* DecodePointer(void* Ptr)
    {
        auto win32_impl_result = WIN32_IMPL_DecodePointer(Ptr);
        return win32_impl_result;
    }
    inline void* EncodeSystemPointer(void* Ptr)
    {
        auto win32_impl_result = WIN32_IMPL_EncodeSystemPointer(Ptr);
        return win32_impl_result;
    }
    inline void* DecodeSystemPointer(void* Ptr)
    {
        auto win32_impl_result = WIN32_IMPL_DecodeSystemPointer(Ptr);
        return win32_impl_result;
    }
    inline int32_t EncodeRemotePointer(Windows::Win32::SystemServices::HANDLE ProcessHandle, void* Ptr, void** EncodedPtr)
    {
        auto win32_impl_result = WIN32_IMPL_EncodeRemotePointer(ProcessHandle, Ptr, EncodedPtr);
        return win32_impl_result;
    }
    inline int32_t DecodeRemotePointer(Windows::Win32::SystemServices::HANDLE ProcessHandle, void* Ptr, void** DecodedPtr)
    {
        auto win32_impl_result = WIN32_IMPL_DecodeRemotePointer(ProcessHandle, Ptr, DecodedPtr);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL Beep(uint32_t dwFreq, uint32_t dwDuration)
    {
        auto win32_impl_result = WIN32_IMPL_Beep(dwFreq, dwDuration);
        return win32_impl_result;
    }
    inline void RaiseException(uint32_t dwExceptionCode, uint32_t dwExceptionFlags, uint32_t nNumberOfArguments, size_t* lpArguments)
    {
        WIN32_IMPL_RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
    }
    inline int32_t UnhandledExceptionFilter(Windows::Win32::Debug::EXCEPTION_POINTERS* ExceptionInfo)
    {
        auto win32_impl_result = WIN32_IMPL_UnhandledExceptionFilter(ExceptionInfo);
        return win32_impl_result;
    }
    inline Windows::Win32::Debug::LPTOP_LEVEL_EXCEPTION_FILTER* SetUnhandledExceptionFilter(Windows::Win32::Debug::LPTOP_LEVEL_EXCEPTION_FILTER* lpTopLevelExceptionFilter)
    {
        auto win32_impl_result = WIN32_IMPL_SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
        return win32_impl_result;
    }
    inline uint32_t GetLastError()
    {
        auto win32_impl_result = WIN32_IMPL_GetLastError();
        return win32_impl_result;
    }
    inline void SetLastError(uint32_t dwErrCode)
    {
        WIN32_IMPL_SetLastError(dwErrCode);
    }
    inline uint32_t GetErrorMode()
    {
        auto win32_impl_result = WIN32_IMPL_GetErrorMode();
        return win32_impl_result;
    }
    inline uint32_t SetErrorMode(uint32_t uMode)
    {
        auto win32_impl_result = WIN32_IMPL_SetErrorMode(uMode);
        return win32_impl_result;
    }
    inline void* AddVectoredExceptionHandler(uint32_t First, Windows::Win32::Debug::PVECTORED_EXCEPTION_HANDLER* Handler)
    {
        auto win32_impl_result = WIN32_IMPL_AddVectoredExceptionHandler(First, Handler);
        return win32_impl_result;
    }
    inline uint32_t RemoveVectoredExceptionHandler(void* Handle)
    {
        auto win32_impl_result = WIN32_IMPL_RemoveVectoredExceptionHandler(Handle);
        return win32_impl_result;
    }
    inline void* AddVectoredContinueHandler(uint32_t First, Windows::Win32::Debug::PVECTORED_EXCEPTION_HANDLER* Handler)
    {
        auto win32_impl_result = WIN32_IMPL_AddVectoredContinueHandler(First, Handler);
        return win32_impl_result;
    }
    inline uint32_t RemoveVectoredContinueHandler(void* Handle)
    {
        auto win32_impl_result = WIN32_IMPL_RemoveVectoredContinueHandler(Handle);
        return win32_impl_result;
    }
    inline void RaiseFailFastException(Windows::Win32::Debug::EXCEPTION_RECORD* pExceptionRecord, Windows::Win32::Debug::CONTEXT* pContextRecord, uint32_t dwFlags)
    {
        WIN32_IMPL_RaiseFailFastException(pExceptionRecord, pContextRecord, dwFlags);
    }
    inline void FatalAppExitA(uint32_t uAction, int8_t* lpMessageText)
    {
        WIN32_IMPL_FatalAppExitA(uAction, lpMessageText);
    }
    inline void FatalAppExitW(uint32_t uAction, uint16_t* lpMessageText)
    {
        WIN32_IMPL_FatalAppExitW(uAction, lpMessageText);
    }
    inline uint32_t GetThreadErrorMode()
    {
        auto win32_impl_result = WIN32_IMPL_GetThreadErrorMode();
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL SetThreadErrorMode(uint32_t dwNewMode, uint32_t* lpOldMode)
    {
        auto win32_impl_result = WIN32_IMPL_SetThreadErrorMode(dwNewMode, lpOldMode);
        return win32_impl_result;
    }
    inline void TerminateProcessOnMemoryExhaustion(size_t FailedAllocationSize)
    {
        WIN32_IMPL_TerminateProcessOnMemoryExhaustion(FailedAllocationSize);
    }
    inline void* OpenThreadWaitChainSession(uint32_t Flags, Windows::Win32::Debug::PWAITCHAINCALLBACK* callback)
    {
        auto win32_impl_result = WIN32_IMPL_OpenThreadWaitChainSession(Flags, callback);
        return win32_impl_result;
    }
    inline void CloseThreadWaitChainSession(void* WctHandle)
    {
        WIN32_IMPL_CloseThreadWaitChainSession(WctHandle);
    }
    inline Windows::Win32::SystemServices::BOOL GetThreadWaitChain(void* WctHandle, size_t Context, uint32_t Flags, uint32_t ThreadId, uint32_t* NodeCount, Windows::Win32::Debug::WAITCHAIN_NODE_INFO* NodeInfoArray, int32_t* IsCycle)
    {
        auto win32_impl_result = WIN32_IMPL_GetThreadWaitChain(WctHandle, Context, Flags, ThreadId, NodeCount, NodeInfoArray, IsCycle);
        return win32_impl_result;
    }
    inline void RegisterWaitChainCOMCallback(Windows::Win32::Debug::PCOGETCALLSTATE* CallStateCallback, Windows::Win32::Debug::PCOGETACTIVATIONSTATE* ActivationStateCallback)
    {
        WIN32_IMPL_RegisterWaitChainCOMCallback(CallStateCallback, ActivationStateCallback);
    }
    inline Windows::Win32::SystemServices::BOOL MiniDumpWriteDump(Windows::Win32::SystemServices::HANDLE hProcess, uint32_t ProcessId, Windows::Win32::SystemServices::HANDLE hFile, Windows::Win32::Debug::MINIDUMP_TYPE DumpType, Windows::Win32::Debug::MINIDUMP_EXCEPTION_INFORMATION* ExceptionParam, Windows::Win32::Debug::MINIDUMP_USER_STREAM_INFORMATION* UserStreamParam, Windows::Win32::Debug::MINIDUMP_CALLBACK_INFORMATION* CallbackParam)
    {
        auto win32_impl_result = WIN32_IMPL_MiniDumpWriteDump(hProcess, ProcessId, hFile, DumpType, ExceptionParam, UserStreamParam, CallbackParam);
        return win32_impl_result;
    }
    inline Windows::Win32::SystemServices::BOOL MiniDumpReadDumpStream(void* BaseOfDump, uint32_t StreamNumber, Windows::Win32::Debug::MINIDUMP_DIRECTORY** Dir, void** StreamPointer, uint32_t* StreamSize)
    {
        auto win32_impl_result = WIN32_IMPL_MiniDumpReadDumpStream(BaseOfDump, StreamNumber, Dir, StreamPointer, StreamSize);
        return win32_impl_result;
    }

    inline constexpr int32_t ACTIVPROF_E_PROFILER_PRESENT = -2147220992;
    inline constexpr int32_t ACTIVPROF_E_PROFILER_ABSENT = -2147220991;
    inline constexpr int32_t ACTIVPROF_E_UNABLE_TO_APPLY_ACTION = -2147220990;
    inline constexpr uint32_t PROFILER_HEAP_OBJECT_NAME_ID_UNAVAILABLE = 0xffffffff;
#pragma endregion methods

}
#endif
