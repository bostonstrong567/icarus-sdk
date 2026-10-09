// /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindTurnBasedMatchCallbackProxy.h

UCLASS(MinimalAPI)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineTurnBasedMatchResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineTurnBasedMatchResult OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    UObject * WorldContextObject;  // 0x0058, not reflected
    UTurnBasedMatchInterface * TurnBasedMatchInterface;  // 0x0060, not reflected
    uint32 MinPlayers;  // 0x0068, not reflected
    uint32 MaxPlayers;  // 0x006C, not reflected
    uint32 PlayerGroup;  // 0x0070, not reflected
    bool ShowExistingMatches;  // 0x0074, not reflected
    TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1> Delegate;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) static UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);  // parameters 0x38
};
