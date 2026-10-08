// /Script/Icarus.PersistentBlockerRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/Blockers/BlockerSpawnerRecorderComponent.h

USTRUCT()
struct FPersistentBlockerRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FString BlockerActorClassName;  // 0x0008, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 BlockerActorIcarusUID;  // 0x0018, size 0x4
};
