// /Script/EditableMesh.EditableMeshAdapter
// Derives from: UObject
// size 0x28, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMeshAdapter.h

UCLASS(Abstract)
class UEditableMeshAdapter : public UObject
{
public:

    // Virtual functions that start here:
    //   InitializeFromEditableMesh, IsCommitted, IsCommittedAsInstance, OnAssignPolygonsToPolygonGroups
    //   OnChangePolygonVertexInstances, OnCommit, OnCommitInstance, OnCreateEdges, OnCreateEmptyVertexRange
    //   OnCreatePolygonGroups, OnCreatePolygons, OnCreateVertexInstances, OnCreateVertices, OnDeleteEdges
    //   OnDeleteOrphanVertices, OnDeletePolygonGroups, OnDeletePolygons, OnDeleteVertexInstances
    //   OnEndModification, OnPropagateInstanceChanges, OnRebuildRenderMesh, OnRebuildRenderMeshFinish
    //   OnRebuildRenderMeshStart, OnReindexElements, OnRetriangulatePolygons, OnRevert, OnRevertInstance
    //   OnSetEdgeAttribute, OnSetEdgesVertices, OnSetPolygonAttribute, OnSetPolygonGroupAttribute
    //   OnSetVertexAttribute, OnSetVertexInstanceAttribute, OnStartModification
};
