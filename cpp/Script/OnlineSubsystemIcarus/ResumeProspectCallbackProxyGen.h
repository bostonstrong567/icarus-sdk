// /Script/OnlineSubsystemIcarus.ResumeProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ResumeProspectCallbackProxyGen.h

UCLASS()
class UResumeProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnResumeProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnResumeProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqResumeProspect ReqResumeProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UResumeProspectCallbackProxyGen* ResumeProspect(const FReqResumeProspect& Request);  // parameters 0x20
};
