// /Script/Icarus.AlterationModifiers
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/AlterationModifiersLibrary.generated.h

USTRUCT()
struct FAlterationModifiers : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Alteration;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierDuration;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x002C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsCrafted;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCannotBeFurtherAltered;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierEffectiveness;  // 0x004C, size 0x4
};
