// /Script/Engine.InstancedStaticMeshComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x590, declared in Engine/Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
public:
    UPROPERTY(EditAnywhere) TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;  // 0x04E0, size 0x10
    UPROPERTY(EditAnywhere) int32 NumCustomDataFloats;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere) TArray<float> PerInstanceSMCustomData;  // 0x04F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InstancingRandomSeed;  // 0x0508, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InstanceStartCullDistance;  // 0x050C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 InstanceEndCullDistance;  // 0x0510, size 0x4
    UPROPERTY() TArray<int32> InstanceReorderTable;  // 0x0518, size 0x10
    UPROPERTY(Transient) int32 NumPendingLightmaps;  // 0x0570, size 0x4
    UPROPERTY(Transient) TArray<FInstancedStaticMeshMappingInfo> CachedMappings;  // 0x0578, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint64 ProxySize;  // 0x0528
    TSharedPtr<FPerInstanceRenderData,1> PerInstanceRenderData;  // 0x0530
    FInstanceUpdateCmdBuffer InstanceUpdateCmdBuffer;  // 0x0540
    TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData> > InstanceDataBuffers;  // 0x0558
    TArray<FBodyInstance *,TSizedDefaultAllocator<32> > InstanceBodies;  // 0x0560

    UFUNCTION(BlueprintCallable) int32 AddInstance(const FTransform& InstanceTransform);  // parameters 0x34
    UFUNCTION(BlueprintCallable) int32 AddInstanceWorldSpace(const FTransform& WorldTransform);  // parameters 0x34
    UFUNCTION(BlueprintCallable) TArray<int32> AddInstances(const TArray<FTransform>& InstanceTransforms, bool bShouldReturnIndices);  // parameters 0x28
    UFUNCTION(BlueprintCallable) bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);  // parameters 0x44
    UFUNCTION(BlueprintCallable) bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClearInstances();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetInstanceCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;  // parameters 0x42
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) bool RemoveInstance(int32 InstanceIndex);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);  // parameters 0xE
    UFUNCTION(BlueprintCallable) bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);  // parameters 0x44

    // Virtual functions that start here:
    //   AddInstance, AddInstances, ApplyComponentInstanceData, BatchUpdateInstancesData
    //   BatchUpdateInstancesTransform, BatchUpdateInstancesTransforms, ClearInstances
    //   CreateAllInstanceBodies, GetInstancesOverlappingBox, GetInstancesOverlappingSphere
    //   GetNavigationPerInstanceTransforms, GetNumRenderInstances, InitInstanceBody
    //   OnPostLoadPerInstanceData, PartialNavigationUpdate, PreAllocateInstancesMemory, RemoveInstance
    //   SetCustomData, SetCustomDataValue, SupportsPartialNavigationUpdate, UpdateInstanceTransform
};
