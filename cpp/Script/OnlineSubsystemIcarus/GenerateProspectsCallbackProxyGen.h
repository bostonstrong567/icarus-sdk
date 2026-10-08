// /Script/OnlineSubsystemIcarus.GenerateProspectsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GenerateProspectsCallbackProxyGen.h

UCLASS()
class UGenerateProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGenerateProspectsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGenerateProspectsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGenerateProspects ReqGenerateProspects;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGenerateProspectsCallbackProxyGen* GenerateProspects(const FReqGenerateProspects& Request);  // parameters 0x18
};
