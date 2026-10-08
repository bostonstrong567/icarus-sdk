// /Script/AnimationCore.EConstraintType
UENUM()
enum class EConstraintType : uint8
{
    Transform = 0,
    Aim = 1,
    MAX = 2,
};

// /Script/AnimationCore.ETransformConstraintType
UENUM()
enum class ETransformConstraintType : uint8
{
    Translation = 0,
    Rotation = 1,
    Scale = 2,
    Parent = 3,
};
