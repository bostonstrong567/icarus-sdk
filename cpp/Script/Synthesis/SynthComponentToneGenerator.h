// /Script/Synthesis.SynthComponentToneGenerator
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x6E0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/SynthComponentToneGenerator.h

UCLASS(Config=Engine)
class USynthComponentToneGenerator : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Frequency;  // 0x06C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Volume;  // 0x06C4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISoundGenerator,1> ToneGenerator;  // 0x06C8, private

    UFUNCTION(BlueprintCallable) void SetFrequency(float InFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolume(float InVolume);  // parameters 0x4
};
