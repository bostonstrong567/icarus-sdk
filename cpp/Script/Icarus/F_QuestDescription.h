// /Script/Icarus.QuestDescription
// size 0x40, declared in Icarus/Source/Icarus/Systems/Quests/Quest.h

USTRUCT()
struct FQuestDescription : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Depth;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bComplete;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* Quest;  // 0x0038, size 0x8
};
