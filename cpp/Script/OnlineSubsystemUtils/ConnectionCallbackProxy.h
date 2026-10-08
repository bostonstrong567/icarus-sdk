// /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/ConnectionCallbackProxy.h

UCLASS(MinimalAPI)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnlineConnectionResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineConnectionResult OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> OnLoginCompleteDelegate;  // 0x0058, private
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x0068, private
    UObject * WorldContextObject;  // 0x0070, private

    UFUNCTION(BlueprintCallable) static UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
