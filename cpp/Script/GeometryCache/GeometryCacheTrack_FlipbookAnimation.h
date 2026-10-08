// /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Derives from: UGeometryCacheTrack > UObject
// size 0x80, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackFlipbookAnimation.h

UCLASS(NotPlaceable, Config=Engine)
class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
    UPROPERTY(EditAnywhere) uint32 NumMeshSamples;  // 0x0058, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<FGeometryCacheMeshData,TSizedDefaultAllocator<32> > MeshSamples;  // 0x0060, private
    TArray<float,TSizedDefaultAllocator<32> > MeshSampleTimes;  // 0x0070, private

    UFUNCTION() void AddMeshSample(const FGeometryCacheMeshData& MeshData, float SampleTime);  // parameters 0xB4
};
