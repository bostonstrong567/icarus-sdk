// /Script/OnlineSubsystemIcarus.GetCreditsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetCreditsCallbackProxyGen.h

UCLASS()
class UGetCreditsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetCreditsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetCreditsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetCredits ReqGetCredits;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetCreditsCallbackProxyGen* GetCredits(const FReqGetCredits& Request);  // parameters 0x18
};
