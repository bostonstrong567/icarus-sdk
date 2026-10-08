// /Script/Icarus.PlayerObserverSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Subsystems/World/PlayerObserverSubsystem.h

UCLASS()
class UPlayerObserverSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnPlayerDeath;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnPlayerRevived;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnRevivedOtherPlayer;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnPlayerLevelledUp;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnItemCrafted;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnFoodConsumed;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnProjectileFired;  // 0x0090, size 0x10
    UPROPERTY(BlueprintAssignable) FGenericPlayerEvent OnNightSurvived;  // 0x00A0, size 0x10
    UPROPERTY(BlueprintAssignable) FExperienceGainedEvent OnExperienceGained;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FDistanceTravelledEvent OnDistanceTravelled;  // 0x00C0, size 0x10
};
