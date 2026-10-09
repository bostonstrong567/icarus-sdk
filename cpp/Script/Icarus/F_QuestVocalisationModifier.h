// /Script/Icarus.QuestVocalisationModifier
// size 0x70, declared in Icarus/Source/Icarus/Systems/FactionMissions/Modifiers/QuestVocalisationModifier.h

USTRUCT()
struct FQuestVocalisationModifier : public FQuestModifierData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle InitialDialogue;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FinishDialogue;  // 0x0058, size 0x18
};
