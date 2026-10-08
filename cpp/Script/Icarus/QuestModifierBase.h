// /Script/Icarus.QuestModifierBase
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Quests/QuestModifierBase.h

UCLASS(Abstract, Config=Engine)
class UQuestModifierBase : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestModifiersMultiRowHandle ModifierRow;  // 0x00B0, size 0x18

    // Virtual functions that start here:
    //   Initialise
};
