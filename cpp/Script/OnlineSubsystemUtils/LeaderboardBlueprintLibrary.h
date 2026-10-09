// /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/LeaderboardBlueprintLibrary.h

UCLASS()
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32 StatValue);  // parameters 0x15
};
