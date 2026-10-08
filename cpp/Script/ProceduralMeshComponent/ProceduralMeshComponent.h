// /Script/ProceduralMeshComponent.ProceduralMeshComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4E0, declared in Engine/Plugins/Runtime/ProceduralMeshComponent/Source/ProceduralMeshComponent/Public/ProceduralMeshComponent.h

UCLASS(Config=Engine)
class UProceduralMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseComplexAsSimpleCollision;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseAsyncCooking;  // 0x0481, size 0x1
    UPROPERTY(Instanced) UBodySetup* ProcMeshBodySetup;  // 0x0488, size 0x8
    UPROPERTY() TArray<FProcMeshSection> ProcMeshSections;  // 0x0490, size 0x10
    UPROPERTY() TArray<FKConvexElem> CollisionConvexElems;  // 0x04A0, size 0x10
    UPROPERTY() FBoxSphereBounds LocalBounds;  // 0x04B0, size 0x1C
    UPROPERTY(Transient) TArray<UBodySetup*> AsyncBodySetupQueue;  // 0x04D0, size 0x10

    UFUNCTION(BlueprintCallable) void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClearAllMeshSections();
    UFUNCTION(BlueprintCallable) void ClearCollisionConvexMeshes();
    UFUNCTION(BlueprintCallable) void ClearMeshSection(int32 SectionIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);  // parameters 0x69
    UFUNCTION(BlueprintCallable) void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumSections() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMeshSectionVisible(int32 SectionIndex) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);  // parameters 0x88
};
