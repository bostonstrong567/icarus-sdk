// /Game/BP/Objects/World/Items/Deployables/Refiner/BP_Crude_Oil_Refiner.BP_Crude_Oil_Refiner_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x77C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Crude_Oil_Refiner_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CrudeOil_Refiner_Smoke;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bFillingEffectsActive;  // 0x0770, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ConversionRate;  // 0x0774, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnergyScale;  // 0x0778, size 0x4

    UFUNCTION(BlueprintCallable) void ActorsRequiringOil(int32& NumActors);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CheckOilConversion(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Crude_Oil_Refiner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillContainer();
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnRep_bFillingEffectsActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetFillingEffects(bool FillingEffectsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TimerCheck();
};
