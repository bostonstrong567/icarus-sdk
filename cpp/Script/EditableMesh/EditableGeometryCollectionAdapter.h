// /Script/EditableMesh.EditableGeometryCollectionAdapter
// Derives from: UEditableMeshAdapter > UObject
// size 0xD8, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableGeometryCollectionAdapter.h

UCLASS(MinimalAPI)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UGeometryCollection* GeometryCollection;  // 0x0028, size 0x8
    UPROPERTY() UGeometryCollection* OriginalGeometryCollection;  // 0x0030, size 0x8
    UPROPERTY() int32 GeometryCollectionLODIndex;  // 0x0038, size 0x4
    TMeshElementArray<FAdaptorPolygon,FPolygonID> RenderingPolygons;  // 0x0040, not reflected
    TMeshElementArray<FAdaptorPolygon2Group,FPolygonGroupID> RenderingPolygonGroups;  // 0x0078, not reflected
    UGeometryCollectionComponent * GeometryCollectionComponent;  // 0x00B0, not reflected
    FBoxSphereBounds CachedBoundingBoxAndSphere;  // 0x00B8, not reflected
};
