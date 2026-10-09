// /Script/Icarus.IcarusAchievementsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Achievements/IcarusAchievementsFunctionLibrary.h

UCLASS()
class UIcarusAchievementsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ResetAllAchievements(APlayerController* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ResetAllStats(APlayerController* Player);  // parameters 0x8
};
