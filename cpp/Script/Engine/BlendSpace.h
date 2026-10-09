// /Script/Engine.BlendSpace
// Derives from: UBlendSpaceBase > UAnimationAsset > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpace.h

UCLASS(MinimalAPI, Config=Engine)
class UBlendSpace : public UBlendSpaceBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;  // 0x0148, size 0x1
};
