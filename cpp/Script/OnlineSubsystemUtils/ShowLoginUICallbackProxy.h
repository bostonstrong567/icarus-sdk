// /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/ShowLoginUICallbackProxy.h

UCLASS(MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineShowLoginUIResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineShowLoginUIResult OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    UObject * WorldContextObject;  // 0x0058, not reflected
public:
    UFUNCTION(BlueprintCallable) static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);  // parameters 0x18
};
