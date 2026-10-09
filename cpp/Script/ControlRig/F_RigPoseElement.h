// /Script/ControlRig.RigPoseElement
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyPose.h

USTRUCT()
struct FRigPoseElement
{
public:
    UPROPERTY() FCachedRigElement Index;  // 0x0000, size 0x14
    UPROPERTY() FTransform GlobalTransform;  // 0x0020, size 0x30
    UPROPERTY() FTransform LocalTransform;  // 0x0050, size 0x30
    UPROPERTY() float CurveValue;  // 0x0080, size 0x4
};
