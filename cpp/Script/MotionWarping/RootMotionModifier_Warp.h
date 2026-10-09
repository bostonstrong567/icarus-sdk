// /Script/MotionWarping.RootMotionModifier_Warp
// Derives from: URootMotionModifier > UObject
// size 0x190, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier.h

UCLASS(Abstract, EditInlineNew)
class URootMotionModifier_Warp : public URootMotionModifier
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName WarpTargetName;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EWarpPointAnimProvider WarpPointAnimProvider;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform WarpPointAnimTransform;  // 0x00D0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName WarpPointAnimBoneName;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWarpTranslation;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreZAxis;  // 0x0109, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAlphaBlendOption AddTranslationEasingFunc;  // 0x010A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AddTranslationEasingCurve;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWarpRotation;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMotionWarpRotationType RotationType;  // 0x0119, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarpRotationTimeMultiplier;  // 0x011C, size 0x4
protected:
    UPROPERTY() FTransform CachedTargetTransform;  // 0x0120, size 0x30
    TOptional<FTransform> CachedOffsetFromWarpPoint;  // 0x0150, not reflected

    // Virtual functions that start here:
    //   OnTargetTransformChanged
};
