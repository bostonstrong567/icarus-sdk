// /Script/AnimGraphRuntime.AnimPhysPlanarLimit
// size 0x40, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h

USTRUCT()
struct FAnimPhysPlanarLimit
{
public:
    UPROPERTY(EditAnywhere) FBoneReference DrivingBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FTransform PlaneTransform;  // 0x0010, size 0x30
};
