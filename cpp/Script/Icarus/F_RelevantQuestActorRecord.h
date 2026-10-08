// /Script/Icarus.RelevantQuestActorRecord
// size 0x28, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestRecorderComponent.h

USTRUCT()
struct FRelevantQuestActorRecord
{
    UPROPERTY(SaveGame, BlueprintReadOnly) FString RelevantActorClassName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) FString Key;  // 0x0010, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 RelevantActorIcarusUID;  // 0x0020, size 0x4
};
