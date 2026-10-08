// /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/DestroySessionCallbackProxy.h

UCLASS()
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> Delegate;  // 0x0058, private
    FDelegateHandle DelegateHandle;  // 0x0068, private
    UObject * WorldContextObject;  // 0x0070, private

    UFUNCTION(BlueprintCallable) static UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
