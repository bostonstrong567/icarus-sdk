// /Script/AnimGraphRuntime.AnimNode_LookAt
// size 0x1B0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LookAt.h

USTRUCT()
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) FBoneReference BoneToModify;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneSocketTarget LookAtTarget;  // 0x00E0, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtLocation;  // 0x0140, size 0xC
    UPROPERTY(EditAnywhere) FAxis LookAt_Axis;  // 0x014C, size 0x10
    UPROPERTY(EditAnywhere) bool bUseLookUpAxis;  // 0x015C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpolationBlend> InterpolationType;  // 0x015D, size 0x1
    UPROPERTY(EditAnywhere) FAxis LookUp_Axis;  // 0x0160, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtClamp;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationTime;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationTriggerThreashold;  // 0x0178, size 0x4
private:
    FVector CurrentLookAtLocation;  // 0x017C, not reflected
    FVector CurrentTargetLocation;  // 0x0188, not reflected
    FVector PreviousTargetLocation;  // 0x0194, not reflected
    float AccumulatedInterpoolationTime;  // 0x01A0, not reflected
    FVector CachedCurrentTargetLocation;  // 0x01A4, not reflected
};
