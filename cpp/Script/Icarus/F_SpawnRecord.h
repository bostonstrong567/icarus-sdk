// /Script/Icarus.SpawnRecord
// size 0x1, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FSpawnRecord
{
public:
    UPROPERTY(SaveGame) bool bSpawnedExoticPlants;  // 0x0000, size 0x1
};
