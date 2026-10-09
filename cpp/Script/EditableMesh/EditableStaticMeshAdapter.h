// /Script/EditableMesh.EditableStaticMeshAdapter
// Derives from: UEditableMeshAdapter > UObject
// size 0xE0, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableStaticMeshAdapter.h

UCLASS(MinimalAPI)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0028, size 0x8
    UPROPERTY() UStaticMesh* OriginalStaticMesh;  // 0x0030, size 0x8
    UPROPERTY() int32 StaticMeshLODIndex;  // 0x0038, size 0x4
    TMeshElementArray<FRenderingPolygon,FPolygonID> RenderingPolygons;  // 0x0040, not reflected
    TMeshElementArray<FRenderingPolygonGroup,FPolygonGroupID> RenderingPolygonGroups;  // 0x0078, not reflected
    TSharedPtr<FStaticMeshComponentRecreateRenderStateContext,0> RecreateRenderStateContext;  // 0x00B0, not reflected
    FBoxSphereBounds CachedBoundingBoxAndSphere;  // 0x00C0, not reflected
    bool bUpdateCollisionNeeded;  // 0x00DC, not reflected
    bool bRecreateSimplifiedCollision;  // 0x00DD, not reflected
};
