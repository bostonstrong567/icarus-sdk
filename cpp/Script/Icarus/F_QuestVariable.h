// /Script/Icarus.QuestVariable
// size 0x20, declared in Icarus/Source/Icarus/Systems/Quests/QuestActor.h

USTRUCT()
struct FQuestVariable
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString VariableName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bVariable;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float fVariable;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 iVariable;  // 0x0018, size 0x4
};
