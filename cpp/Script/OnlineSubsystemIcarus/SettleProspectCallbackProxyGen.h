// /Script/OnlineSubsystemIcarus.SettleProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SettleProspectCallbackProxyGen.h

UCLASS()
class USettleProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSettleProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettleProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqSettleProspect ReqSettleProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static USettleProspectCallbackProxyGen* SettleProspect(const FReqSettleProspect& Request);  // parameters 0x30
};
