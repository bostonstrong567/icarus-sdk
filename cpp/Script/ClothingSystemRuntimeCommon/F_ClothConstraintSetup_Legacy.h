// /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// size 0x10, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothConfig_Legacy.h

USTRUCT()
struct FClothConstraintSetup_Legacy
{
public:
    UPROPERTY() float Stiffness;  // 0x0000, size 0x4
    UPROPERTY() float StiffnessMultiplier;  // 0x0004, size 0x4
    UPROPERTY() float StretchLimit;  // 0x0008, size 0x4
    UPROPERTY() float CompressionLimit;  // 0x000C, size 0x4
};
