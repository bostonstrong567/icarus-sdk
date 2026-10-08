// /Script/OnlineSubsystemIcarus.SettleProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SettleProspectCallbackProxyGen.h

UCLASS()
class USettleProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSettleProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSettleProspectEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqSettleProspect ReqSettleProspect;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static USettleProspectCallbackProxyGen* SettleProspect(const FReqSettleProspect& Request);  // parameters 0x30
};
