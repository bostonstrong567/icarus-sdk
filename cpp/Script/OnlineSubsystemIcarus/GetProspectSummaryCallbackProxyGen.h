// /Script/OnlineSubsystemIcarus.GetProspectSummaryCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetProspectSummaryCallbackProxyGen.h

UCLASS()
class UGetProspectSummaryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetProspectSummaryEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetProspectSummaryEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetProspectSummary ReqGetProspectSummary;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetProspectSummaryCallbackProxyGen* GetProspectSummary(const FReqGetProspectSummary& Request);  // parameters 0x30
};
