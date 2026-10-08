// /Script/Icarus.BuildBlockerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x88, declared in Icarus/Source/Icarus/World/BuildBlocker/BuildBlockerSubsystem.h

UCLASS()
class UBuildBlockerSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowDebugBoxes;  // 0x0030, size 0x1
    UPROPERTY() TMap<UBuildBlockerComponent*, FBlockerVolume> RegisteredBuildBlockers;  // 0x0038, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActorBoundsBlocked(AActor* Actor) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocationBlocked(const FVector& Location) const;  // parameters 0xD
};
