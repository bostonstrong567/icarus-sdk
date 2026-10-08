// /Game/BP/Objects/World/Items/Deployables/WaterPurifier/BP_Water_Purifier_T2.BP_Water_Purifier_T2_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x796, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Purifier_T2_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip06;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip05;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip04;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_ActiveWaterPurifyAudio;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip03;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip02;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_TopFX;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Niagara;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Milliliters;  // 0x0788, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumActorsConsuming;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DividedFlowRate;  // 0x0790, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiredState;  // 0x0794, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FillingEffectsON;  // 0x0795, size 0x1

    UFUNCTION(BlueprintCallable) void ActorsRequiringWater(int32& NumActors);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CheckGeneratorRunning(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Water_Purifier_T2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillContainer();
    UFUNCTION(BlueprintCallable) void FuelUpdate();
    UFUNCTION(BlueprintCallable) void OnGeneratorActiveStateUpdated(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_FillingEffectsON();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void RequiresWaterForFillable(bool& RequiresWater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFillingEffects(bool FillingEffectsOn);  // parameters 0x1
};
