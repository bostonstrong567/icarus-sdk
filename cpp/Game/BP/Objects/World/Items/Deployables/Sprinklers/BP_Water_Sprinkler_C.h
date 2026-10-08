// /Game/BP/Objects/World/Items/Deployables/Sprinklers/BP_Water_Sprinkler.BP_Water_Sprinkler_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x764, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Sprinkler_C : public ABP_DeployableBase_C, public IBPI_FireAlertable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sprinkler;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioSprinkler;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsWaterConnectionActive;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WaterConeCheckDistance;  // 0x0744, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SprinklerCycleTickExtinguishChance;  // 0x0748, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ExtinguishingCycleActive;  // 0x074C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CheckFlowTimerHandle;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SprinklerCycleTimer;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentSprinklerCycleCount;  // 0x0760, size 0x4

    UFUNCTION(BlueprintCallable) void CheckWaterFlowStarted();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Event_Damaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30, named "Event Damaged"
    UFUNCTION() void ExecuteUbergraph_BP_Water_Sprinkler(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExtinguishFires(float Chance);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InformSprinklerOfFire(FVector FireLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void IsInSprinklerRange(FVector TestWorldLocation, bool& IsInSprinklerRange);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void IsLocationInConeRange(FVector TestWorldLocation, bool& InConeRange);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void IsLocationInSphereRange(FVector TestWorldLocation, bool& InExtraRange);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void NotifyOfFire(FVector FireLocation, bool& WasNotified);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_ExtinguishingCycleActive();
    UFUNCTION(BlueprintCallable) void SetWantsWater(bool WantsFlow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SprinklerCycle();
    UFUNCTION(BlueprintCallable) void StartSprinklerCycle();
    UFUNCTION(BlueprintCallable) void StopSprinklerCycle();
    UFUNCTION(BlueprintCallable) void UpdateWaterConnectionState();
};
