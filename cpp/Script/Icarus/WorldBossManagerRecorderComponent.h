// /Script/Icarus.WorldBossManagerRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x100, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/WorldBossManagerRecorderComponent.h

UCLASS(Config=Engine)
class UWorldBossManagerRecorderComponent : public UIcarusStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) TArray<FSpawnedWorldBossData> RecordedWorldBossData;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FName RecordedProspectRow;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) TArray<FName> RecordedWorldBossTableNames;  // 0x00F0, size 0x10
};
