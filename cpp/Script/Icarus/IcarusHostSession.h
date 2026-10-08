// /Script/Icarus.IcarusHostSession
// Derives from: UIcarusUpdateSession > UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x3D0, declared in Icarus/Source/Icarus/Session/IcarusHostSession.h

UCLASS(MinimalAPI)
class UIcarusHostSession : public UIcarusUpdateSession
{
public:
    UPROPERTY() bool bHostSessionRetry;  // 0x03B0, size 0x1
    UPROPERTY() int32 HostSessionRetryAttempts;  // 0x03B4, size 0x4
    UPROPERTY() int32 HostSessionRetryAttemptsMax;  // 0x03B8, size 0x4
    UPROPERTY() float HostSessionRetryTime;  // 0x03BC, size 0x4
    UPROPERTY() float HostSessionRetryTimeMax;  // 0x03C0, size 0x4
    UPROPERTY() UCreateSessionCallbackProxyAdvanced* CreateSessionCallbackProxy;  // 0x03C8, size 0x8

    UFUNCTION(BlueprintCallable) static UIcarusHostSession* IcarusHostSession(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
    UFUNCTION() void OnCreateSessionFailure(FString FailureReason);  // parameters 0x10
    UFUNCTION() void OnCreateSessionSuccess();
};
