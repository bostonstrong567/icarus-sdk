// /Script/Icarus.OutOfBoundsSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x90, declared in Icarus/Source/Icarus/Subsystems/World/OutOfBoundsSubsystem.h

UCLASS()
class UOutOfBoundsSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() TMap<AIcarusPlayerCharacter*, FOutOfBoundsArray> PlayerVolumeMap;  // 0x0030, size 0x50
    UPROPERTY(BlueprintAssignable) FOutOfBoundsNotifySignature OnOutOfBoundsUpdate;  // 0x0080, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerOutOfBounds(AIcarusPlayerCharacter* Player);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RegisterOutOfBoundsForPlayer(AIcarusPlayerCharacter* Player, AActor* Volume);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UnRegisterOutOfBoundsForPlayer(AIcarusPlayerCharacter* Player, AActor* Volume);  // parameters 0x10
};
