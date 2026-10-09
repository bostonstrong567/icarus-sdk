// /Script/Engine.HierarchicalInstancedStaticMeshComponent
// Derives from: UInstancedStaticMeshComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x680, declared in Engine/Source/Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
    TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32> >,1> ClusterTreePtr;  // 0x0588, not reflected
    UPROPERTY() TArray<int32> SortedInstances;  // 0x0598, size 0x10
    UPROPERTY() int32 NumBuiltInstances;  // 0x05A8, size 0x4
    int32 NumBuiltRenderInstances;  // 0x05AC, not reflected
    UPROPERTY() FBox BuiltInstanceBounds;  // 0x05B0, size 0x1C
    UPROPERTY() FBox UnbuiltInstanceBounds;  // 0x05CC, size 0x1C
    UPROPERTY() TArray<FBox> UnbuiltInstanceBoundsList;  // 0x05E8, size 0x10
    UPROPERTY() uint8 bEnableDensityScaling : 1;  // 0x05F8, mask 0x01
    float CurrentDensityScaling;  // 0x05FC, not reflected
    UPROPERTY() int32 OcclusionLayerNumNodes;  // 0x0600, size 0x4
    UPROPERTY() FBoxSphereBounds CacheMeshExtendedBounds;  // 0x0604, size 0x1C
    UPROPERTY() bool bDisableCollision;  // 0x0620, size 0x1
    UPROPERTY() int32 InstanceCountToRender;  // 0x0624, size 0x4
    bool : 1 bAutoRebuildTreeOnInstanceChanges;  // 0x0628, not reflected
    bool : 1 bConcurrentChanges;  // 0x0628, not reflected
    bool : 1 bIsAsyncBuilding;  // 0x0628, not reflected
    bool : 1 bIsOutOfDate;  // 0x0628, not reflected
protected:
    FBox AccumulatedNavigationDirtyArea;  // 0x062C, not reflected
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,TSizedDefaultAllocator<32> > > BuildTreeAsyncTasks;  // 0x0648, not reflected
public:
    UFUNCTION(BlueprintCallable) bool RemoveInstances(const TArray<int32>& InstancesToRemove);  // parameters 0x11
};
