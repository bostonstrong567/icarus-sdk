// /Game/BP/Objects/World/Items/Deployables/Generators/BP_Uranium_Generator.BP_Uranium_Generator_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Uranium_Generator_C : public ABP_Deployable_PowerToggleableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OrganicExtractor_Steam;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke1;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CrudeOil_Refiner_FanSmoke;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x0780, size 0x8

    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Uranium_Generator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnActivateStateChanged(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
