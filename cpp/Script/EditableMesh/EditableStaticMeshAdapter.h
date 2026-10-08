// /Script/EditableMesh.EditableStaticMeshAdapter
// Derives from: UEditableMeshAdapter > UObject
// size 0xE0, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/EditableStaticMeshAdapter.h

UCLASS(MinimalAPI)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0028, size 0x8
    UPROPERTY() UStaticMesh* OriginalStaticMesh;  // 0x0030, size 0x8
    UPROPERTY() int32 StaticMeshLODIndex;  // 0x0038, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMeshElementArray<FRenderingPolygon,FPolygonID> RenderingPolygons;  // 0x0040, private
    TMeshElementArray<FRenderingPolygonGroup,FPolygonGroupID> RenderingPolygonGroups;  // 0x0078, private
    TSharedPtr<FStaticMeshComponentRecreateRenderStateContext,0> RecreateRenderStateContext;  // 0x00B0, private
    FBoxSphereBounds CachedBoundingBoxAndSphere;  // 0x00C0, private
    bool bUpdateCollisionNeeded;  // 0x00DC, private
    bool bRecreateSimplifiedCollision;  // 0x00DD, private
};
