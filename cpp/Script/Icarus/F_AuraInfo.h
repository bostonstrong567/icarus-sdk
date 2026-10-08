// /Script/Icarus.AuraInfo
// size 0x50, declared in Icarus/Source/Icarus/Modifiers/AuraInfo.h

USTRUCT()
struct FAuraInfo : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum ModifierEffectiveness;  // 0x0040, size 0x10
};
