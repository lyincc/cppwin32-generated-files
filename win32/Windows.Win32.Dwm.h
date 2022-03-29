// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_Dwm_H
#define WIN32_Windows_Win32_Dwm_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.Dwm.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::Dwm
{
#pragma region methods
    inline Windows::Win32::SystemServices::BOOL DwmDefWindowProc(Windows::Win32::WindowsAndMessaging::HWND hWnd, uint32_t msg, Windows::Win32::WindowsAndMessaging::WPARAM wParam, Windows::Win32::WindowsAndMessaging::LPARAM lParam, Windows::Win32::SystemServices::LRESULT* plResult)
    {
        auto win32_impl_result = WIN32_IMPL_DwmDefWindowProc(hWnd, msg, wParam, lParam, plResult);
        return win32_impl_result;
    }
    inline int32_t DwmEnableBlurBehindWindow(Windows::Win32::WindowsAndMessaging::HWND hWnd, Windows::Win32::Dwm::DWM_BLURBEHIND* pBlurBehind)
    {
        auto win32_impl_result = WIN32_IMPL_DwmEnableBlurBehindWindow(hWnd, pBlurBehind);
        return win32_impl_result;
    }
    inline int32_t DwmEnableComposition(uint32_t uCompositionAction)
    {
        auto win32_impl_result = WIN32_IMPL_DwmEnableComposition(uCompositionAction);
        return win32_impl_result;
    }
    inline int32_t DwmEnableMMCSS(Windows::Win32::SystemServices::BOOL fEnableMMCSS)
    {
        auto win32_impl_result = WIN32_IMPL_DwmEnableMMCSS(fEnableMMCSS);
        return win32_impl_result;
    }
    inline int32_t DwmExtendFrameIntoClientArea(Windows::Win32::WindowsAndMessaging::HWND hWnd, Windows::Win32::Controls::MARGINS* pMarInset)
    {
        auto win32_impl_result = WIN32_IMPL_DwmExtendFrameIntoClientArea(hWnd, pMarInset);
        return win32_impl_result;
    }
    inline int32_t DwmGetColorizationColor(uint32_t* pcrColorization, int32_t* pfOpaqueBlend)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetColorizationColor(pcrColorization, pfOpaqueBlend);
        return win32_impl_result;
    }
    inline int32_t DwmGetCompositionTimingInfo(Windows::Win32::WindowsAndMessaging::HWND hwnd, Windows::Win32::Dwm::DWM_TIMING_INFO* pTimingInfo)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetCompositionTimingInfo(hwnd, pTimingInfo);
        return win32_impl_result;
    }
    inline int32_t DwmGetWindowAttribute(Windows::Win32::WindowsAndMessaging::HWND hwnd, uint32_t dwAttribute, void* pvAttribute, uint32_t cbAttribute)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetWindowAttribute(hwnd, dwAttribute, pvAttribute, cbAttribute);
        return win32_impl_result;
    }
    inline int32_t DwmIsCompositionEnabled(int32_t* pfEnabled)
    {
        auto win32_impl_result = WIN32_IMPL_DwmIsCompositionEnabled(pfEnabled);
        return win32_impl_result;
    }
    inline int32_t DwmModifyPreviousDxFrameDuration(Windows::Win32::WindowsAndMessaging::HWND hwnd, int32_t cRefreshes, Windows::Win32::SystemServices::BOOL fRelative)
    {
        auto win32_impl_result = WIN32_IMPL_DwmModifyPreviousDxFrameDuration(hwnd, cRefreshes, fRelative);
        return win32_impl_result;
    }
    inline int32_t DwmQueryThumbnailSourceSize(intptr_t hThumbnail, Windows::Win32::DisplayDevices::SIZE* pSize)
    {
        auto win32_impl_result = WIN32_IMPL_DwmQueryThumbnailSourceSize(hThumbnail, pSize);
        return win32_impl_result;
    }
    inline int32_t DwmRegisterThumbnail(Windows::Win32::WindowsAndMessaging::HWND hwndDestination, Windows::Win32::WindowsAndMessaging::HWND hwndSource, intptr_t* phThumbnailId)
    {
        auto win32_impl_result = WIN32_IMPL_DwmRegisterThumbnail(hwndDestination, hwndSource, phThumbnailId);
        return win32_impl_result;
    }
    inline int32_t DwmSetDxFrameDuration(Windows::Win32::WindowsAndMessaging::HWND hwnd, int32_t cRefreshes)
    {
        auto win32_impl_result = WIN32_IMPL_DwmSetDxFrameDuration(hwnd, cRefreshes);
        return win32_impl_result;
    }
    inline int32_t DwmSetPresentParameters(Windows::Win32::WindowsAndMessaging::HWND hwnd, Windows::Win32::Dwm::DWM_PRESENT_PARAMETERS* pPresentParams)
    {
        auto win32_impl_result = WIN32_IMPL_DwmSetPresentParameters(hwnd, pPresentParams);
        return win32_impl_result;
    }
    inline int32_t DwmSetWindowAttribute(Windows::Win32::WindowsAndMessaging::HWND hwnd, uint32_t dwAttribute, void* pvAttribute, uint32_t cbAttribute)
    {
        auto win32_impl_result = WIN32_IMPL_DwmSetWindowAttribute(hwnd, dwAttribute, pvAttribute, cbAttribute);
        return win32_impl_result;
    }
    inline int32_t DwmUnregisterThumbnail(intptr_t hThumbnailId)
    {
        auto win32_impl_result = WIN32_IMPL_DwmUnregisterThumbnail(hThumbnailId);
        return win32_impl_result;
    }
    inline int32_t DwmUpdateThumbnailProperties(intptr_t hThumbnailId, Windows::Win32::Dwm::DWM_THUMBNAIL_PROPERTIES* ptnProperties)
    {
        auto win32_impl_result = WIN32_IMPL_DwmUpdateThumbnailProperties(hThumbnailId, ptnProperties);
        return win32_impl_result;
    }
    inline int32_t DwmSetIconicThumbnail(Windows::Win32::WindowsAndMessaging::HWND hwnd, Windows::Win32::Gdi::HBITMAP hbmp, uint32_t dwSITFlags)
    {
        auto win32_impl_result = WIN32_IMPL_DwmSetIconicThumbnail(hwnd, hbmp, dwSITFlags);
        return win32_impl_result;
    }
    inline int32_t DwmSetIconicLivePreviewBitmap(Windows::Win32::WindowsAndMessaging::HWND hwnd, Windows::Win32::Gdi::HBITMAP hbmp, Windows::Win32::DisplayDevices::POINT* pptClient, uint32_t dwSITFlags)
    {
        auto win32_impl_result = WIN32_IMPL_DwmSetIconicLivePreviewBitmap(hwnd, hbmp, pptClient, dwSITFlags);
        return win32_impl_result;
    }
    inline int32_t DwmInvalidateIconicBitmaps(Windows::Win32::WindowsAndMessaging::HWND hwnd)
    {
        auto win32_impl_result = WIN32_IMPL_DwmInvalidateIconicBitmaps(hwnd);
        return win32_impl_result;
    }
    inline int32_t DwmAttachMilContent(Windows::Win32::WindowsAndMessaging::HWND hwnd)
    {
        auto win32_impl_result = WIN32_IMPL_DwmAttachMilContent(hwnd);
        return win32_impl_result;
    }
    inline int32_t DwmDetachMilContent(Windows::Win32::WindowsAndMessaging::HWND hwnd)
    {
        auto win32_impl_result = WIN32_IMPL_DwmDetachMilContent(hwnd);
        return win32_impl_result;
    }
    inline int32_t DwmFlush()
    {
        auto win32_impl_result = WIN32_IMPL_DwmFlush();
        return win32_impl_result;
    }
    inline int32_t DwmGetGraphicsStreamTransformHint(uint32_t uIndex, Windows::Win32::WpfBitmapEffects::MilMatrix3x2D* pTransform)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetGraphicsStreamTransformHint(uIndex, pTransform);
        return win32_impl_result;
    }
    inline int32_t DwmGetGraphicsStreamClient(uint32_t uIndex, ::win32::guid* pClientUuid)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetGraphicsStreamClient(uIndex, pClientUuid);
        return win32_impl_result;
    }
    inline int32_t DwmGetTransportAttributes(int32_t* pfIsRemoting, int32_t* pfIsConnected, uint32_t* pDwGeneration)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetTransportAttributes(pfIsRemoting, pfIsConnected, pDwGeneration);
        return win32_impl_result;
    }
    inline int32_t DwmTransitionOwnedWindow(Windows::Win32::WindowsAndMessaging::HWND hwnd, Windows::Win32::Dwm::DWMTRANSITION_OWNEDWINDOW_TARGET target)
    {
        auto win32_impl_result = WIN32_IMPL_DwmTransitionOwnedWindow(hwnd, target);
        return win32_impl_result;
    }
    inline int32_t DwmRenderGesture(Windows::Win32::Dwm::GESTURE_TYPE gt, uint32_t cContacts, uint32_t* pdwPointerID, Windows::Win32::DisplayDevices::POINT* pPoints)
    {
        auto win32_impl_result = WIN32_IMPL_DwmRenderGesture(gt, cContacts, pdwPointerID, pPoints);
        return win32_impl_result;
    }
    inline int32_t DwmTetherContact(uint32_t dwPointerID, Windows::Win32::SystemServices::BOOL fEnable, Windows::Win32::DisplayDevices::POINT ptTether)
    {
        auto win32_impl_result = WIN32_IMPL_DwmTetherContact(dwPointerID, fEnable, ptTether);
        return win32_impl_result;
    }
    inline int32_t DwmShowContact(uint32_t dwPointerID, Windows::Win32::Dwm::DWM_SHOWCONTACT eShowContact)
    {
        auto win32_impl_result = WIN32_IMPL_DwmShowContact(dwPointerID, eShowContact);
        return win32_impl_result;
    }
    inline int32_t DwmGetUnmetTabRequirements(Windows::Win32::WindowsAndMessaging::HWND appWindow, Windows::Win32::Dwm::DWM_TAB_WINDOW_REQUIREMENTS* value)
    {
        auto win32_impl_result = WIN32_IMPL_DwmGetUnmetTabRequirements(appWindow, value);
        return win32_impl_result;
    }

    inline constexpr uint32_t c_DwmMaxQueuedBuffers = 0x8;
    inline constexpr uint32_t c_DwmMaxMonitors = 0x10;
    inline constexpr uint32_t c_DwmMaxAdapters = 0x10;
#pragma endregion methods

}
#endif