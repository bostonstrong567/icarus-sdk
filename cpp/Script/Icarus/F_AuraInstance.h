// /Script/Icarus.AuraInstance
// size 0x2E0, declared in Icarus/Source/Icarus/Modifiers/AuraManagerComponent.h

USTRUCT()
struct FAuraInstance
{
public:
    UPROPERTY() FModifierStateData AuraModifier;  // 0x0000, size 0x268
    UPROPERTY() FModifierStatesRowHandle ModifierRow;  // 0x0268, size 0x18
    UPROPERTY(Instanced) UModifierStateComponent* OwningStateComp;  // 0x0280, size 0x8
    UPROPERTY() TMap<AActor*, int32> CurrentAffectedActors;  // 0x0288, size 0x50
    UPROPERTY() int32 AuraRange;  // 0x02D8, size 0x4
};
