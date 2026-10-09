// /Script/Icarus.SubQuestRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestRecorderComponent.h

USTRUCT()
struct FSubQuestRecord
{
public:
    UPROPERTY(SaveGame, BlueprintReadOnly) FString SubQuestName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) FName SubQuestRowName;  // 0x0010, size 0x8
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 RelevantActorIcarusUID;  // 0x0018, size 0x4
};
