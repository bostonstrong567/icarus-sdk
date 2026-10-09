// /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xB8, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/CreateSessionCallbackProxyAdvanced.h

UCLASS()
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineErrorDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> CreateCompleteDelegate;  // 0x0058, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> StartCompleteDelegate;  // 0x0068, not reflected
    FDelegateHandle CreateCompleteDelegateHandle;  // 0x0078, not reflected
    FDelegateHandle StartCompleteDelegateHandle;  // 0x0080, not reflected
    int32 NumPublicConnections;  // 0x0088, not reflected
    int32 NumPrivateConnections;  // 0x008C, not reflected
    bool bUseLAN;  // 0x0090, not reflected
    bool bAllowInvites;  // 0x0091, not reflected
    bool bDedicatedServer;  // 0x0092, not reflected
    bool bUsePresence;  // 0x0093, not reflected
    bool bUseLobbiesIfAvailable;  // 0x0094, not reflected
    bool bAllowJoinViaPresence;  // 0x0095, not reflected
    bool bAllowJoinViaPresenceFriendsOnly;  // 0x0096, not reflected
    bool bAntiCheatProtected;  // 0x0097, not reflected
    bool bUsesStats;  // 0x0098, not reflected
    bool bShouldAdvertise;  // 0x0099, not reflected
    bool bUseLobbiesVoiceChatIfAvailable;  // 0x009A, not reflected
    TArray<FSessionPropertyKeyPair,TSizedDefaultAllocator<32> > ExtraSettings;  // 0x00A0, not reflected
    UObject * WorldContextObject;  // 0x00B0, not reflected
public:
    UFUNCTION(BlueprintCallable) static UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable);  // parameters 0x40
};
