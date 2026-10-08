// /Script/Icarus.BaseLevelTeleportRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelTeleportRecorderComponent.h

UCLASS(Config=Engine)
class UBaseLevelTeleportRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) bool bTeleportActive;  // 0x01C0, size 0x1
    UPROPERTY(SaveGame) int32 RemainingCooldown;  // 0x01C4, size 0x4
};
