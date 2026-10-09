// /Script/MotionWarping.RootMotionModifier_SkewWarp
// Derives from: URootMotionModifier_Warp > URootMotionModifier > UObject
// size 0x190, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier_SkewWarp.h

UCLASS(EditInlineNew)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
public:
    UFUNCTION(BlueprintCallable) static URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(UMotionWarpingComponent* InMotionWarpingComp, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);  // parameters 0x78
};
