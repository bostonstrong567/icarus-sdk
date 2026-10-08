// /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/QuitMatchCallbackProxy.h

UCLASS(MinimalAPI)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    UObject * WorldContextObject;  // 0x0058, private
    FString MatchID;  // 0x0060, private
    EMPMatchOutcome::Outcome Outcome;  // 0x0070, private
    int32 TurnTimeoutInSeconds;  // 0x0074, private

    UFUNCTION(BlueprintCallable) static UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32 TurnTimeoutInSeconds);  // parameters 0x30
};
