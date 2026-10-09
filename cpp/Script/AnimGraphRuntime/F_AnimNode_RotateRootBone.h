// /Script/AnimGraphRuntime.AnimNode_RotateRootBone
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RotateRootBone.h

USTRUCT()
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink BasePose;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pitch;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Yaw;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp PitchScaleBiasClamp;  // 0x0028, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp YawScaleBiasClamp;  // 0x0058, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator MeshToComponent;  // 0x0088, size 0xC
    float ActualPitch;  // 0x0094, not reflected
    float ActualYaw;  // 0x0098, not reflected
};
