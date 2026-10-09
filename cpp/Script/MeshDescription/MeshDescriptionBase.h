// /Script/MeshDescription.MeshDescriptionBase
// Derives from: UObject
// size 0x390, declared in Engine/Source/Runtime/MeshDescription/Public/MeshDescriptionBase.h

UCLASS()
class UMeshDescriptionBase : public UObject
{
protected:
    FMeshDescription MeshDescription;  // 0x0028, not reflected
    TUniquePtr<FMeshAttributes,TDefaultDelete<FMeshAttributes> > RequiredAttributes;  // 0x0388, not reflected
public:
    UFUNCTION(BlueprintCallable) void ComputePolygonTriangulation(FPolygonID PolygonID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);  // parameters 0xC
    UFUNCTION(BlueprintCallable) FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) FPolygonGroupID CreatePolygonGroup();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);  // parameters 0x28
    UFUNCTION(BlueprintCallable) FVertexID CreateVertex();  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVertexInstanceID CreateVertexInstance(FVertexID VertexID);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CreateVertexWithID(FVertexID VertexID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void DeleteVertex(FVertexID VertexID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Empty();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexID GetEdgeVertex(FEdgeID EdgeID, int32 VertexNumber) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumEdgeConnectedPolygons(FEdgeID EdgeID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumEdgeConnectedTriangles(FEdgeID EdgeID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumPolygonInternalEdges(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumPolygonTriangles(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumPolygonVertices(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexConnectedEdges(FVertexID VertexID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexConnectedPolygons(FVertexID VertexID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexConnectedTriangles(FVertexID VertexID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumVertexVertexInstances(FVertexID VertexID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonID GetTrianglePolygon(FTriangleID TriangleID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32 Index) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetVertexPosition(FVertexID VertexID) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEdgeInternal(FEdgeID EdgeID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEdgeValid(FEdgeID EdgeID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEmpty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPolygonValid(FPolygonID PolygonID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTrianglePartOfNgon(FTriangleID TriangleID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTriangleValid(FTriangleID TriangleID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVertexOrphaned(FVertexID VertexID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVertexValid(FVertexID VertexID) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable) void ReserveNewEdges(int32 NumberOfNewEdges);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReserveNewPolygons(int32 NumberOfNewPolygons);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReserveNewTriangles(int32 NumberOfNewTriangles);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReserveNewVertices(int32 NumberOfNewVertices);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReversePolygonFacing(FPolygonID PolygonID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPolygonVertexInstance(FPolygonID PolygonID, int32 PerimeterIndex, FVertexInstanceID VertexInstanceID);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVertexPosition(FVertexID VertexID, const FVector& Position);  // parameters 0x10

    // Virtual functions that start here:
    //   GetRequiredAttributes, RegisterAttributes
};
