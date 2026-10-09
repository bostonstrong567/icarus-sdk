// /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LeaderboardFlushCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnLeaderboardFlushed OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLeaderboardFlushed OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> LeaderboardFlushCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle LeaderboardFlushCompleteDelegateHandle;  // 0x0058, not reflected
    bool bFailedToEvenSubmit;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);  // parameters 0x18
};
