// /Game/BP/Objects/World/Items/Deployables/Communication/BP_Mission_Sonic_Disrupter.BP_Mission_Sonic_Disrupter_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Sonic_Disrupter_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* ActiveLight1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Laptop;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Laptop;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* effectsMesh;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* FinalLight;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Effects;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool DeviceActive;  // 0x0768, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEventSwitchOn;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsOn;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequiredSecondsOn;  // 0x077C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishedCharging;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool PlayingFinalEvents;  // 0x0781, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool FinishedFinalEvents;  // 0x0782, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowFinalEvents;  // 0x0783, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LoopDetection;  // 0x0784, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FinalEffectsLength;  // 0x0788, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FinalEffectsStartTime;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFinishedFinalEventsDispatch FinishedFinalEventsDispatch;  // 0x0790, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Pulse_OneShot;  // 0x07A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Pulse_Continuous;  // 0x07A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Pulse_Finished;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* ContinousPulseAudio;  // 0x07B8, size 0x8

    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void DebugFXSequence();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Deployable_Pickup(AActor* Instigator, bool& PickedUp);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EventFoundationDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Sonic_Disrupter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinalEffectsCompletedSFX();
    UFUNCTION(BlueprintCallable) void FinishedFinalEventsDispatch__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFinalEffectsProgress(float& Progress);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void MediumPulseMulticast();
    UFUNCTION(BlueprintCallable) void OnRep_DeviceActive();
    UFUNCTION(BlueprintCallable) void OnRep_FinishedFinalEvents();
    UFUNCTION(BlueprintCallable) void OnRep_PlayingFinalEvents();
    UFUNCTION(BlueprintCallable) void PlayContinousPulseSFX();
    UFUNCTION(BlueprintCallable) void PlayFinalEvents();
    UFUNCTION(BlueprintCallable) void ProcessRequirements();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StopContinuousPulseSFX();
    UFUNCTION(BlueprintCallable) void UpdateContinousPulseSFX();
};
