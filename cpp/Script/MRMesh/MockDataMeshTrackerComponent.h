// /Script/MRMesh.MockDataMeshTrackerComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/MRMesh/Public/MockDataMeshTrackerComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnMockDataMeshTrackerUpdated OnMeshTrackerUpdated;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScanWorld;  // 0x0208, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequestNormals;  // 0x0209, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequestVertexConfidence;  // 0x020A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMeshTrackerVertexColorMode VertexColorMode;  // 0x020B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FColor> BlockVertexColors;  // 0x0210, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor VertexColorFromConfidenceZero;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor VertexColorFromConfidenceOne;  // 0x0230, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateInterval;  // 0x0240, size 0x4
    UPROPERTY(Transient, Instanced) UMRMeshComponent* MRMesh;  // 0x0248, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FMockDataMeshTrackerImpl * Impl;  // 0x0250, private
    float LastUpdateTime;  // 0x0258, private
    float CurrentTime;  // 0x025C, private
    int32 UpdateCount;  // 0x0260, private
    int32 NumBlocks;  // 0x0264, private

    UFUNCTION(BlueprintCallable) void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);  // parameters 0x8
};
