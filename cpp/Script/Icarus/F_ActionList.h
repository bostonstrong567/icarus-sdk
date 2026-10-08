// /Script/Icarus.ActionList
// size 0x68, declared in Icarus/Source/Icarus/Traits/Behaviours/ActionableData.h

USTRUCT()
struct FActionList
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EActionableEventType, FStaminaActionCostsRowHandle> InputTypes;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierState;  // 0x0050, size 0x18
};
