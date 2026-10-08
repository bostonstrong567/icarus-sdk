// /Script/Icarus.QuestModifierVocalisation
// Derives from: UQuestModifierBase > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Quests/QuestModifierVocalisation.h

UCLASS(Config=Engine)
class UQuestModifierVocalisation : public UQuestModifierBase
{
public:
    UPROPERTY(BlueprintReadOnly) FQuestVocalisationModifiersRowHandle VocalisationRowHandle;  // 0x00C8, size 0x18

    UFUNCTION() void OnQuestEnded();
    UFUNCTION() void OnQuestStarted();
};
