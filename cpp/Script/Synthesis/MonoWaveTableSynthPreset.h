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

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned int,TFunction<void __cdecl(AssetChangeInfo const &)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,TFunction<void __cdecl(AssetChangeInfo const &)>,0> > PropertyChangedCallbacks;  // 0x0060, protected
    TArray<float,TSizedDefaultAllocator<32> > CurveBiDirTangents;  // 0x00B0, protected
    FRuntimeFloatCurve DefaultCurve;  // 0x00C0, protected
    int32 CachedGridSize;  // 0x0148, protected
    int8 : 1 bWasLockedToGrid;  // 0x014C, protected
    int32 CachedTableResolution;  // 0x0150, protected
    TArray<FRuntimeFloatCurve,TSizedDefaultAllocator<32> > CachedWaveTable;  // 0x0158, protected
    uint8 : 1 bCachedNormalizationSetting;  // 0x0168, protected
};
