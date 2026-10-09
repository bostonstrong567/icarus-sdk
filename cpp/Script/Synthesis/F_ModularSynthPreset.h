// /Script/Synthesis.ModularSynthPreset
// size 0xE0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/EpicSynth1Component.h

USTRUCT()
struct FModularSynthPreset : public FTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnablePolyphony : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynth1OscType Osc1Type;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc1Gain;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc1Octave;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc1Semitones;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc1Cents;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc1PulseWidth;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynth1OscType Osc2Type;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc2Gain;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc2Octave;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc2Semitones;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc2Cents;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Osc2PulseWidth;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Portamento;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableUnison : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableOscillatorSync : 1;  // 0x0040, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spread;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pan;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LFO1Frequency;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LFO1Gain;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOType LFO1Type;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOMode LFO1Mode;  // 0x0055, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOPatchType LFO1PatchType;  // 0x0056, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LFO2Frequency;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LFO2Gain;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOType LFO2Type;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOMode LFO2Mode;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthLFOPatchType LFO2PatchType;  // 0x0062, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GainDb;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackTime;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecayTime;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SustainGain;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReleaseTime;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthModEnvPatch ModEnvPatchType;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthModEnvBiasPatch ModEnvBiasPatchType;  // 0x0079, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInvertModulationEnvelope : 1;  // 0x007C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInvertModulationEnvelopeBias : 1;  // 0x007C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModulationEnvelopeDepth;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModulationEnvelopeAttackTime;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModulationEnvelopeDecayTime;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModulationEnvelopeSustainGain;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModulationEnvelopeReleaseTime;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLegato : 1;  // 0x0094, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRetrigger : 1;  // 0x0094, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterFrequency;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterQ;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthFilterType FilterType;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthFilterAlgorithm FilterAlgorithm;  // 0x00A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bStereoDelayEnabled : 1;  // 0x00A4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthStereoDelayMode StereoDelayMode;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoDelayTime;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoDelayFeedback;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoDelayWetlevel;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoDelayRatio;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bChorusEnabled : 1;  // 0x00BC, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChorusDepth;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChorusFeedback;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChorusFrequency;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FEpicSynth1Patch> Patches;  // 0x00D0, size 0x10
};
