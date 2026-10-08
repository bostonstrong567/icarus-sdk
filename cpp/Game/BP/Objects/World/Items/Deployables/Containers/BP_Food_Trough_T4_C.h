// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Food_Trough_T4.BP_Food_Trough_T4_C
// Derives from: ABP_Food_Trough_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Food_Trough_T4_C : public ABP_Food_Trough_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioFoodTroughActive;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Extraction_CurrentTime;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Extraction_MaxTime;  // 0x07AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle CreatedItem;  // 0x07B0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bProducingFood;  // 0x07C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemToAdd;  // 0x07D0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TickTimer;  // 0x09C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Food_Trough_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindFoodInInventory(bool& Found, UInventory*& Inventory, int32& Slot);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GenerateItem(FItemTemplateRowHandle RowHandle, FInventoryIDEnum InventoryID);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasSpace(bool& HasSpace);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_bProducingFood();
    UFUNCTION(BlueprintCallable) void TickExtractor(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryTick();
    UFUNCTION(BlueprintCallable) void UpdateProductionState(bool NewState);  // parameters 0x1
};
