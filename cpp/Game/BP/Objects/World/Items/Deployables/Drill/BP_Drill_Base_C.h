// /Game/BP/Objects/World/Items/Deployables/Drill/BP_Drill_Base.BP_Drill_Base_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9AA, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Drill_Base_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DrillActiveAudio;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsActive;  // 0x0750, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float CurrentTime;  // 0x0754, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxTime;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Stop;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_GenerateItem;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* OreInventory;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum DrillSpeedStat;  // 0x0780, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEnergyDrill;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum FuelType;  // 0x0798, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float CachedAreaLevelMultiplier;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x07AC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ResourceItem;  // 0x07B8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedHasInventorySpace;  // 0x09A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasInitialised;  // 0x09A9, size 0x1

    UFUNCTION(BlueprintCallable) void ActiveStateUpdated();
    UFUNCTION(BlueprintCallable, BlueprintPure) void AreaLevelMultiplier(float& Multiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Cache_Resource_Item(bool& Success);  // parameters 0x1, named "Cache Resource Item"
    UFUNCTION(BlueprintCallable) void CanStartDrill(bool& CanStart);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Drill_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceInitialise();
    UFUNCTION(BlueprintCallable) void GenerateItem();
    UFUNCTION(BlueprintCallable) void GetAreaLevel();
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAnyRemainingInventorySpaceForOre(bool& HasAnyRemainingSpace);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAnyResourcesRemaining(bool& HasResourcesRemaining);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsFunctional(bool& bFunctional);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayGenerateItemFX();
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintCallable) void OnGainedInventorySpace();
    UFUNCTION(BlueprintCallable) void OnGeneratorActiveStateUpdated(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnInventoryModified(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnOutOfInventorySpace();
    UFUNCTION(BlueprintCallable) void OnOutOfResources();
    UFUNCTION(BlueprintCallable) void OnRep_IsActive();
    UFUNCTION(BlueprintImplementableEvent) void OnRestoreFoundationFromDatabase(AIcarusActor* FoundationFromDatabase);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayGenerateItemSFX();
    UFUNCTION(BlueprintCallable) void RestartDrill();
    UFUNCTION(BlueprintCallable) void SetDrillActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShutdownDrill();
    UFUNCTION(BlueprintCallable) void UpdateMiningRateFromResourceType();
};
