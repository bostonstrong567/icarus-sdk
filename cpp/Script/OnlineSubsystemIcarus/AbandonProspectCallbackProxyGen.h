// /Script/OnlineSubsystemIcarus.AbandonProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/AbandonProspectCallbackProxyGen.h

UCLASS()
class UAbandonProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnAbandonProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAbandonProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqAbandonProspect ReqAbandonProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAbandonProspectCallbackProxyGen* AbandonProspect(const FReqAbandonProspect& Request);  // parameters 0x20
};
