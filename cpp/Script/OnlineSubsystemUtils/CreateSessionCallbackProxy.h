// /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/CreateSessionCallbackProxy.h

UCLASS(MinimalAPI)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> CreateCompleteDelegate;  // 0x0058, private
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> StartCompleteDelegate;  // 0x0068, private
    FDelegateHandle CreateCompleteDelegateHandle;  // 0x0078, private
    FDelegateHandle StartCompleteDelegateHandle;  // 0x0080, private
    int32 NumPublicConnections;  // 0x0088, private
    bool bUseLAN;  // 0x008C, private
    UObject * WorldContextObject;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);  // parameters 0x20
};
