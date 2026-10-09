// /Script/OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/LeaderboardQueryScoresCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardQueryScoresCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryScoresResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryScoresResult OnFailure;  // 0x0040, size 0x10
private:
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> LeaderboardReadCompleteDelegate;  // 0x0050, not reflected
    FDelegateHandle LeaderboardReadCompleteDelegateHandle;  // 0x0060, not reflected
    TSharedPtr<FOnlineLeaderboardRead,1> ReadObject;  // 0x0068, not reflected
    FName StatName;  // 0x0078, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0080, not reflected
    TArray<FProductUserId,TSizedDefaultAllocator<32> > ProductUserIds;  // 0x0088, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULeaderboardQueryScoresCallbackProxy* QueryLeaderboardScore(const TArray<FProductUserId>& ProductUserIds, FName LeaderboarId);  // parameters 0x20
};
