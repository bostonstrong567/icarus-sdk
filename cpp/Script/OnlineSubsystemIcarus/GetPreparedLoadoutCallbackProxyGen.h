// /Script/OnlineSubsystemIcarus.GetPreparedLoadoutCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetPreparedLoadoutCallbackProxyGen.h

UCLASS()
class UGetPreparedLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetPreparedLoadoutEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetPreparedLoadoutEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqPreparedLoadout ReqPreparedLoadout;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetPreparedLoadoutCallbackProxyGen* GetPreparedLoadout(const FReqPreparedLoadout& Request);  // parameters 0x20
};
