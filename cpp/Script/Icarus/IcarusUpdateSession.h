// /Script/Icarus.IcarusUpdateSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x390, declared in Icarus/Source/Icarus/Session/IcarusUpdateSession.h

UCLASS(MinimalAPI)
class UIcarusUpdateSession : public UIcarusSessionBase
{
public:
    UPROPERTY() UGetProspectCallbackProxyGen* GetProspectCallbackProxy;  // 0x0378, size 0x8
    UPROPERTY() UUpdateSessionCallbackProxyAdvanced* UpdateSessionCallbackProxy;  // 0x0380, size 0x8
    UPROPERTY() bool bForceUpdate;  // 0x0388, size 0x1

    UFUNCTION() void GetProspectInfoFailure(const FResGetProspect& Response);  // parameters 0xE8
    UFUNCTION() void GetProspectInfoSuccess(const FResGetProspect& Response);  // parameters 0xE8
    UFUNCTION(BlueprintCallable) static UIcarusUpdateSession* IcarusUpdateSession(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
    UFUNCTION() void OnUpdateSessionFailure(FString ErrorReason);  // parameters 0x10
    UFUNCTION() void OnUpdateSessionSuccess();

    // Virtual functions that start here:
    //   ActivateSessionFlow, OnUpdateSessionFailure, OnUpdateSessionSuccess
};
