// /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/QuitMatchCallbackProxy.h

UCLASS(MinimalAPI)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    UObject * WorldContextObject;  // 0x0058, not reflected
    FString MatchID;  // 0x0060, not reflected
    EMPMatchOutcome::Outcome Outcome;  // 0x0070, not reflected
    int32 TurnTimeoutInSeconds;  // 0x0074, not reflected
public:
    UFUNCTION(BlueprintCallable) static UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32 TurnTimeoutInSeconds);  // parameters 0x30
};
