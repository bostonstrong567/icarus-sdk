// /Script/OnlineSubsystemIcarus.GetProspectReportCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetProspectReportCallbackProxyGen.h

UCLASS()
class UGetProspectReportCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetProspectReportEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetProspectReportEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetProspectReport ReqGetProspectReport;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetProspectReportCallbackProxyGen* GetProspectReport(const FReqGetProspectReport& Request);  // parameters 0x30
};
