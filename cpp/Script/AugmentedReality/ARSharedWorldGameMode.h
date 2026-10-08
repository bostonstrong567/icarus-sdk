// /Script/AugmentedReality.ARSharedWorldGameMode
// Derives from: AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x370, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSharedWorldGameMode.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AARSharedWorldGameMode : public AGameMode
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 BufferSizePerChunk;  // 0x0308, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bShouldSendSharedWorldData;  // 0x030C, private
    TMap<AARSharedWorldPlayerController *,FARSharedWorldReplicationState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AARSharedWorldPlayerController *,FARSharedWorldReplicationState,0> > PlayerToReplicationStateMap;  // 0x0310, private
    TArray<unsigned char,TSizedDefaultAllocator<32> > SendBuffer;  // 0x0360, private

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) AARSharedWorldGameState* GetARSharedWorldGameState();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetARSharedWorldData(TArray<uint8> ARWorldData);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetARWorldSharingIsReady();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetPreviewImageData(TArray<uint8> ImageData);  // parameters 0x10
};
