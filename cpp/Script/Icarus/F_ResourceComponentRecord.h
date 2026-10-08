// /Script/Icarus.ResourceComponentRecord
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorTraitRecords.h

USTRUCT()
struct FResourceComponentRecord
{
    UPROPERTY(SaveGame) bool bDeviceActive;  // 0x0000, size 0x1
    UPROPERTY(SaveGame) bool bDeviceManuallyShutdown;  // 0x0001, size 0x1
    UPROPERTY(SaveGame) uint32 ConnectionPriorityMask;  // 0x0004, size 0x4
};
