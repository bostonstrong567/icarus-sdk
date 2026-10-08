// /Game/BP/Objects/World/Items/Deployables/Generators/BP_WaterWheel_Generator.BP_WaterWheel_Generator_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WaterWheel_Generator_C : public ABP_Deployable_PowerToggleableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_GEN_WaterWheel_v2;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WaterDropping03;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WaterDropping02;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WaterMoving;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* GeneralInventory;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool Is_Active;  // 0x0784, size 0x1, named "Is Active"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AddItemTimer;  // 0x0788, size 0x8

    UFUNCTION(BlueprintCallable) void AddItem();
    UFUNCTION(BlueprintCallable) void AddItems();
    UFUNCTION(BlueprintCallable) void CalculateIsDeviceRunning(bool& IsRunning);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForActivation();
    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_WaterWheel_Generator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClogged();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnInventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateAddItemTimerState(bool TimerActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool bNewActive);  // parameters 0x1
};
