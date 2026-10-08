// /Script/Engine.AnimComposite
// Derives from: UAnimCompositeBase > UAnimSequenceBase > UAnimationAsset > UObject
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimComposite.h

UCLASS(MinimalAPI, Config=Engine)
class UAnimComposite : public UAnimCompositeBase
{
public:
    UPROPERTY() FAnimTrack AnimationTrack;  // 0x00A8, size 0x10
};
