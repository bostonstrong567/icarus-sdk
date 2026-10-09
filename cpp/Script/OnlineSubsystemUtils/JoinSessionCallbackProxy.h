// /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x180, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/JoinSessionCallbackProxy.h

UCLASS()
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    FOnlineSessionSearchResult OnlineSearchResult;  // 0x0058, not reflected
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> Delegate;  // 0x0160, not reflected
    FDelegateHandle DelegateHandle;  // 0x0170, not reflected
    UObject * WorldContextObject;  // 0x0178, not reflected
public:
    UFUNCTION(BlueprintCallable) static UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);  // parameters 0x120
};
