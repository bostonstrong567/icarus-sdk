// /Script/ControlRig.RigUnit_DistributeRotation_WorkData
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h

USTRUCT()
struct FRigUnit_DistributeRotation_WorkData
{
public:
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> ItemRotationA;  // 0x0010, size 0x10
    UPROPERTY() TArray<int32> ItemRotationB;  // 0x0020, size 0x10
    UPROPERTY() TArray<float> ItemRotationT;  // 0x0030, size 0x10
    UPROPERTY() TArray<FTransform> ItemLocalTransforms;  // 0x0040, size 0x10
};
