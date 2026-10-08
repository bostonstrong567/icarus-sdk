// /Game/BP/Objects/World/Items/Deployables/CraftingBenches/BP_Organic_Extractor.BP_Organic_Extractor_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x791, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Organic_Extractor_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioExtractorLoop;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrganicExtractor_Steam;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrganicExtractor_Spray1;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrganicExtractor_Spray;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Natural_Oil_Refiner_Spray;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesInventory;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ProxyMeshesCrafting;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Extraction_CurrentTime;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Extraction_MaxTime;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsPerItem;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TickTimer;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIsCreatingBiofuel;  // 0x0790, size 0x1

    UFUNCTION(BlueprintCallable) void CreatingBiofuelStateUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Organic_Extractor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindOrganicMatterInInventory(bool& Found, UInventory*& Inventory, int32& Slot);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasSpace(bool& HasSpace);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_bIsCreatingBiofuel();
    UFUNCTION(BlueprintCallable) void TickExtractor(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryTick();
    UFUNCTION(BlueprintCallable) void UpdateProductionState(bool NewState);  // parameters 0x1
};
