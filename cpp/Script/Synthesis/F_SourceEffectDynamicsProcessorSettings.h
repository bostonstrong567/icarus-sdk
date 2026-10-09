// /Script/Synthesis.SourceEffectDynamicsProcessorSettings
// size 0x28, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectDynamicsProcessor.h

USTRUCT()
struct FSourceEffectDynamicsProcessorSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESourceEffectDynamicsProcessorType DynamicsProcessorType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESourceEffectDynamicsPeakMode PeakMode;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAheadMsec;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackTimeMsec;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReleaseTimeMsec;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdDb;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Ratio;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float KneeBandwidthDb;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputGainDb;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputGainDb;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bStereoLinked : 1;  // 0x0024, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAnalogMode : 1;  // 0x0024, mask 0x02
};
