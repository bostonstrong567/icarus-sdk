// /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/CreateSessionCallbackProxy.h

UCLASS(MinimalAPI)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> CreateCompleteDelegate;  // 0x0058, not reflected
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> StartCompleteDelegate;  // 0x0068, not reflected
    FDelegateHandle CreateCompleteDelegateHandle;  // 0x0078, not reflected
    FDelegateHandle StartCompleteDelegateHandle;  // 0x0080, not reflected
    int32 NumPublicConnections;  // 0x0088, not reflected
    bool bUseLAN;  // 0x008C, not reflected
    UObject * WorldContextObject;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable) static UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);  // parameters 0x20
};
