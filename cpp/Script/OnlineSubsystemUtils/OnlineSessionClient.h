// /Script/OnlineSubsystemUtils.OnlineSessionClient
// Derives from: UOnlineSession > UObject
// size 0x1C8, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/OnlineSessionClient.h

UCLASS(Config=Game)
class UOnlineSessionClient : public UOnlineSession
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnEndForJoinSessionCompleteDelegate;  // 0x0028, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnDestroyForJoinSessionCompleteDelegate;  // 0x0038, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnDestroyForMainMenuCompleteDelegate;  // 0x0048, not reflected
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> OnJoinSessionCompleteDelegate;  // 0x0058, not reflected
    TDelegate<void __cdecl(bool,int,TSharedPtr<FUniqueNetId const ,0>,FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> OnSessionUserInviteAcceptedDelegate;  // 0x0068, not reflected
    FDelegateHandle OnSessionInviteAcceptedDelegateHandle;  // 0x0078, not reflected
    FDelegateHandle OnEndForJoinSessionCompleteDelegateHandle;  // 0x0080, not reflected
    FDelegateHandle OnDestroyForJoinSessionCompleteDelegateHandle;  // 0x0088, not reflected
    FDelegateHandle OnDestroyForMainMenuCompleteDelegateHandle;  // 0x0090, not reflected
    FDelegateHandle OnJoinSessionCompleteDelegateHandle;  // 0x0098, not reflected
    FDelegateHandle StartSessionCompleteHandle;  // 0x00A0, not reflected
    FDelegateHandle EndSessionCompleteHandle;  // 0x00A8, not reflected
    FDelegateHandle OnSessionUserInviteAcceptedDelegateHandle;  // 0x00B0, not reflected
    FOnlineSessionSearchResult CachedSessionResult;  // 0x00B8, not reflected
    UPROPERTY(Transient) bool bIsFromInvite;  // 0x01C0, size 0x1
    UPROPERTY(Transient) bool bHandlingDisconnect;  // 0x01C1, size 0x1

    // Virtual functions that start here:
    //   GetGameInstance, GetSessionInt, HandleDisconnectInternal, JoinSession, OnEndSessionComplete
    //   OnStartSessionComplete, SetInviteFlags
};
