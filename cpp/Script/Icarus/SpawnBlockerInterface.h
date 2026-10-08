// /Script/Icarus.SpawnBlockerInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/SpawnBlockerInterface.h

UCLASS(Abstract)
class USpawnBlockerInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
};
