// /Script/ClothingSystemRuntimeCommon.EClothMassMode
UENUM()
enum class EClothMassMode : uint8
{
    UniformMass = 0,
    TotalMass = 1,
    Density = 2,
    MaxClothMassMode = 3,
};

// /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
UENUM()
enum class EClothingWindMethod_Legacy : uint8
{
    Legacy = 0,
    Accurate = 1,
};

// /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
UENUM()
enum class EWeightMapTargetCommon : uint8
{
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping = 5,
};
