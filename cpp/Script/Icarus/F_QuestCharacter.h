// /Script/Icarus.QuestCharacter
// size 0x18, declared in Icarus/Source/Icarus/Systems/Quests/QuestActor.h

USTRUCT()
struct FQuestCharacter
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ActorName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* RelevantActor;  // 0x0010, size 0x8
};
