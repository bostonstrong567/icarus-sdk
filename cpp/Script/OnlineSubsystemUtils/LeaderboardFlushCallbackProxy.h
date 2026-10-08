// /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LeaderboardFlushCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnLeaderboardFlushed OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLeaderboardFlushed OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> LeaderboardFlushCompleteDelegate;  // 0x0048, private
    FDelegateHandle LeaderboardFlushCompleteDelegateHandle;  // 0x0058, private
    bool bFailedToEvenSubmit;  // 0x0060, private

    UFUNCTION(BlueprintCallable) static ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);  // parameters 0x18
};
