// /Script/AdvancedSessions.LoginUserCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xA8, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/LoginUserCallbackProxy.h

UCLASS()
class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    FString UserID;  // 0x0058, private
    FString UserToken;  // 0x0068, private
    FString Type;  // 0x0078, private
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> Delegate;  // 0x0088, private
    FDelegateHandle DelegateHandle;  // 0x0098, private
    UObject * WorldContextObject;  // 0x00A0, private

    UFUNCTION(BlueprintCallable) static ULoginUserCallbackProxy* LoginUser(UObject* WorldContextObject, APlayerController* PlayerController, FString UserID, FString UserToken, FString Type);  // parameters 0x48
};
