// /Script/Engine.SoundNodeDistanceCrossFade
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDistanceCrossFade.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) TArray<FDistanceDatum> CrossFadeInput;  // 0x0048, size 0x10

    // Virtual functions that start here:
    //   AllowCrossfading, GetCurrentDistance
};
