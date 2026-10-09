// /Script/OnlineSubsystemEOS.AchievementsUnlockProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/AchievementsUnlockProxy.h

UCLASS(MinimalAPI)
class UAchievementsUnlockProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    UObject * WorldContextObject;  // 0x0058, not reflected
    TArray<FString,TSizedDefaultAllocator<32> > AchievementIds;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAchievementsUnlockProxy* UnlockAchievements(UObject* WorldContextObject, APlayerController* PlayerController, const TArray<FString>& AchievementIds);  // parameters 0x28
};
