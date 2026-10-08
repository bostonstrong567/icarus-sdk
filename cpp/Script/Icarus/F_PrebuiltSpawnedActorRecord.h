// /Script/Icarus.PrebuiltSpawnedActorRecord
// size 0x18, declared in Icarus/Source/Icarus/Prebuilt/PrebuiltStructureRecorderComponent.h

USTRUCT()
struct FPrebuiltSpawnedActorRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FString RelevantActorClassName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 RelevantActorIcarusUID;  // 0x0010, size 0x4
};
