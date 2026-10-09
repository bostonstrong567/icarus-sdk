// /Script/OnlineSubsystemIcarus.UpdateTrackedStatsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateTrackedStatsCallbackProxyGen.h

UCLASS()
class UUpdateTrackedStatsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateTrackedStatsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateTrackedStatsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUpdateTrackedStats ReqUpdateTrackedStats;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateTrackedStatsCallbackProxyGen* UpdateTrackedStats(const FReqUpdateTrackedStats& Request);  // parameters 0x40
};
