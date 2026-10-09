// /Script/Synthesis.MonoWaveTableSynthPreset
// Derives from: UObject
// size 0x170, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/SynthComponentMonoWaveTable.h

UCLASS()
class UMonoWaveTableSynthPreset : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PresetName;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bLockKeyframesToGridBool : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 LockKeyframesToGrid;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 WaveTableResolution;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FRuntimeFloatCurve> WaveTable;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNormalizeWaveTables : 1;  // 0x0058, mask 0x01
protected:
    TMap<unsigned int,TFunction<void __cdecl(AssetChangeInfo const &)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,TFunction<void __cdecl(AssetChangeInfo const &)>,0> > PropertyChangedCallbacks;  // 0x0060, not reflected
    TArray<float,TSizedDefaultAllocator<32> > CurveBiDirTangents;  // 0x00B0, not reflected
    FRuntimeFloatCurve DefaultCurve;  // 0x00C0, not reflected
    int32 CachedGridSize;  // 0x0148, not reflected
    int8 : 1 bWasLockedToGrid;  // 0x014C, not reflected
    int32 CachedTableResolution;  // 0x0150, not reflected
    TArray<FRuntimeFloatCurve,TSizedDefaultAllocator<32> > CachedWaveTable;  // 0x0158, not reflected
    uint8 : 1 bCachedNormalizationSetting;  // 0x0168, not reflected
};
