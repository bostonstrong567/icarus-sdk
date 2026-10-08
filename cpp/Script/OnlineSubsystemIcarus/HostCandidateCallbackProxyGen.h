// /Script/OnlineSubsystemIcarus.HostCandidateCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/HostCandidateCallbackProxyGen.h

UCLASS()
class UHostCandidateCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnHostCandidateEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnHostCandidateEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqHostCandidate ReqHostCandidate;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UHostCandidateCallbackProxyGen* HostCandidate(const FReqHostCandidate& Request);  // parameters 0x28
};
