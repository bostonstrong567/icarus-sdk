// /Script/Icarus.FloatableData
// size 0x58, declared in Icarus/Source/Icarus/Traits/Behaviours/FloatableData.h

USTRUCT()
struct FFloatableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UFloatableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshDensity;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FluidDensity;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FluidLinearDamping;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FluidAngularDamping;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClampMaxVelocity;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxUnderwaterVelocity;  // 0x0054, size 0x4
};
