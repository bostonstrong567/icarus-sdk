// /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindTurnBasedMatchCallbackProxy.h

UCLASS(MinimalAPI)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineTurnBasedMatchResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineTurnBasedMatchResult OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    UObject * WorldContextObject;  // 0x0058, private
    UTurnBasedMatchInterface * TurnBasedMatchInterface;  // 0x0060, private
    uint32 MinPlayers;  // 0x0068, private
    uint32 MaxPlayers;  // 0x006C, private
    uint32 PlayerGroup;  // 0x0070, private
    bool ShowExistingMatches;  // 0x0074, private
    TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1> Delegate;  // 0x0078, private

    UFUNCTION(BlueprintCallable) static UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);  // parameters 0x38
};
