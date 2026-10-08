// /Game/BP/Objects/World/Items/Deployables/AI/BP_Deployable_SpawnBlocker_Scarecrow.BP_Deployable_SpawnBlocker_Scarecrow_C
// Derives from: ABP_Deployable_SpawnBlocker_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_SpawnBlocker_Scarecrow_C : public ABP_Deployable_SpawnBlocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0750, size 0x8

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void AddFuelAudio();
    UFUNCTION(BlueprintCallable) void CheckBlockerActive();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_SpawnBlocker_Scarecrow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION() void ItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnFuelInventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OutOfFuelCheck();
};
