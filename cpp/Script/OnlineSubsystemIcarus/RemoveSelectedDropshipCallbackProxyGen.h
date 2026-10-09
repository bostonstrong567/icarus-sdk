// /Script/OnlineSubsystemIcarus.RemoveSelectedDropshipCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/RemoveSelectedDropshipCallbackProxyGen.h

UCLASS()
class URemoveSelectedDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnRemoveSelectedDropshipEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnRemoveSelectedDropshipEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqRemoveSelectedDropship ReqRemoveSelectedDropship;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static URemoveSelectedDropshipCallbackProxyGen* RemoveSelectedDropship(const FReqRemoveSelectedDropship& Request);  // parameters 0x20
};
