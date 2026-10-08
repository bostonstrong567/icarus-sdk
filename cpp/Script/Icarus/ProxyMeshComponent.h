// /Script/Icarus.ProxyMeshComponent
// Derives from: UActorComponent > UObject
// size 0x178, declared in Icarus/Source/Icarus/Objects/ProxyMeshComponent.h

UCLASS(Config=Engine)
class UProxyMeshComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnabled : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideBeginPlayBehaviour : 1;  // 0x00B0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ProxyMeshRootName;  // 0x00B4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<USceneComponent> ProxyMeshComponentClass;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FProxyMeshConditionContainerInventory> ProxyMeshConditionsInventory;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FProxyMeshConditionContainerCrafting> ProxyMeshConditionsCrafting;  // 0x00D8, size 0x10
    UPROPERTY() TArray<USceneComponent*> ProxyMeshCraftingRepOverrides;  // 0x00E8, size 0x10
    UPROPERTY() TArray<FProxyMeshConditionContainerInventory> ProxyMeshConditionsCompact;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FProxyMeshRepState> ProxyMeshRepStates;  // 0x0108, size 0x10
    UPROPERTY(BlueprintReadWrite) FOnProxyMeshVisibilityChanged OnProxyMeshVisibilityChanged;  // 0x0118, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> WarnedUnresolvedComponents;  // 0x0128, private

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void ForceUpdateProxyMeshes();
    UFUNCTION(BlueprintCallable) void OnFuelItemRemoved(UInventory* Inventory, int32 Location, const FItemData& ItemData);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnItemRemoved(UInventory* Inventory, int32 Location, const FItemData& ItemData);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnProcessorItemRemoved(UInventory* Inventory, int32 Location, const FItemData& ItemData);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnProcessorItemUpdated(FProcessingItem ProcessingItem);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnProcessorStateUpdated(bool bProcessorActive);  // parameters 0x1
    UFUNCTION() void OnRep_ProxyMeshRepStates();
};
