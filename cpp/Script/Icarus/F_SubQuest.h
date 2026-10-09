// /Script/Icarus.SubQuest
// size 0x18, declared in Icarus/Source/Icarus/Systems/Quests/Quest.h

USTRUCT()
struct FSubQuest
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestsEnum QuestEnum;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* Quest;  // 0x0010, size 0x8
};
