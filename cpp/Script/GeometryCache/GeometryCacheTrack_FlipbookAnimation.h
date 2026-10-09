// /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Derives from: UGeometryCacheTrack > UObject
// size 0x80, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackFlipbookAnimation.h

UCLASS(NotPlaceable, Config=Engine)
class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) uint32 NumMeshSamples;  // 0x0058, size 0x4
    TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32> > MeshSamples;  // 0x0060, not reflected
    TArray<float,TSizedDefaultAllocator<32> > MeshSampleTimes;  // 0x0070, not reflected
public:
    UFUNCTION() void AddMeshSample(const FGeometryCacheMeshData& MeshData, float SampleTime);  // parameters 0xB4
};
