// /Script/MotoSynth.MotoSynthSource
// Derives from: UObject
// size 0xF8, declared in Engine/Plugins/Experimental/MotoSynth/Source/MotoSynth/Public/MotoSynthSourceAsset.h

UCLASS()
class UMotoSynthSource : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bConvertTo8Bit;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DownSampleFactor;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve RPMCurve;  // 0x0030, size 0x88
    UPROPERTY(Deprecated) TArray<float> SourceData;  // 0x00B8, size 0x10
    UPROPERTY() TArray<int16> SourceDataPCM;  // 0x00C8, size 0x10
    UPROPERTY() int32 SourceSampleRate;  // 0x00D8, size 0x4
    UPROPERTY() TArray<FGrainTableEntry> GrainTable;  // 0x00E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 SourceDataID;  // 0x00F0, protected
};
