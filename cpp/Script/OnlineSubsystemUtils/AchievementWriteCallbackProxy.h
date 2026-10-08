// /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h

UCLASS(MinimalAPI)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FAchievementWriteDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FAchievementWriteDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TSharedPtr<FOnlineAchievementsWrite,1> WriteObject;  // 0x0058, private
    FName AchievementName;  // 0x0068, private
    float AchievementProgress;  // 0x0070, private
    int32 UserTag;  // 0x0074, private
    UObject * WorldContextObject;  // 0x0078, private

    UFUNCTION(BlueprintCallable) static UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);  // parameters 0x28
};
