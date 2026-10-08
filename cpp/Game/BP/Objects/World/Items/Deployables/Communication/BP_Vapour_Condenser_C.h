// /Game/BP/Objects/World/Items/Deployables/Communication/BP_Vapour_Condenser.BP_Vapour_Condenser_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Vapour_Condenser_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Analyzer_Transmitter_Closed;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_HordeInterface;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_HordeMode_C* BPQC_HordeMode;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ActiveEffects;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UGenericAITargetComponent* GeneratedTargetComponent;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceActive;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Completions;  // 0x0784, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void DeployableTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Vapour_Condenser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCreatureMultiplierFromCompletions(int32 Completions, float& Multiplier);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMultiplierFromCompletions(int32 Completions, float& Multiplier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GrantRewards(FHordeRowHandle Horde, int32 Completions);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnHordeComplete();
    UFUNCTION(BlueprintCallable) void OnRep_DeviceActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateWidgetState();
};
