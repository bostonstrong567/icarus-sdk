// /Script/MotionWarping.RootMotionModifier_Scale
// Derives from: URootMotionModifier > UObject
// size 0xD0, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier.h

UCLASS(EditInlineNew)
class URootMotionModifier_Scale : public URootMotionModifier
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Scale;  // 0x00B8, size 0xC

    UFUNCTION(BlueprintCallable) static URootMotionModifier_Scale* AddRootMotionModifierScale(UMotionWarpingComponent* InMotionWarpingComp, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);  // parameters 0x30
};
