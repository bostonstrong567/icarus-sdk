// /Script/OnlineSubsystemIcarus.TalentRefundCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/TalentRefundCallbackProxyGen.h

UCLASS()
class UTalentRefundCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnTalentRefundEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTalentRefundEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqTalentRefund ReqTalentRefund;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UTalentRefundCallbackProxyGen* TalentRefund(const FReqTalentRefund& Request);  // parameters 0x28
};
