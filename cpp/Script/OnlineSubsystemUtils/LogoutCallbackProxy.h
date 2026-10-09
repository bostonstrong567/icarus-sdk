// /Script/OnlineSubsystemUtils.LogoutCallbackProxy
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LogoutCallbackProxy.h

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineLogoutResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineLogoutResult OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    FDelegateHandle OnLogoutCompleteDelegateHandle;  // 0x0058, not reflected
    UObject * WorldContextObject;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
