// /Game/BP/Objects/World/Items/Deployables/OxiteDissolver/BP_BasicOxiteDissolver.BP_BasicOxiteDissolver_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BasicOxiteDissolver_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Balloon;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Active_Audio;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresUpdate;  // 0x0748, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsToTransfer;  // 0x074C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* GeneralInventory;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float FillScale;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StoredUnits;  // 0x075C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumStoredUnits;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ConsumeOxygenSound;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ActiveSound;  // 0x0770, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Deployable_Pickup(AActor* Instigator, bool& PickedUp);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_BasicOxiteDissolver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillableUnitsUpdated();
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Leak();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_OnConsumeOxygen(AIcarusPlayerCharacter* Instigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_FillScale();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Update_FmodParameters();
};
