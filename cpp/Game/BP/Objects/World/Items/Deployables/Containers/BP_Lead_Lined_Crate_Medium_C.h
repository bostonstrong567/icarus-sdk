// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Lead_Lined_Crate_Medium.BP_Lead_Lined_Crate_Medium_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lead_Lined_Crate_Medium_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* ShadowGeo;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion1;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasRadioactiveItems;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 TotalSlotsUsed;  // 0x0774, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 TotalSlots;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0780, size 0x8

    UFUNCTION(BlueprintCallable) void CheckSlotCountUsed(UInventory* Inventory, int32& TotalSlotsUsed, int32& TotalSlots);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_Lead_Lined_Crate_Medium(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintCallable, NetMulticast) void UpdateWidget();
};
