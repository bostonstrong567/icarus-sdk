// /Script/OnlineSubsystemUtils.OnlineSessionClient
// Derives from: UOnlineSession > UObject
// size 0x1C8, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/OnlineSessionClient.h

UCLASS(Config=Game)
class UOnlineSessionClient : public UOnlineSession
{
public:
    UPROPERTY(Transient) bool bIsFromInvite;  // 0x01C0, size 0x1
    UPROPERTY(Transient) bool bHandlingDisconnect;  // 0x01C1, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnEndForJoinSessionCompleteDelegate;  // 0x0028, protected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnDestroyForJoinSessionCompleteDelegate;  // 0x0038, protected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnDestroyForMainMenuCompleteDelegate;  // 0x0048, protected
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> OnJoinSessionCompleteDelegate;  // 0x0058, protected
    TDelegate<void __cdecl(bool,int,TSharedPtr<FUniqueNetId const ,0>,FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> OnSessionUserInviteAcceptedDelegate;  // 0x0068, protected
    FDelegateHandle OnSessionInviteAcceptedDelegateHandle;  // 0x0078, protected
    FDelegateHandle OnEndForJoinSessionCompleteDelegateHandle;  // 0x0080, protected
    FDelegateHandle OnDestroyForJoinSessionCompleteDelegateHandle;  // 0x0088, protected
    FDelegateHandle OnDestroyForMainMenuCompleteDelegateHandle;  // 0x0090, protected
    FDelegateHandle OnJoinSessionCompleteDelegateHandle;  // 0x0098, protected
    FDelegateHandle StartSessionCompleteHandle;  // 0x00A0, protected
    FDelegateHandle EndSessionCompleteHandle;  // 0x00A8, protected
    FDelegateHandle OnSessionUserInviteAcceptedDelegateHandle;  // 0x00B0, protected
    FOnlineSessionSearchResult CachedSessionResult;  // 0x00B8, protected

    // Virtual functions that start here:
    //   GetGameInstance, GetSessionInt, HandleDisconnectInternal, JoinSession, OnEndSessionComplete
    //   OnStartSessionComplete, SetInviteFlags
};
