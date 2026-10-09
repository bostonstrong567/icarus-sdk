// /Script/OnlineSubsystemIcarus.GetChallengesCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetChallengesCallbackProxyGen.h

UCLASS()
class UGetChallengesCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetChallengesEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetChallengesEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetChallenges ReqGetChallenges;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetChallengesCallbackProxyGen* GetChallenges(const FReqGetChallenges& Request);  // parameters 0x18
};
