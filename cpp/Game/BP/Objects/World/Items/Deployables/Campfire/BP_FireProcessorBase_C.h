// /Game/BP/Objects/World/Items/Deployables/Campfire/BP_FireProcessorBase.BP_FireProcessorBase_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FireProcessorBase_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Fire_Audio;  // 0x0988, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle AuraEffect;  // 0x0990, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* StopAudioEvent;  // 0x09A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FireProcessorBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnGeneratorOutOfFuel();
    UFUNCTION(BlueprintCallable) void UpdateActiveState(bool NewActiveState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAura(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTraits(bool Active);  // parameters 0x1
};
