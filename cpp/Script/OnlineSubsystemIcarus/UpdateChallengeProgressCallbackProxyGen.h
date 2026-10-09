// /Script/OnlineSubsystemIcarus.UpdateChallengeProgressCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateChallengeProgressCallbackProxyGen.h

UCLASS()
class UUpdateChallengeProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateChallengeProgressEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateChallengeProgressEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUpdateChallengeProgress ReqUpdateChallengeProgress;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateChallengeProgressCallbackProxyGen* UpdateChallengeProgress(const FReqUpdateChallengeProgress& Request);  // parameters 0x30
};
