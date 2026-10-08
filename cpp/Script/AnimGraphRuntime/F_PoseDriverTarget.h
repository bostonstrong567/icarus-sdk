// /Script/AnimGraphRuntime.PoseDriverTarget
// size 0xC0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseDriver.h

USTRUCT()
struct FPoseDriverTarget
{
    UPROPERTY(EditAnywhere) TArray<FPoseDriverTransform> BoneTransforms;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FRotator TargetRotation;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) float TargetScale;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) ERBFDistanceMethod DistanceMethod;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere) ERBFFunctionType FunctionType;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere) bool bApplyCustomCurve;  // 0x0022, size 0x1
    UPROPERTY(EditAnywhere) FRichCurve CustomCurve;  // 0x0028, size 0x80
    UPROPERTY(EditAnywhere) FName DrivenName;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere) bool bIsHidden;  // 0x00B8, size 0x1

    // Not reflected:
    int32 DrivenUID;  // 0x00B0
    int32 PoseCurveIndex;  // 0x00B4
};
