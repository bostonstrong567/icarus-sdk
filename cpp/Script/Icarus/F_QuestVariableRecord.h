// /Script/Icarus.QuestVariableRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestRecorderComponent.h

USTRUCT()
struct FQuestVariableRecord
{
public:
    UPROPERTY(SaveGame, BlueprintReadOnly) FString VariableName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame, BlueprintReadOnly) bool bVariable;  // 0x0010, size 0x1
    UPROPERTY(SaveGame, BlueprintReadOnly) float fVariable;  // 0x0014, size 0x4
    UPROPERTY(SaveGame, BlueprintReadOnly) int32 iVariable;  // 0x0018, size 0x4
};
