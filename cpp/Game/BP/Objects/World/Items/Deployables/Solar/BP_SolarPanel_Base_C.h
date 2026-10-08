// /Game/BP/Objects/World/Items/Deployables/Solar/BP_SolarPanel_Base.BP_SolarPanel_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SolarPanel_Base_C : public ABP_DeployableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool CanSeeSun;  // 0x0738, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SunTraceOffset;  // 0x073C, size 0xC

    UFUNCTION(BlueprintCallable) void CheckForSun();
    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION() void ExecuteUbergraph_BP_SolarPanel_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnRep_CanSeeSun();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEnergyFlow();
    UFUNCTION(BlueprintCallable) void UpdatePoweredEffects();
};
