// /Script/AdvancedSessions.DestroySessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/DestroySessionCallbackProxyAdvanced.h

UCLASS()
class UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FName SessionName;  // 0x0050, private
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0058, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> Delegate;  // 0x0060, private
    FDelegateHandle DelegateHandle;  // 0x0070, private
    UObject * WorldContextObject;  // 0x0078, private

    UFUNCTION(BlueprintCallable) static UDestroySessionCallbackProxyAdvanced* DestroyAdvacedSession(UObject* WorldContextObject, APlayerController* PlayerController, FName SessionName);  // parameters 0x20
};
