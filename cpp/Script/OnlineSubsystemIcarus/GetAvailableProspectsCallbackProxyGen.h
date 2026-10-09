// /Script/OnlineSubsystemIcarus.GetAvailableProspectsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetAvailableProspectsCallbackProxyGen.h

UCLASS()
class UGetAvailableProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetAvailableProspectsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetAvailableProspectsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetAvailableProspects ReqGetAvailableProspects;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetAvailableProspectsCallbackProxyGen* GetAvailableProspects(const FReqGetAvailableProspects& Request);  // parameters 0x20
};
