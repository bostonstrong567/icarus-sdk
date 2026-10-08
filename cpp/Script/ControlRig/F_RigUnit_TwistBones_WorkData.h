// /Script/ControlRig.RigUnit_TwistBones_WorkData
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TwistBones.h

USTRUCT()
struct FRigUnit_TwistBones_WorkData
{
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0000, size 0x10
    UPROPERTY() TArray<float> ItemRatios;  // 0x0010, size 0x10
    UPROPERTY() TArray<FTransform> ItemTransforms;  // 0x0020, size 0x10
};
