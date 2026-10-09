// /Script/Icarus.CaveActorSpawnTimeStamp
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CaveAIRecorderComponent.h

USTRUCT()
struct FCaveActorSpawnTimeStamp
{
public:
    UPROPERTY(SaveGame) FString CaveActorClassName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) TArray<float> SpawnTimestamps;  // 0x0010, size 0x10
};
