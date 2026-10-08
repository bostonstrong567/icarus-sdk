// /Game/BP/Objects/World/Items/Deployables/AI/BP_Deployable_SpawnBlocker_T4.BP_Deployable_SpawnBlocker_T4_C
// Derives from: ABP_Deployable_SpawnBlocker_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_SpawnBlocker_T4_C : public ABP_Deployable_SpawnBlocker_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SoundWave;  // 0x0758, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CalculateIsDeviceRunning(bool& IsRunning);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_SpawnBlocker_T4(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateSpawnBlockerEffects();
};
