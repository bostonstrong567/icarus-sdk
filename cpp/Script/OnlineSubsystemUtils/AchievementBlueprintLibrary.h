// /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementBlueprintLibrary.h

UCLASS()
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden);  // parameters 0x69
    UFUNCTION(BlueprintCallable) static void GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress);  // parameters 0x20
};
