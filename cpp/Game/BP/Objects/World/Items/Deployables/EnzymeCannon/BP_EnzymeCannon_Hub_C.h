// /Game/BP/Objects/World/Items/Deployables/EnzymeCannon/BP_EnzymeCannon_Hub.BP_EnzymeCannon_Hub_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x890, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_EnzymeCannon_Hub_C : public ABP_Deployable_PowerToggleableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_EnzymeCannon_V2;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Charged;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Activate_Big;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere_VolFog;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Exhaust;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust12;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust11;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust10;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust9;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust8;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust7;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust6;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust5;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust4;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust3;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust2;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Exhaust1;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam4;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam3;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam2;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LightningBeam1;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Sparks;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_Activate;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EnzymeCannon_BuildUp;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_LightningStrike;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioChargeLoop;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_LightningStrike;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_LightningStrike;  // 0x0828, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ThunderSingleStrike;  // 0x0830, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0838, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0840, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle EnzymeCannonUpdateHandle;  // 0x0848, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 CurrentCharge;  // 0x0850, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxCharge;  // 0x0854, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeRate;  // 0x0858, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* AudioStart;  // 0x0860, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TreeRestoreRadius;  // 0x0868, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Strike;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ELightningStrikeTarget> TargetType;  // 0x0878, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StrikeDuration;  // 0x087C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<EEnzymeCannonState> EnzymeCannonState;  // 0x0880, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float CurrentChargeRemainder;  // 0x0884, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_MapSearchArea_Custom_C* MapSearchArea;  // 0x0888, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_EnzymeCannon_Hub(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIsCannonCharged(bool& bCharged);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GrowFogVol();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_DeviceStateChanged(bool On);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayDischargeAudio();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_CurrentCharge();
    UFUNCTION(BlueprintCallable) void OnRep_EnzymeCannonState();
    UFUNCTION(BlueprintCallable) void PlayStrikeSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RestoreTreesBegin();
    UFUNCTION(BlueprintCallable) void RestoreTreesDone();
    UFUNCTION(BlueprintCallable) void StartDischargeEvent();
    UFUNCTION(BlueprintCallable) void StartStormEffects();
    UFUNCTION(BlueprintCallable) void StopDischargeEvent();
    UFUNCTION(BlueprintCallable) void ToggleSparkEffectsLocally();
    UFUNCTION(BlueprintCallable) void UpdateConsoleMaterial();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
