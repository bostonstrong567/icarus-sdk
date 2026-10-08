// /Script/OnlineSubsystemUtils.LogoutCallbackProxy
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LogoutCallbackProxy.h

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineLogoutResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineLogoutResult OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    FDelegateHandle OnLogoutCompleteDelegateHandle;  // 0x0058, private
    UObject * WorldContextObject;  // 0x0060, private

    UFUNCTION(BlueprintCallable) static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
