// /Script/EditableMesh.EditableMesh
// Derives from: UObject
// size 0x708, declared in Engine/Plugins/Runtime/EditableMesh/Source/EditableMesh/Public/EditableMesh.h

UCLASS()
class UEditableMesh : public UObject
{
public:
    UPROPERTY() TArray<UEditableMeshAdapter*> Adapters;  // 0x03B8, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 TextureCoordinateCount;  // 0x03D0, size 0x4
    UPROPERTY() int32 PendingCompactCounter;  // 0x051C, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 SubdivisionCount;  // 0x0520, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FMeshDescription * MeshDescription;  // 0x0028
    FMeshDescription OwnedMeshDescription;  // 0x0030
    FEditableMeshSubMeshAddress SubMeshAddress;  // 0x0390
    bool bAllowUndo;  // 0x03A8
    bool bAllowCompact;  // 0x03A9
    TUniquePtr<FCompoundChangeInput,TDefaultDelete<FCompoundChangeInput> > Undo;  // 0x03B0
    UEditableMeshAdapter * PrimaryAdapter;  // 0x03C8
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator> PolygonsPendingNewTangentBasis;  // 0x03D8
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator> PolygonsPendingFlipTangentBasis;  // 0x0428
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator> PolygonsPendingTriangulation;  // 0x0478
    TSet<FVertexID,DefaultKeyFuncs<FVertexID,0>,FDefaultSetAllocator> VerticesPendingMerging;  // 0x04C8
    bool bIsBeingModified;  // 0x0518
    EMeshModificationType CurrentModificationType;  // 0x0519
    EMeshTopologyChange CurrentToplogyChange;  // 0x051A
    TSharedPtr<OpenSubdiv::v3_2_0::Far::TopologyRefiner,0> OsdTopologyRefiner;  // 0x0528
    TArray<int,TSizedDefaultAllocator<32> > OsdNumVerticesPerFace;  // 0x0538
    TArray<int,TSizedDefaultAllocator<32> > OsdVertexIndicesPerFace;  // 0x0548
    TArray<int,TSizedDefaultAllocator<32> > OsdCreaseVertexIndexPairs;  // 0x0558
    TArray<float,TSizedDefaultAllocator<32> > OsdCreaseWeights;  // 0x0568
    TArray<int,TSizedDefaultAllocator<32> > OsdCornerVertexIndices;  // 0x0578
    TArray<float,TSizedDefaultAllocator<32> > OsdCornerWeights;  // 0x0588
    TArray<int,TSizedDefaultAllocator<32> > OsdFVarIndicesPerFace;  // 0x0598
    TArray<UEditableMesh::FOsdFVarChannel,TSizedDefaultAllocator<32> > OsdFVarChannels;  // 0x05A8
    FSubdivisionLimitData SubdivisionLimitData;  // 0x05B8
    UEditableMesh::FElementIDsRemapped ElementIDsRemappedEvent;  // 0x05E8
    bool bAllowSpatialDatabase;  // 0x0600
    TSharedPtr<FEditableMeshOctree,0> Octree;  // 0x0608
    TMap<FPolygonID,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId2,0> > PolygonIDToOctreeElementIDMap;  // 0x0618
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator> DeletedOctreePolygonIDs;  // 0x0668
    TSet<FPolygonID,DefaultKeyFuncs<FPolygonID,0>,FDefaultSetAllocator> NewOctreePolygonIDs;  // 0x06B8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool AnyChangesToUndo() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void BevelPolygons(const TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Commit();
    UFUNCTION(BlueprintCallable) UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FBox ComputeBoundingBox() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds ComputeBoundingBoxAndSphere() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ComputePolygonCenter(FPolygonID PolygonID) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ComputePolygonNormal(FPolygonID PolygonID) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlane ComputePolygonPlane(FPolygonID PolygonID) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreateEmptyVertexRange(int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void EndModification(bool bFromUndo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ExtendEdges(const TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ExtendVertices(const TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ExtrudePolygons(const TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit) const;  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void FlipPolygons(const TArray<FPolygonID>& PolygonIDs);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32 ConnectedPolygonNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetEdgeConnectedPolygonCount(FEdgeID EdgeID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetEdgeCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexID GetEdgeVertex(FEdgeID EdgeID, int32 EdgeVertexNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonGroupID GetFirstValidPolygonGroup() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonGroupCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32 PolygonNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonPerimeterEdgeCount(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32 PolygonVertexNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonPerimeterVertexCount(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32 PolygonVertexNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32 PolygonTriangleNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSubdivisionCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSubdivisionLimitData GetSubdivisionLimitData() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTextureCoordinateCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32 ConnectedEdgeNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVertexConnectedEdgeCount(FVertexID VertexID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVertexCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32 ConnectedPolygonNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVertexInstanceCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitializeAdapters();
    UFUNCTION(BlueprintCallable) void InsertEdgeLoop(FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void InsetPolygons(const TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEdgeID InvalidEdgeID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPolygonGroupID InvalidPolygonGroupID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPolygonID InvalidPolygonID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVertexID InvalidVertexID();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBeingModified() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCommitted() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCommittedAsInstance() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCompactAllowed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOrphanedVertex(FVertexID VertexID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPreviewingSubdivisions() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSpatialDatabaseAllowed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsUndoAllowed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidEdge(FEdgeID EdgeID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidPolygon(FPolygonID PolygonID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidVertex(FVertexID VertexID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static FEdgeID MakeEdgeID(int32 EdgeIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPolygonGroupID MakePolygonGroupID(int32 PolygonGroupIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPolygonID MakePolygonID(int32 PolygonIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVertexID MakeVertexID(int32 VertexIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MoveVertices(const TArray<FVertexToMove>& VerticesToMove);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PropagateInstanceChanges();
    UFUNCTION(BlueprintCallable) void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RebuildRenderMesh();
    UFUNCTION(BlueprintCallable) void Revert();
    UFUNCTION(BlueprintCallable) UEditableMesh* RevertInstance();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetAllowCompact(bool bInAllowCompact);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowUndo(bool bInAllowUndo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSubdivisionCount(int32 NewSubdivisionCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextureCoordinateCount(int32 NumTexCoords);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SplitEdge(FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);  // parameters 0x14

    // Virtual functions that start here:
    //   IsBeingModified
};
