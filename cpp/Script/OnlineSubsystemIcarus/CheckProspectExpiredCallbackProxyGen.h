// /Script/OnlineSubsystemIcarus.CheckProspectExpiredCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/CheckProspectExpiredCallbackProxyGen.h

UCLASS()
class UCheckProspectExpiredCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnCheckProspectExpiredEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnCheckProspectExpiredEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqCheckProspectExpired ReqCheckProspectExpired;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UCheckProspectExpiredCallbackProxyGen* CheckProspectExpired(const FReqCheckProspectExpired& Request);  // parameters 0x18
};
