// /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
// Derives from: UGeometryCacheTrack > UObject
// size 0x108, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrackTransformAnimation.h

UCLASS(NotPlaceable, Config=Engine)
class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FGeometryCacheMeshData MeshData;  // 0x0058, private

    UFUNCTION() void SetMesh(const FGeometryCacheMeshData& NewMeshData);  // parameters 0xB0
};
