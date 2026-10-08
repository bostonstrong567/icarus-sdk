// /Script/Synthesis.SourceEffectRingModulationSettings
// size 0x20, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectRingModulation.h

USTRUCT()
struct FSourceEffectRingModulationSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERingModulatorTypeSourceEffect ModulatorType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Depth;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryLevel;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAudioBus* AudioBusModulator;  // 0x0018, size 0x8
};
