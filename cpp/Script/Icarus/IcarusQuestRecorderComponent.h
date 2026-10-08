// /Script/Icarus.IcarusQuestRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x210, declared in Icarus/Source/Icarus/Systems/Quests/IcarusQuestRecorderComponent.h

UCLASS(Config=Engine)
class UIcarusQuestRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FName QuestName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) TArray<FRelevantQuestActorRecord> RelevantActorRecords;  // 0x01C8, size 0x10
    UPROPERTY(SaveGame) TArray<FRelevantQuestActorRecord> RelevantCharacterRecords;  // 0x01D8, size 0x10
    UPROPERTY(SaveGame) TArray<FSubQuestRecord> SubQuestRecords;  // 0x01E8, size 0x10
    UPROPERTY(SaveGame) TArray<FQuestVariableRecord> VariableRecords;  // 0x01F8, size 0x10
};
