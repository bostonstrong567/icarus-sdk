// /Script/OnlineSubsystemIcarus.ExchangeCurrencyCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ExchangeCurrencyCallbackProxyGen.h

UCLASS()
class UExchangeCurrencyCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnExchangeCurrencyEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnExchangeCurrencyEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqExchangeCurrency ReqExchangeCurrency;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UExchangeCurrencyCallbackProxyGen* ExchangeCurrency(const FReqExchangeCurrency& Request);  // parameters 0x38
};
