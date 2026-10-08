// /Script/ControlRig.AnimationHierarchy
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/AnimationHierarchy.h

USTRUCT()
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
    UPROPERTY() TArray<FConstraintNodeData> UserData;  // 0x0078, size 0x10
};
