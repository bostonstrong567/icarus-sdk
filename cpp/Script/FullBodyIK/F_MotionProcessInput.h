// /Script/FullBodyIK.MotionProcessInput
// size 0x2, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Public/FBIKConstraintOption.h

USTRUCT()
struct FMotionProcessInput
{
public:
    UPROPERTY(EditAnywhere) bool bForceEffectorRotationTarget;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bOnlyApplyWhenReachedToTarget;  // 0x0001, size 0x1
};
