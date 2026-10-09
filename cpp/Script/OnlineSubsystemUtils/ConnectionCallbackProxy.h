// /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/ConnectionCallbackProxy.h

UCLASS(MinimalAPI)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineConnectionResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineConnectionResult OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> OnLoginCompleteDelegate;  // 0x0058, not reflected
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x0068, not reflected
    UObject * WorldContextObject;  // 0x0070, not reflected
public:
    UFUNCTION(BlueprintCallable) static UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
