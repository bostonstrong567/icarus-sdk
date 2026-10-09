// /Script/ControlRig.ConstraintNodeData
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/AnimationHierarchy.h

USTRUCT()
struct FConstraintNodeData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FTransform RelativeParent;  // 0x0000, size 0x30
    UPROPERTY() FConstraintOffset ConstraintOffset;  // 0x0030, size 0x60
    UPROPERTY() FName LinkedNode;  // 0x0090, size 0x8
private:
    UPROPERTY() TArray<FTransformConstraint> Constraints;  // 0x0098, size 0x10
};
