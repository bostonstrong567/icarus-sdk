// /Script/Synthesis.DynamicsBandSettings
// size 0x20, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectMultiBandCompressor.h

USTRUCT()
struct FDynamicsBandSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CrossoverTopFrequency;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackTimeMsec;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReleaseTimeMsec;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdDb;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Ratio;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float KneeBandwidthDb;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputGainDb;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputGainDb;  // 0x001C, size 0x4
};
