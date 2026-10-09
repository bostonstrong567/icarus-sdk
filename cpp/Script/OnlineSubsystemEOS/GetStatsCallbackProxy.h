// /Script/OnlineSubsystemEOS.GetStatsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/GetStatsCallbackProxy.h

UCLASS(MinimalAPI)
class UGetStatsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetStatsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetStatsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FProductUserId ProductUserId;  // 0x0050, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > StatsName;  // 0x0058, not reflected
    TDelegate<void __cdecl(FOnlineError const &,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData> const ,0>,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> OnStatsQueryUsersStatsCompleteDelegate;  // 0x0068, not reflected
    FDelegateHandle OnStatsGetStatsCompleteDelegateHandle;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetStatsCallbackProxy* GetStats(const FProductUserId& ProductUserId, const TArray<FString>& StatsName);  // parameters 0x20
};
