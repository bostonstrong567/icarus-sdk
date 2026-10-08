// /Script/Engine.SoundNodeDoppler
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDoppler.h

UCLASS(EditInlineNew)
class USoundNodeDoppler : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) float DopplerIntensity;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) bool bUseSmoothing;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) float SmoothingInterpSpeed;  // 0x0050, size 0x4
};
