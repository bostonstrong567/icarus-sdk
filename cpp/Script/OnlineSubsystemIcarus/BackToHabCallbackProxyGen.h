// /Script/OnlineSubsystemIcarus.BackToHabCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/BackToHabCallbackProxyGen.h

UCLASS()
class UBackToHabCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnBackToHabEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnBackToHabEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqBackToHab ReqBackToHab;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UBackToHabCallbackProxyGen* BackToHab(const FReqBackToHab& Request);  // parameters 0x50
};
