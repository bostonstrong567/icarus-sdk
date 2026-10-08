// /Script/AnimGraphRuntime.AnimPhysSphericalLimit
// size 0x24, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h

USTRUCT()
struct FAnimPhysSphericalLimit
{
    UPROPERTY(EditAnywhere) FBoneReference DrivingBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FVector SphereLocalOffset;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) float LimitRadius;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) ESphericalLimitType LimitType;  // 0x0020, size 0x1
};
