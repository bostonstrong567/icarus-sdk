// /Script/OnlineSubsystemEOS.UpdateStatsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/UpdateStatsCallbackProxy.h

UCLASS(MinimalAPI)
class UUpdateStatsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFail;  // 0x0040, size 0x10
private:
    FProductUserId ProductUserId;  // 0x0050, not reflected
    TArray<FStatData,TSizedDefaultAllocator<32> > Stats;  // 0x0058, not reflected
    TDelegate<void __cdecl(FOnlineError const &),FDefaultDelegateUserPolicy> OnStatsUpdateStatsCompleteDelegate;  // 0x0068, not reflected
    FDelegateHandle OnStatsUpdateStatsCompleteDelegateHandle;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateStatsCallbackProxy* UpdateStats(const FProductUserId& ProductUserId, const TArray<FStatData>& Stats);  // parameters 0x20
};
