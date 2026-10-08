// /Game/BP/Objects/World/Items/Deployables/Resources/BP_Thumper_Deep.BP_Thumper_Deep_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x848, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Thumper_Deep_C : public ABP_DeployableBase_C, public IBP_TooltipWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Thumper_SHADOW;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_WarningLoop;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0758, size 0x8
    UPROPERTY() float Timeline_Pulse_Thickness_81CAB8074CC272B69F0A1CBD5223C14A;  // 0x0760, size 0x4
    UPROPERTY() float Timeline_Pulse_Opacity_81CAB8074CC272B69F0A1CBD5223C14A;  // 0x0764, size 0x4
    UPROPERTY() float Timeline_Pulse_Radius_81CAB8074CC272B69F0A1CBD5223C14A;  // 0x0768, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_Pulse__Direction_81CAB8074CC272B69F0A1CBD5223C14A;  // 0x076C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_Pulse;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ThumperUpdateHandle;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RegenerationRadius;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedEnemies;  // 0x0788, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnemySpawnRadius;  // 0x0798, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupEnum> SpawnPool;  // 0x07A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ResourceCountDifficultyCurve;  // 0x07B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float SpawnDifficultyFactor;  // 0x07B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnedLandSharkCount;  // 0x07BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ElapsedSpawnCount;  // 0x07C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* EventDurationDifficultyCurve;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CooldownWaveCount;  // 0x07D0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsThumperActive;  // 0x07D4, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ReplicatedProgressPercent;  // 0x07D8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ReplicatedMissingResourceCount;  // 0x07DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_MapSearchArea_Custom_C* MapSearchArea;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ReplicatedNodesToRegenCount;  // 0x07E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumSpawnsSinceLastLandShark;  // 0x07EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageSinceLastActivation;  // 0x07F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DeactivationDamageThreshold;  // 0x07F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventCompletionPercent;  // 0x07F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventElapsedTime;  // 0x07FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOrchestrationEventsEnum Event_to_Check;  // 0x0800, size 0x10, named "Event to Check"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DifficultyUpdateTimer;  // 0x0810, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicToSpawn;  // 0x0818, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 NumWormsToSpawn;  // 0x0830, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<AActor*> DeepOreNodes;  // 0x0838, size 0x10

    UFUNCTION(BlueprintCallable) void CacheDeepOreNodes();
    UFUNCTION(BlueprintCallable) void CompleteThumperEvent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Thumper_Deep(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GeneratorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetNewAIToSpawn(FVector AtLocation, FAISetupEnum& AI_ToSpawn, FEpicCreaturesRowHandle& EpicCreature, FTransform& SpawnTransform);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRemainingTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetTooltipRenderLocation(FHitResult InteractableHit, FVector& WorldLocation) const;  // parameters 0x94
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalEventTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsInCaveOrWater(FText& Message, bool& Placeable);  // parameters 0x19
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_DamagedEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ThumperCompleteEffects();
    UFUNCTION(BlueprintCallable) void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnBlendOut_43F079874160ED73C2CD3786239309D4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_43F079874160ED73C2CD3786239309D4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCurtainRaised();
    UFUNCTION(BlueprintCallable) void OnEQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnInterrupted_43F079874160ED73C2CD3786239309D4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_43F079874160ED73C2CD3786239309D4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_43F079874160ED73C2CD3786239309D4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_IsThumperActive();
    UFUNCTION(BlueprintCallable) void OnSpawnedActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnThumperStateUpdated();
    UFUNCTION(BlueprintCallable) void RadiusPulseEffect();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefreshState(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWarningBeepEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupSpawnerDifficulty();
    UFUNCTION(BlueprintCallable) void TickUpdateSpawnerDifficulty();
    UFUNCTION() void Timeline_Pulse__Audio_Pulse__EventFunc();  // named "Timeline_Pulse__Audio Pulse__EventFunc"
    UFUNCTION() void Timeline_Pulse__FinishedFunc();
    UFUNCTION() void Timeline_Pulse__UpdateFunc();
    UFUNCTION(BlueprintCallable) void TrySpawnHostiles();
    UFUNCTION(BlueprintCallable) void UpdateActiveStateNextNetworkTick();
    UFUNCTION(BlueprintCallable) void UpdateThumperProgress();
};
