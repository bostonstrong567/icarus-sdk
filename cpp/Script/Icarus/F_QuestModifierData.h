// /Script/Icarus.QuestModifierData
// size 0x40, declared in Icarus/Source/Icarus/Systems/FactionMissions/Modifiers/QuestModifierData.h

USTRUCT()
struct FQuestModifierData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UQuestModifierBase> OverrideClass;  // 0x0018, size 0x28
};
