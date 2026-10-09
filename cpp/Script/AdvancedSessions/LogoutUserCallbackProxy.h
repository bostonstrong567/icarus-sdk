// /Script/AdvancedSessions.LogoutUserCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/LogoutUserCallbackProxy.h

UCLASS()
class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    TDelegate<void __cdecl(int,bool),FDefaultDelegateUserPolicy> Delegate;  // 0x0058, not reflected
    FDelegateHandle DelegateHandle;  // 0x0068, not reflected
    UObject * WorldContextObject;  // 0x0070, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULogoutUserCallbackProxy* LogoutUser(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
