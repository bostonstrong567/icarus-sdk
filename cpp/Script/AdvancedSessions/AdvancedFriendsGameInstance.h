// /Script/AdvancedSessions.AdvancedFriendsGameInstance
// Derives from: UGameInstance > UObject
// size 0x228, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedFriendsGameInstance.h

UCLASS(Transient)
class UAdvancedFriendsGameInstance : public UGameInstance
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCallFriendInterfaceEventsOnPlayerControllers;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCallIdentityInterfaceEventsOnPlayerControllers;  // 0x01A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCallVoiceInterfaceEventsOnPlayerControllers;  // 0x01AA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnableTalkingStatusDelegate;  // 0x01AB, size 0x1
    TDelegate<void __cdecl(FUniqueNetId const &,FUniqueNetId const &,FString const &,FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> SessionInviteReceivedDelegate;  // 0x01B0, not reflected
    FDelegateHandle SessionInviteReceivedDelegateHandle;  // 0x01C0, not reflected
    TDelegate<void __cdecl(bool,int,TSharedPtr<FUniqueNetId const ,0>,FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> SessionInviteAcceptedDelegate;  // 0x01C8, not reflected
    FDelegateHandle SessionInviteAcceptedDelegateHandle;  // 0x01D8, not reflected
    TDelegate<void __cdecl(TSharedRef<FUniqueNetId const ,0>,bool),FDefaultDelegateUserPolicy> PlayerTalkingStateChangedDelegate;  // 0x01E0, not reflected
    FDelegateHandle PlayerTalkingStateChangedDelegateHandle;  // 0x01F0, not reflected
    TDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> PlayerLoginChangedDelegate;  // 0x01F8, not reflected
    FDelegateHandle PlayerLoginChangedDelegateHandle;  // 0x0208, not reflected
    TDelegate<void __cdecl(int,enum ELoginStatus::Type,enum ELoginStatus::Type,FUniqueNetId const &),FDefaultDelegateUserPolicy> PlayerLoginStatusChangedDelegate;  // 0x0210, not reflected
    FDelegateHandle PlayerLoginStatusChangedDelegateHandle;  // 0x0220, not reflected

    UFUNCTION(BlueprintImplementableEvent) void OnPlayerLoginChanged(int32 PlayerNum);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID);  // parameters 0x28
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);  // parameters 0x130
    UFUNCTION(BlueprintImplementableEvent) void OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, FString AppId, const FBlueprintSessionResult& SessionToJoin);  // parameters 0x140
};
