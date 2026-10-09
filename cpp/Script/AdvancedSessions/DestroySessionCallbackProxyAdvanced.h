// /Script/AdvancedSessions.DestroySessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/DestroySessionCallbackProxyAdvanced.h

UCLASS()
class UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    FName SessionName;  // 0x0050, not reflected
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0058, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> Delegate;  // 0x0060, not reflected
    FDelegateHandle DelegateHandle;  // 0x0070, not reflected
    UObject * WorldContextObject;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) static UDestroySessionCallbackProxyAdvanced* DestroyAdvacedSession(UObject* WorldContextObject, APlayerController* PlayerController, FName SessionName);  // parameters 0x20
};
