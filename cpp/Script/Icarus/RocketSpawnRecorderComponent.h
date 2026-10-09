// /Script/Icarus.RocketSpawnRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/RocketSpawnRecorderComponent.h

UCLASS(Config=Engine)
class URocketSpawnRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FRocketSpawnStateRecord SpawnRecord;  // 0x01C0, size 0x20
    UPROPERTY(SaveGame) int32 RocketSpawnRecorderVersion;  // 0x01E0, size 0x4
};
