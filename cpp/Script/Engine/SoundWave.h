// /Script/Engine.SoundWave
// Derives from: USoundBase > UObject
// size 0x370, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

UCLASS(EditInlineNew)
class USoundWave : public USoundBase
{
public:
    UPROPERTY(EditAnywhere) int32 CompressionQuality;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere) int32 StreamingPriority;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere) ESoundwaveSampleRateSettings SampleRateQuality;  // 0x0178, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESoundGroup> SoundGroup;  // 0x017A, size 0x1
    UPROPERTY(EditAnywhere) uint8 bLooping : 1;  // 0x017B, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bStreaming : 1;  // 0x017B, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSeekableStreaming : 1;  // 0x017B, mask 0x04
    UPROPERTY(EditAnywhere) ESoundWaveLoadingBehavior LoadingBehavior;  // 0x017C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bMature : 1;  // 0x017D, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bManualWordWrap : 1;  // 0x017D, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSingleLine : 1;  // 0x017E, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIsAmbisonics : 1;  // 0x017E, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDefaultRoutingSettings ModulationSettings;  // 0x0180, size 0x48
    UPROPERTY(EditAnywhere) TArray<float> FrequenciesToAnalyze;  // 0x01C8, size 0x10
    UPROPERTY() TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData;  // 0x01D8, size 0x10
    UPROPERTY() TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere) int32 InitialChunkSize;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString SpokenText;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SubtitlePriority;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere) float Volume;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere) float Pitch;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere) int32 NumChannels;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere) int32 SampleRate;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FSubtitleCue> Subtitles;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere) UCurveTable* Curves;  // 0x0280, size 0x8
    UPROPERTY() UCurveTable* InternalCurves;  // 0x0288, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TEnumAsByte<enum EDecompressionType> DecompressionType;  // 0x0179
    uint8 : 1 bLoadingBehaviorOverridden;  // 0x017D
    uint8 : 1 bProcedural;  // 0x017D
    uint8 : 1 bPlayingProcedural;  // 0x017D
    uint8 : 1 bIsSourceBus;  // 0x017D
    uint8 : 1 bCanProcessAsync;  // 0x017D
    uint8 : 1 bDynamicResource;  // 0x017D
    uint8 : 1 bDecompressedFromOgg;  // 0x017E
    uint8 : 1 bCachedSampleRateFromPlatformSettings;  // 0x017E, private
    uint8 : 1 bSampleRateManuallyReset;  // 0x017E, private
    volatile USoundWave::ESoundWaveResourceState ResourceState;  // 0x017F, private
    FThreadSafeCounter PrecacheState;  // 0x01FC, private
    FWindowsCriticalSection SourcesPlayingCs;  // 0x0200, private
    TArray<ISoundWaveClient *,TSizedDefaultAllocator<32> > SourcesPlaying;  // 0x0228, private
    float CachedSampleRateOverride;  // 0x0238, private
    ESoundWaveLoadingBehavior CachedSoundWaveLoadingBehavior;  // 0x023C, private
    int32 ResourceID;  // 0x0264
    int32 ResourceSize;  // 0x0268
    int32 TrackedMemoryUsage;  // 0x026C
    FAudioChunkHandle FirstChunk;  // 0x0290, protected
    FAsyncTask<FAsyncAudioDecompressWorker> * AudioDecompressor;  // 0x02C0
    uint8 * CachedRealtimeFirstBuffer;  // 0x02C8
    int32 NumPrecacheFrames;  // 0x02D0
    int32 RawPCMDataSize;  // 0x02D4
    uint8 * RawPCMData;  // 0x02D8
    FOwnedBulkDataPtr * OwnedBulkDataPtr;  // 0x02E0
    const uint8 * ResourceData;  // 0x02E8
    FBulkDataBuffer<unsigned char> ZerothChunkData;  // 0x02F0
    FUntypedBulkData2<unsigned char> RawData;  // 0x0300
    FGuid CompressedDataGuid;  // 0x0328
    FFormatContainer CompressedFormatData;  // 0x0338
    FStreamedAudioPlatformData * RunningPlatformData;  // 0x0350
    TSortedMap<FString,FStreamedAudioPlatformData *,TSizedDefaultAllocator<32>,TLess<FString const &> > CookedPlatformData;  // 0x0358
    FThreadSafeCounter NumSourcesPlaying;  // 0x0368

    // Virtual functions that start here:
    //   BeginGetCompressedData, GeneratePCMData, GetCompressedData, GetGeneratedPCMDataFormat
    //   GetResourceSizeForFormat, HasCompressedData, InitAudioResource, OnBeginGenerate, OnEndGenerate
};
