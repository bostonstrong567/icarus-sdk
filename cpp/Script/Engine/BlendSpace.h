// /Script/Engine.BlendSpace
// Derives from: UBlendSpaceBase > UAnimationAsset > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpace.h

UCLASS(MinimalAPI, Config=Engine)
class UBlendSpace : public UBlendSpaceBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;  // 0x0148, size 0x1
};
