// /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Derives from: UGeometryCacheTrack > UObject
// size 0x108, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackTransformGroupAnimation.h

UCLASS(NotPlaceable, Config=Engine)
class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
private:
    FGeometryCacheMeshData MeshData;  // 0x0058, not reflected
public:
    UFUNCTION() void SetMesh(const FGeometryCacheMeshData& NewMeshData);  // parameters 0xB0
};
