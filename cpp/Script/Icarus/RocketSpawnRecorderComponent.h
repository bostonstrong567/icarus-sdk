// /Script/Icarus.RocketSpawnRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/RocketSpawnRecorderComponent.h

UCLASS(Config=Engine)
class URocketSpawnRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FRocketSpawnStateRecord SpawnRecord;  // 0x01C0, size 0x20
    UPROPERTY(SaveGame) int32 RocketSpawnRecorderVersion;  // 0x01E0, size 0x4
};
