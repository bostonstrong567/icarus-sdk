// /Script/GeometryCache.GeometryCacheTrackStreamable
// Derives from: UGeometryCacheTrack > UObject
// size 0xD8, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackStreamable.h

UCLASS(Config=Engine)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
    UPROPERTY(EditAnywhere) UGeometryCacheCodecBase* Codec;  // 0x0058, size 0x8
    UPROPERTY() float StartSampleTime;  // 0x00C8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FGeometryCachePreprocessor * Preprocessor;  // 0x0060
    TArray<FStreamedGeometryCacheChunk,TSizedDefaultAllocator<32> > Chunks;  // 0x0068, private
    TArray<FGeometryCacheTrackStreamableSampleInfo,TSizedDefaultAllocator<32> > Samples;  // 0x0078, private
    TArray<FVisibilitySample,TSizedDefaultAllocator<32> > VisibilitySamples;  // 0x0088, private
    FGeometryCacheTrackStreamableRenderResource RenderResource;  // 0x0098, private
    FRenderCommandFence ReleaseResourcesFence;  // 0x00B8, private
    uint64 Hash;  // 0x00D0, private
};
