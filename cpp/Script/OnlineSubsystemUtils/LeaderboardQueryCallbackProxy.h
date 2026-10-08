// /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LeaderboardQueryCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryResult OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> LeaderboardReadCompleteDelegate;  // 0x0048, private
    FDelegateHandle LeaderboardReadCompleteDelegateHandle;  // 0x0058, private
    TSharedPtr<FOnlineLeaderboardRead,1> ReadObject;  // 0x0060, private
    bool bFailedToEvenSubmit;  // 0x0070, private
    FName StatName;  // 0x0074, private
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x007C, private
    bool bSavedWasSuccessful;  // 0x0084, private
    int32 SavedValue;  // 0x0088, private
    FTimerHandle OnStatsRead_DelayedTimerHandle;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);  // parameters 0x18
};
