// /Script/Synthesis.SourceEffectBitCrusherSettings
// size 0x30, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectBitCrusher.h

USTRUCT()
struct FSourceEffectBitCrusherSettings
{
    UPROPERTY() float CrushedSampleRate;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings SampleRateModulation;  // 0x0008, size 0x10
    UPROPERTY() float CrushedBits;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings BitModulation;  // 0x0020, size 0x10
};
