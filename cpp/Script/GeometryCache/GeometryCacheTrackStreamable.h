// /Script/GeometryCache.GeometryCacheTrackStreamable
// Derives from: UGeometryCacheTrack > UObject
// size 0xD8, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackStreamable.h

UCLASS(Config=Engine)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) UGeometryCacheCodecBase* Codec;  // 0x0058, size 0x8
    FGeometryCachePreprocessor * Preprocessor;  // 0x0060, not reflected
private:
    TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32> > Chunks;  // 0x0068, not reflected
    TArray<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32> > Samples;  // 0x0078, not reflected
    TArray<FVisibilitySample,TSizedDefaultAllocator<32> > VisibilitySamples;  // 0x0088, not reflected
    FGeometryCacheTrackStreamableRenderResource RenderResource;  // 0x0098, not reflected
    FRenderCommandFence ReleaseResourcesFence;  // 0x00B8, not reflected
    UPROPERTY() float StartSampleTime;  // 0x00C8, size 0x4
    uint64 Hash;  // 0x00D0, not reflected
};
