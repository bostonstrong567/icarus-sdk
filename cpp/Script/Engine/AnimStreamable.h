// /Script/Engine.AnimStreamable
// Derives from: UAnimSequenceBase > UAnimationAsset > UObject
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStreamable.h

UCLASS(MinimalAPI, Config=Engine)
class UAnimStreamable : public UAnimSequenceBase
{
public:
    UPROPERTY() int32 NumFrames;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere) EAnimInterpolationType Interpolation;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere) FName RetargetSource;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) UAnimBoneCompressionSettings* BoneCompressionSettings;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere) UAnimCurveCompressionSettings* CurveCompressionSettings;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere) bool bEnableRootMotion;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERootMotionRootLock> RootMotionRootLock;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere) bool bForceRootLock;  // 0x00DA, size 0x1
    UPROPERTY(EditAnywhere) bool bUseNormalizedRootMotionScale;  // 0x00DB, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FStreamableAnimPlatformData RunningAnimPlatformData;  // 0x00B8
    bool bUseRawDataOnly;  // 0x00DC, private
};
