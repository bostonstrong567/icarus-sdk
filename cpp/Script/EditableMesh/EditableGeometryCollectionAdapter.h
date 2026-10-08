// /Script/EditableMesh.EditableGeometryCollectionAdapter
// Derives from: UEditableMeshAdapter > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableGeometryCollectionAdapter.h

UCLASS(MinimalAPI)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
public:
    UPROPERTY() UGeometryCollection* GeometryCollection;  // 0x0028, size 0x8
    UPROPERTY() UGeometryCollection* OriginalGeometryCollection;  // 0x0030, size 0x8
    UPROPERTY() int32 GeometryCollectionLODIndex;  // 0x0038, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMeshElementArray<FAdaptorPolygon,FPolygonID> RenderingPolygons;  // 0x0040, private
    TMeshElementArray<FAdaptorPolygon2Group,FPolygonGroupID> RenderingPolygonGroups;  // 0x0078, private
    UGeometryCollectionComponent * GeometryCollectionComponent;  // 0x00B0, private
    FBoxSphereBounds CachedBoundingBoxAndSphere;  // 0x00B8, private
};
