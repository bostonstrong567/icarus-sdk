// /Script/MotionWarping.EMotionWarpRotationType
UENUM()
enum class EMotionWarpRotationType : uint8
{
    Default = 0,
    Facing = 1,
};

// /Script/MotionWarping.ERootMotionModifierState
UENUM()
enum class ERootMotionModifierState : uint8
{
    Waiting = 0,
    Active = 1,
    MarkedForRemoval = 2,
    Disabled = 3,
};

// /Script/MotionWarping.EWarpPointAnimProvider
UENUM()
enum class EWarpPointAnimProvider : uint8
{
    None = 0,
    Static = 1,
    Bone = 2,
};
