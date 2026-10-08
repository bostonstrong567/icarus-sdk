// /Script/Engine.SoundNodeMixer
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeMixer.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeMixer : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) TArray<float> InputVolume;  // 0x0048, size 0x10
};
