// /Script/Icarus.Modifier
// size 0x20, declared in Icarus/Source/Icarus/Modifiers/ModifierStateData.h

USTRUCT()
struct FModifier
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierLifetime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierEffectiveness;  // 0x001C, size 0x4
};
