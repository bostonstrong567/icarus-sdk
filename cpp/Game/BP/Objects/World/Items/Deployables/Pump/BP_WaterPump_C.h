// /Game/BP/Objects/World/Items/Deployables/Pump/BP_WaterPump.BP_WaterPump_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WaterPump_C : public ABP_Deployable_PowerToggleableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_WaterPump;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0748, size 0x8

    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION() void ExecuteUbergraph_BP_WaterPump(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void UpdateRunningEffects(bool Running);  // parameters 0x1
};
