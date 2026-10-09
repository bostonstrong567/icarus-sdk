// /Script/ControlRig.RigUnit_SlideChain_WorkData
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h

USTRUCT()
struct FRigUnit_SlideChain_WorkData
{
public:
    UPROPERTY() float ChainLength;  // 0x0000, size 0x4
    UPROPERTY() TArray<float> ItemSegments;  // 0x0008, size 0x10
    UPROPERTY() TArray<FCachedRigElement> CachedItems;  // 0x0018, size 0x10
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0028, size 0x10
    UPROPERTY() TArray<FTransform> BlendedTransforms;  // 0x0038, size 0x10
};
