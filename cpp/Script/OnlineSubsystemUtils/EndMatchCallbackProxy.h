// /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/EndMatchCallbackProxy.h

UCLASS(MinimalAPI)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    UObject * WorldContextObject;  // 0x0058, private
    UTurnBasedMatchInterface * TurnBasedMatchInterface;  // 0x0060, private
    FString MatchID;  // 0x0068, private
    EMPMatchOutcome::Outcome LocalPlayerOutcome;  // 0x0078, private
    EMPMatchOutcome::Outcome OtherPlayersOutcome;  // 0x007C, private

    UFUNCTION(BlueprintCallable) static UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome);  // parameters 0x40
};
