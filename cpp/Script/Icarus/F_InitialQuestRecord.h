// /Script/Icarus.InitialQuestRecord
// size 0x18, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestManagerRecorderComponent.h

USTRUCT()
struct FInitialQuestRecord
{
public:
    UPROPERTY(SaveGame, BlueprintReadOnly) FString QuestActorName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 RelevantActorIcarusUID;  // 0x0010, size 0x4
};
