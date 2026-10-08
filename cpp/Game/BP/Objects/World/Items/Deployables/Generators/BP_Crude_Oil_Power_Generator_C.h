// /Game/BP/Objects/World/Items/Deployables/Generators/BP_Crude_Oil_Power_Generator.BP_Crude_Oil_Power_Generator_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Crude_Oil_Power_Generator_C : public ABP_Deployable_PowerToggleableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_OilPowered_Generator_Steam;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FuelInventory;  // 0x0760, size 0x8

    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION() void ExecuteUbergraph_BP_Crude_Oil_Power_Generator(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnActivateStateChanged(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
};
