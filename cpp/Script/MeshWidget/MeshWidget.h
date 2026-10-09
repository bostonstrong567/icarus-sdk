// /Script/MeshWidget.MeshWidget
// Derives from: UWidget > UVisual > UObject
// size 0x140, declared in Icarus/Plugins/IcarusMeshWidget/Source/MeshWidget/Public/MeshWidget.h

UCLASS()
class UMeshWidget : public UWidget
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateMeshInstance OnRequestMeshInstanceUpdate;  // 0x0110, size 0x10
protected:
    TSharedPtr<SIcarusMeshWidget,0> MeshWidget;  // 0x0120, not reflected
    TArray<TArray<FMeshInstanceData,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > MeshInstanceData;  // 0x0130, not reflected
public:
    UFUNCTION(BlueprintCallable) int32 AddMesh(USlateVectorArtData* InMeshData);  // parameters 0xC
    UFUNCTION(BlueprintCallable) int32 AddMeshWithInstancing(USlateVectorArtData* InMeshData, int32 InstanceCount);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddRenderRun(int32 InMeshIndex, int32 InInstanceOffset, int32 InNumInstances);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ClearRuns(int32 NumRuns);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* ConvertToMaterialInstanceDynamic(int32 MeshId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void EnableInstancing(int32 MeshId, int32 InstanceCount);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FGeometry GetCachedAllottedGeometry() const;  // parameters 0x38
    UFUNCTION(BlueprintCallable) void UpdateMeshInstance(int32 MeshId, int32 InstanceId, FMeshInstanceData NewData);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdatePerInstanceBuffer(int32 MeshId, TArray<FVector4> Data);  // parameters 0x18
};
