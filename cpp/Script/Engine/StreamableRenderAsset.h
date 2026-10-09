// /Script/Engine.StreamableRenderAsset
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Engine/StreamableRenderAsset.h

UCLASS(Abstract, MinimalAPI)
class UStreamableRenderAsset : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumCinematicMipLevels;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 NeverStream : 1;  // 0x0054, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bGlobalForceMipLevelsToBeResident : 1;  // 0x0054, mask 0x02
    UPROPERTY(Transient) uint8 bHasStreamingUpdatePending : 1;  // 0x0054, mask 0x04
    UPROPERTY(Transient) uint8 bForceMiplevelsToBeResident : 1;  // 0x0054, mask 0x08
    UPROPERTY(Transient) uint8 bIgnoreStreamingMipBias : 1;  // 0x0054, mask 0x10
protected:
    TArray<UStreamableRenderAsset::FLODStreamingCallbackPayload,TSizedDefaultAllocator<32> > MipChangeCallbacks;  // 0x0028, not reflected
    TRefCountPtr<FRenderAssetUpdate> PendingUpdate;  // 0x0038, not reflected
    UPROPERTY(Transient) double ForceMipLevelsToBeResidentTimestamp;  // 0x0040, size 0x8
    UPROPERTY(Transient) int32 StreamingIndex;  // 0x004C, size 0x4
    UPROPERTY(Transient) int32 CachedCombinedLODBias;  // 0x0050, size 0x4
    UPROPERTY(Transient) uint8 bUseCinematicMipLevels : 1;  // 0x0054, mask 0x20
    FStreamableRenderResourceState CachedSRRState;  // 0x0058, not reflected

    // Virtual functions that start here:
    //   CalcCumulativeLODSize, DoesMipDataExist, GetLODGroupForStreaming, GetLastRenderTimeForStreaming
    //   GetMipIoFilenameHash, GetRenderAssetType, HasPendingLODTransition
    //   HasPendingRenderResourceInitialization, InvalidateLastRenderTimeForStreaming
    //   ShouldMipLevelsBeForcedResident, StreamIn, StreamOut
};
