// /Script/Engine.SoundNodeModulatorContinuous
// Derives from: USoundNode > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeModulatorContinuous.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) FModulatorContinuousParams PitchModulationParams;  // 0x0048, size 0x20
    UPROPERTY(EditAnywhere) FModulatorContinuousParams VolumeModulationParams;  // 0x0068, size 0x20
};
