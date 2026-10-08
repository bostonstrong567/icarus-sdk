// /Script/Icarus.QuestSetup
// size 0x168, declared in Icarus/Source/Icarus/Systems/Quests/QuestSetup.h

USTRUCT()
struct FQuestSetup : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AQuest> Class;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Variation;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText InfoText;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestQueriesRowHandle LocationQuery;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EDialogueEvents, FDialogueRowHandle> DialogueEvents;  // 0x0090, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EDialogueEvents, FDialoguePoolRowHandle> DialoguePoolEvents;  // 0x00E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMusicQuestConditionsRowHandle MusicCondition;  // 0x0130, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPlayAudioCueOnCompletion;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestModifiersMultiRowHandle> Modifiers;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPreloadQuestClass;  // 0x0160, size 0x1
};
