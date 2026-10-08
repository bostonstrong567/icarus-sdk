// /Script/AdvancedSessions.CreateSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xB8, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/CreateSessionCallbackProxyAdvanced.h

UCLASS()
class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineErrorDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> CreateCompleteDelegate;  // 0x0058, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> StartCompleteDelegate;  // 0x0068, private
    FDelegateHandle CreateCompleteDelegateHandle;  // 0x0078, private
    FDelegateHandle StartCompleteDelegateHandle;  // 0x0080, private
    int32 NumPublicConnections;  // 0x0088, private
    int32 NumPrivateConnections;  // 0x008C, private
    bool bUseLAN;  // 0x0090, private
    bool bAllowInvites;  // 0x0091, private
    bool bDedicatedServer;  // 0x0092, private
    bool bUsePresence;  // 0x0093, private
    bool bUseLobbiesIfAvailable;  // 0x0094, private
    bool bAllowJoinViaPresence;  // 0x0095, private
    bool bAllowJoinViaPresenceFriendsOnly;  // 0x0096, private
    bool bAntiCheatProtected;  // 0x0097, private
    bool bUsesStats;  // 0x0098, private
    bool bShouldAdvertise;  // 0x0099, private
    bool bUseLobbiesVoiceChatIfAvailable;  // 0x009A, private
    TArray<FSessionPropertyKeyPair,TSizedDefaultAllocator<32> > ExtraSettings;  // 0x00A0, private
    UObject * WorldContextObject;  // 0x00B0, private

    UFUNCTION(BlueprintCallable) static UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable);  // parameters 0x40
};
