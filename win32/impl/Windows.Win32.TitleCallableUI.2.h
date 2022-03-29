// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_TitleCallableUI_2_H
#define WIN32_Windows_Win32_TitleCallableUI_2_H
#include "win32/impl/Windows.Win32.TitleCallableUI.1.h"
#include "win32/impl/complex_interfaces.h"
#pragma region abi_methods
extern "C"
{
    int32_t __stdcall WIN32_IMPL_ShowGameInviteUI(intptr_t serviceConfigurationId, intptr_t sessionTemplateName, intptr_t sessionId, intptr_t invitationDisplayText, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowPlayerPickerUI(intptr_t promptDisplayText, intptr_t* xuids, size_t xuidsCount, intptr_t* preSelectedXuids, size_t preSelectedXuidsCount, size_t minSelectionCount, size_t maxSelectionCount, win32::Windows::Win32::TitleCallableUI::PlayerPickerUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowProfileCardUI(intptr_t targetUserXuid, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowChangeFriendRelationshipUI(intptr_t targetUserXuid, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowTitleAchievementsUI(uint32_t titleId, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ProcessPendingGameUI(win32::Windows::Win32::SystemServices::BOOL waitForCompletion) noexcept;
    win32::Windows::Win32::SystemServices::BOOL __stdcall WIN32_IMPL_TryCancelPendingGameUI() noexcept;
    int32_t __stdcall WIN32_IMPL_CheckGamingPrivilegeWithUI(uint32_t privilegeId, intptr_t scope, intptr_t policy, intptr_t friendlyMessage, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_CheckGamingPrivilegeSilently(uint32_t privilegeId, intptr_t scope, intptr_t policy, int32_t* hasPrivilege) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowGameInviteUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, intptr_t serviceConfigurationId, intptr_t sessionTemplateName, intptr_t sessionId, intptr_t invitationDisplayText, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowPlayerPickerUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, intptr_t promptDisplayText, intptr_t* xuids, size_t xuidsCount, intptr_t* preSelectedXuids, size_t preSelectedXuidsCount, size_t minSelectionCount, size_t maxSelectionCount, win32::Windows::Win32::TitleCallableUI::PlayerPickerUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowProfileCardUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, intptr_t targetUserXuid, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowChangeFriendRelationshipUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, intptr_t targetUserXuid, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowTitleAchievementsUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, uint32_t titleId, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_CheckGamingPrivilegeWithUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, uint32_t privilegeId, intptr_t scope, intptr_t policy, intptr_t friendlyMessage, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_CheckGamingPrivilegeSilentlyForUser(win32::Windows::Win32::WinRT::IInspectable* user, uint32_t privilegeId, intptr_t scope, intptr_t policy, int32_t* hasPrivilege) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowGameInviteUIWithContext(intptr_t serviceConfigurationId, intptr_t sessionTemplateName, intptr_t sessionId, intptr_t invitationDisplayText, intptr_t customActivationContext, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowGameInviteUIWithContextForUser(win32::Windows::Win32::WinRT::IInspectable* user, intptr_t serviceConfigurationId, intptr_t sessionTemplateName, intptr_t sessionId, intptr_t invitationDisplayText, intptr_t customActivationContext, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowGameInfoUI(uint32_t titleId, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowGameInfoUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, uint32_t titleId, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowFindFriendsUI(win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowFindFriendsUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowCustomizeUserProfileUI(win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowCustomizeUserProfileUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowUserSettingsUI(win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
    int32_t __stdcall WIN32_IMPL_ShowUserSettingsUIForUser(win32::Windows::Win32::WinRT::IInspectable* user, win32::Windows::Win32::TitleCallableUI::GameUICompletionRoutine* completionRoutine, void* context) noexcept;
}
WIN32_IMPL_LINK(ShowGameInviteUI, 24)
WIN32_IMPL_LINK(ShowPlayerPickerUI, 36)
WIN32_IMPL_LINK(ShowProfileCardUI, 12)
WIN32_IMPL_LINK(ShowChangeFriendRelationshipUI, 12)
WIN32_IMPL_LINK(ShowTitleAchievementsUI, 12)
WIN32_IMPL_LINK(ProcessPendingGameUI, 4)
WIN32_IMPL_LINK(TryCancelPendingGameUI, 0)
WIN32_IMPL_LINK(CheckGamingPrivilegeWithUI, 24)
WIN32_IMPL_LINK(CheckGamingPrivilegeSilently, 16)
WIN32_IMPL_LINK(ShowGameInviteUIForUser, 28)
WIN32_IMPL_LINK(ShowPlayerPickerUIForUser, 40)
WIN32_IMPL_LINK(ShowProfileCardUIForUser, 16)
WIN32_IMPL_LINK(ShowChangeFriendRelationshipUIForUser, 16)
WIN32_IMPL_LINK(ShowTitleAchievementsUIForUser, 16)
WIN32_IMPL_LINK(CheckGamingPrivilegeWithUIForUser, 28)
WIN32_IMPL_LINK(CheckGamingPrivilegeSilentlyForUser, 20)
WIN32_IMPL_LINK(ShowGameInviteUIWithContext, 28)
WIN32_IMPL_LINK(ShowGameInviteUIWithContextForUser, 32)
WIN32_IMPL_LINK(ShowGameInfoUI, 12)
WIN32_IMPL_LINK(ShowGameInfoUIForUser, 16)
WIN32_IMPL_LINK(ShowFindFriendsUI, 8)
WIN32_IMPL_LINK(ShowFindFriendsUIForUser, 12)
WIN32_IMPL_LINK(ShowCustomizeUserProfileUI, 8)
WIN32_IMPL_LINK(ShowCustomizeUserProfileUIForUser, 12)
WIN32_IMPL_LINK(ShowUserSettingsUI, 8)
WIN32_IMPL_LINK(ShowUserSettingsUIForUser, 12)

#pragma endregion abi_methods

#endif