// /Script/Icarus.LivingItemSlotSaveData
// size 0x18, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FLivingItemSlotSaveData
{
public:
    UPROPERTY(SaveGame) int32 CurrentProgress;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FString CurrentUpgrade;  // 0x0008, size 0x10
};
