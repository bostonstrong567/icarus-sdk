// /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h

UCLASS(MinimalAPI)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FAchievementWriteDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FAchievementWriteDelegate OnFailure;  // 0x0040, size 0x10
private:
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, not reflected
    TSharedPtr<FOnlineAchievementsWrite,1> WriteObject;  // 0x0058, not reflected
    FName AchievementName;  // 0x0068, not reflected
    float AchievementProgress;  // 0x0070, not reflected
    int32 UserTag;  // 0x0074, not reflected
    UObject * WorldContextObject;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);  // parameters 0x28
};
