// /Script/Engine.SoundNodeModulator
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeModulator.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeModulator : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) float PitchMin;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float PitchMax;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float VolumeMin;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float VolumeMax;  // 0x0054, size 0x4
};
