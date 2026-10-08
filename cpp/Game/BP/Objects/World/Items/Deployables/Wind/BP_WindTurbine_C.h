// /Game/BP/Objects/World/Items/Deployables/Wind/BP_WindTurbine.BP_WindTurbine_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x761, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WindTurbine_C : public ABP_DeployableBase_C, public IBP_WeatherResourceModifierInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_WindTurbine_Metal_V2;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioTurbine;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionZone;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Powered;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Sheltered;  // 0x0759, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Clear;  // 0x075A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ReducedOutput;  // 0x075B, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 EnergyBoost;  // 0x075C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceToggled;  // 0x0760, size 0x1

    UFUNCTION(BlueprintCallable) void ApplyDamage();
    UFUNCTION(BlueprintCallable) void ApplyWeatherResourceModifierFunction(int32 Percent, FModifierStatesRowHandle Modifier);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void CheckForPower(bool ForceUpdate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForPowerHeartbeat();
    UFUNCTION(BlueprintCallable) void ClearWeatherResourceModifier();
    UFUNCTION() void ExecuteUbergraph_BP_WindTurbine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeatherResourceModifierStrengthAndType(int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier, int32& PowerModifierEffectiveness, int32& WaterModifierEffectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnHighlighted(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_DeviceToggled();
    UFUNCTION(BlueprintCallable) void OnRep_Powered();
    UFUNCTION(BlueprintCallable) void OnRep_ReducedOutput();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ReduceOutput();
    UFUNCTION(BlueprintCallable) void UpdatePoweredEffects();
    UFUNCTION(BlueprintCallable) void UpdateVFX();
};
