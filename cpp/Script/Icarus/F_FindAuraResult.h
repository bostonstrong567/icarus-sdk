// /Script/Icarus.FindAuraResult
// size 0x20, declared in Icarus/Source/Icarus/Modifiers/AuraManagerComponent.h

USTRUCT()
struct FFindAuraResult
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle AuraType;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UModifierStateComponent* Component;  // 0x0018, size 0x8
};
