// /Game/BP/Objects/World/Items/Deployables/AI/BP_Deployable_Ape_Attractor.BP_Deployable_Ape_Attractor_C
// Derives from: ABP_Deployable_SpawnBlocker_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_Ape_Attractor_C : public ABP_Deployable_SpawnBlocker_C, public IBP_SpawnTetherInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SoundWave3;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SoundWave2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SoundWave1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* Activatedfmodaudio;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SoundWave;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* RadarMaterial;  // 0x0780, size 0x8

    UFUNCTION(BlueprintCallable) void CanSupportNewTetheredAI(bool& CanSupport);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_Ape_Attractor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateSpawnBlockerEffects();
};
