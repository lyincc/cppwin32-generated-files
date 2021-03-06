// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_WebDav_H
#define WIN32_Windows_Win32_WebDav_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.WebDav.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::WebDav
{
#pragma region methods
    inline uint32_t DavAddConnection(Windows::Win32::SystemServices::HANDLE* ConnectionHandle, uint16_t* RemoteName, uint16_t* UserName, uint16_t* Password, uint8_t* ClientCert, uint32_t CertSize)
    {
        auto win32_impl_result = WIN32_IMPL_DavAddConnection(ConnectionHandle, RemoteName, UserName, Password, ClientCert, CertSize);
        return win32_impl_result;
    }
    inline uint32_t DavDeleteConnection(Windows::Win32::SystemServices::HANDLE ConnectionHandle)
    {
        auto win32_impl_result = WIN32_IMPL_DavDeleteConnection(ConnectionHandle);
        return win32_impl_result;
    }
    inline uint32_t DavGetUNCFromHTTPPath(uint16_t* Url, uint16_t* UncPath, uint32_t* lpSize)
    {
        auto win32_impl_result = WIN32_IMPL_DavGetUNCFromHTTPPath(Url, UncPath, lpSize);
        return win32_impl_result;
    }
    inline uint32_t DavGetHTTPFromUNCPath(uint16_t* UncPath, uint16_t* Url, uint32_t* lpSize)
    {
        auto win32_impl_result = WIN32_IMPL_DavGetHTTPFromUNCPath(UncPath, Url, lpSize);
        return win32_impl_result;
    }
    inline uint32_t DavGetTheLockOwnerOfTheFile(uint16_t* FileName, uint16_t* LockOwnerName, uint32_t* LockOwnerNameLengthInBytes)
    {
        auto win32_impl_result = WIN32_IMPL_DavGetTheLockOwnerOfTheFile(FileName, LockOwnerName, LockOwnerNameLengthInBytes);
        return win32_impl_result;
    }
    inline uint32_t DavGetExtendedError(Windows::Win32::SystemServices::HANDLE hFile, uint32_t* ExtError, uint16_t* ExtErrorString, uint32_t* cChSize)
    {
        auto win32_impl_result = WIN32_IMPL_DavGetExtendedError(hFile, ExtError, ExtErrorString, cChSize);
        return win32_impl_result;
    }
    inline uint32_t DavFlushFile(Windows::Win32::SystemServices::HANDLE hFile)
    {
        auto win32_impl_result = WIN32_IMPL_DavFlushFile(hFile);
        return win32_impl_result;
    }
    inline uint32_t DavInvalidateCache(uint16_t* URLName)
    {
        auto win32_impl_result = WIN32_IMPL_DavInvalidateCache(URLName);
        return win32_impl_result;
    }
    inline uint32_t DavCancelConnectionsToServer(uint16_t* lpName, Windows::Win32::SystemServices::BOOL fForce)
    {
        auto win32_impl_result = WIN32_IMPL_DavCancelConnectionsToServer(lpName, fForce);
        return win32_impl_result;
    }
    inline uint32_t DavRegisterAuthCallback(Windows::Win32::WebDav::PFNDAVAUTHCALLBACK* CallBack, uint32_t Version)
    {
        auto win32_impl_result = WIN32_IMPL_DavRegisterAuthCallback(CallBack, Version);
        return win32_impl_result;
    }
    inline void DavUnregisterAuthCallback(uint32_t hCallback)
    {
        WIN32_IMPL_DavUnregisterAuthCallback(hCallback);
    }

#pragma endregion methods

}
#endif
