// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Mission_Incubator.BP_Mission_Incubator_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Incubator_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_Analyzer;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Sandworm_Egg;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0760, size 0x8
    UPROPERTY() float Timeline_0_Rotation_E673773842F7670BA9536A9564D3ADA4;  // 0x0768, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_E673773842F7670BA9536A9564D3ADA4;  // 0x076C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIncubatorActive;  // 0x0778, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bHasEgg;  // 0x0779, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) float CurrentTime;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) float MaxTime;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHatch Hatch;  // 0x0788, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemsStaticRowHandle, FAISetupRowHandle> EggToCreature;  // 0x0798, size 0x50

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Incubator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HatchCreature();
    UFUNCTION(BlueprintCallable) void Hatch__DelegateSignature(AIcarusCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnDeviceConnectionChanged(FIcarusResourcesEnum ResourceType, bool bNewConnected);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnRep_HasEgg();
    UFUNCTION(BlueprintCallable) void OnRep_bIncubatorActive();
    UFUNCTION(BlueprintCallable) void StartScanEffect();
    UFUNCTION(BlueprintCallable) void StopScanEffect();
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateIncubatorState();
};
