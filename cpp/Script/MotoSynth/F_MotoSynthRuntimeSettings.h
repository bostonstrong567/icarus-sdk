// /Script/MotoSynth.MotoSynthRuntimeSettings
// size 0x68, declared in Engine/Plugins/Experimental/MotoSynth/Source/MotoSynth/Public/MotoSynthPreset.h

USTRUCT()
struct FMotoSynthRuntimeSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSynthToneEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SynthToneVolume;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SynthToneFilterFrequency;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SynthOctaveShift;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bGranularEngineEnabled;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GranularEngineVolume;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GranularEnginePitchScale;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumSamplesToCrossfadeBetweenGrains;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumGrainTableEntriesPerGrain;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GrainTableRandomOffsetForConstantRPMs;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GrainCrossfadeSamplesForConstantRPMs;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) UMotoSynthSource* AccelerationSource;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) UMotoSynthSource* DecelerationSource;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStereoWidenerEnabled;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoDelayMsec;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoFeedback;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoWidenerWetlevel;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoWidenerDryLevel;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoWidenerDelayRatio;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStereoWidenerFilterEnabled;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoWidenerFilterFrequency;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoWidenerFilterQ;  // 0x0060, size 0x4
};
