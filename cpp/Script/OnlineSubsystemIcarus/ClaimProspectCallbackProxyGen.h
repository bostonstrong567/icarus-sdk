// /Script/OnlineSubsystemIcarus.ClaimProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x118, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ClaimProspectCallbackProxyGen.h

UCLASS()
class UClaimProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnClaimProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnClaimProspectEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqClaimProspect ReqClaimProspect;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UClaimProspectCallbackProxyGen* ClaimProspect(const FReqClaimProspect& Request);  // parameters 0xD0
};
