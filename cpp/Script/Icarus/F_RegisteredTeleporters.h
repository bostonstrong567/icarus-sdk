// /Script/Icarus.RegisteredTeleporters
// size 0x20, declared in Icarus/Source/Icarus/World/InstancedLevels/TeleportManagerSubSystem.h

USTRUCT()
struct FRegisteredTeleporters
{
public:
    UPROPERTY() TArray<UTeleportComponent*> Components;  // 0x0000, size 0x10
    UPROPERTY() TArray<ABaseLevelTeleport*> Caves;  // 0x0010, size 0x10
};
