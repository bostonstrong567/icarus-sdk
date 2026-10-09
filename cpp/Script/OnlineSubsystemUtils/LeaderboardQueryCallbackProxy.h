// /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LeaderboardQueryCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryResult OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> LeaderboardReadCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle LeaderboardReadCompleteDelegateHandle;  // 0x0058, not reflected
    TSharedPtr<FOnlineLeaderboardRead,1> ReadObject;  // 0x0060, not reflected
    bool bFailedToEvenSubmit;  // 0x0070, not reflected
    FName StatName;  // 0x0074, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x007C, not reflected
    bool bSavedWasSuccessful;  // 0x0084, not reflected
    int32 SavedValue;  // 0x0088, not reflected
    FTimerHandle OnStatsRead_DelayedTimerHandle;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);  // parameters 0x18
};
