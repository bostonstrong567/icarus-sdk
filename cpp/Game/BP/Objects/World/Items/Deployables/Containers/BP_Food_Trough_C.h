// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Food_Trough.BP_Food_Trough_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Food_Trough_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTameInteractableComponent* TameInteractable;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trough_Seeds_Proxy;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TroughContainsFood;  // 0x0778, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Filled_Mesh;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Empty_Mesh;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle PendingUpdateTimer;  // 0x0790, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Food_Trough(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnInventoryItemsUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_TroughContainsFood();
    UFUNCTION(BlueprintCallable) void UpdateFoodVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateProxyMeshVisibility();
};
