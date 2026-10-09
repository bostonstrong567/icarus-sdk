// /Script/Icarus.ModifierTrigger
// size 0x1C, declared in Icarus/Source/Icarus/DataStructs/Modifiers/SurvivalTriggers.h

USTRUCT()
struct FModifierTrigger
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentTrigger;  // 0x0018, size 0x4
};
