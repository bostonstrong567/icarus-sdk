// /Script/OnlineSubsystemIcarus.DeleteDropshipCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/DeleteDropshipCallbackProxyGen.h

UCLASS()
class UDeleteDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnDeleteDropshipEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDeleteDropshipEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqDeleteDropship ReqDeleteDropship;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UDeleteDropshipCallbackProxyGen* DeleteDropship(const FReqDeleteDropship& Request);  // parameters 0x20
};
