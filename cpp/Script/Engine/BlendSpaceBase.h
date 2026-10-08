// /Script/Engine.BlendSpaceBase
// Derives from: UAnimationAsset > UObject
// size 0x148, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class UBlendSpaceBase : public UAnimationAsset
{
public:
    UPROPERTY() bool bRotationBlendInMeshSpace;  // 0x0088, size 0x1
    UPROPERTY(Transient) float AnimLength;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) FInterpolationParameter InterpolationParam;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) float TargetWeightInterpolationSpeedPerSec;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ENotifyTriggerMode> NotifyTriggerMode;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere) TArray<FPerBoneInterpolation> PerBoneBlend;  // 0x00B0, size 0x10
    UPROPERTY() int32 SampleIndexWithMarkers;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere) TArray<FBlendSample> SampleData;  // 0x00C8, size 0x10
    UPROPERTY() TArray<FEditorElement> GridSamples;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) FBlendParameter BlendParameters;  // 0x00E8, size 0x20

    // Virtual functions that start here:
    //   GetAxisToScale, GetRawSamplesFromBlendInput, IsSameSamplePoint, IsValidAdditiveType
};
