// /Script/Icarus.RocketSpawnStateRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/RocketSpawnRecorderComponent.h

USTRUCT()
struct FRocketSpawnStateRecord
{
    UPROPERTY(SaveGame) FString AssignedPlayerID;  // 0x0008, size 0x10
    UPROPERTY(SaveGame) int32 ChrSlot;  // 0x0018, size 0x4
};
