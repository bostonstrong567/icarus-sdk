// /Script/OnlineSubsystemEOS.UpdateStatsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/UpdateStatsCallbackProxy.h

UCLASS(MinimalAPI)
class UUpdateStatsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FProductUserId ProductUserId;  // 0x0050, private
    TArray<FStatData,TSizedDefaultAllocator<32> > Stats;  // 0x0058, private
    TDelegate<void __cdecl(FOnlineError const &),FDefaultDelegateUserPolicy> OnStatsUpdateStatsCompleteDelegate;  // 0x0068, private
    FDelegateHandle OnStatsUpdateStatsCompleteDelegateHandle;  // 0x0078, private

    UFUNCTION(BlueprintCallable) static UUpdateStatsCallbackProxy* UpdateStats(const FProductUserId& ProductUserId, const TArray<FStatData>& Stats);  // parameters 0x20
};
