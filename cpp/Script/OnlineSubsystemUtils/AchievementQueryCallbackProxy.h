// /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementQueryCallbackProxy.h

UCLASS(MinimalAPI)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    bool bFetchDescriptions;  // 0x0058, not reflected
    UObject * WorldContextObject;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
