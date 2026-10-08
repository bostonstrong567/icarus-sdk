// /Script/Engine.BlendSample
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h

USTRUCT()
struct FBlendSample
{
    UPROPERTY(EditAnywhere) UAnimSequence* Animation;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FVector SampleValue;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) float RateScale;  // 0x0014, size 0x4
};
