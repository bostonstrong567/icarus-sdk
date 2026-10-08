// /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
// size 0x10, declared in Engine/Source/Runtime/ClothingSystemRuntimeNv/Public/ClothConfigNv.h

USTRUCT()
struct FClothConstraintSetupNv
{
    UPROPERTY(EditAnywhere) float Stiffness;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float StiffnessMultiplier;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float StretchLimit;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float CompressionLimit;  // 0x000C, size 0x4
};
