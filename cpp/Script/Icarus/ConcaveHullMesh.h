// /Script/Icarus.ConcaveHullMesh
// Derives from: UProceduralMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x580, declared in Icarus/Source/Icarus/Utility/ConcaveHullMesh.h

UCLASS(Config=Engine)
class UConcaveHullMesh : public UProceduralMeshComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnConcaveHullMeshGenerated OnMeshGenerated;  // 0x04E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Concavity;  // 0x04E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LengthThreshold;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bProjectToLandscape;  // 0x04EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVector2D> ConcaveHullPoints;  // 0x04F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FVector> ConcaveHullVertices;  // 0x0500, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FThreadSafeBool bIsRunningAsyncGenerate;  // 0x0510, private
    UConcaveHullMesh::FGenerateConcaveHullAsyncPayload QueuedAsyncPayload;  // 0x0520, private

    UFUNCTION(BlueprintCallable) void DebugGeneratedHullPoints(float ZOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateConcaveHull(const TArray<FVector>& Points, bool bIsWorldSpace, bool bCreateConvexCollision, bool bIsAsync);  // parameters 0x13
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRunningAsyncGenerate() const;  // parameters 0x1
};
