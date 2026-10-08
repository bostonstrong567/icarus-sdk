// /Game/BP/AI/Bosses/BP_FactionBoss_SandWorm.BP_FactionBoss_SandWorm_C
// Derives from: ABP_FactionBoss_Base_C > AIcarusPawn > APawn > AActor > UObject
// size 0x65A, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_FactionBoss_SandWorm_C : public ABP_FactionBoss_Base_C, public IThreatAudioInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CritArea_CenterMouth;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CritArea_Mouth;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* CollisionActor;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sand_Idle;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTerrainAnchorComponent* TerrainAnchor;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_SandMould;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraShakeSourceComponent* CameraShakeSource;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DamageOrigin;  // 0x0500, size 0x8
    UPROPERTY() float Hide_Sand_Mound_Timeline_Mound_Offset_F55D28C74E446EC6879028B31F6064D7;  // 0x0508, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Hide_Sand_Mound_Timeline__Direction_F55D28C74E446EC6879028B31F6064D7;  // 0x050C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Hide_Sand_Mound_Timeline;  // 0x0510, size 0x8, named "Hide Sand Mound Timeline"
    UPROPERTY() float Inverse_Sand_Mound_Timeline_Morph_Inverse_E74CB6DA4DF637FD6DE13093B965F1C7;  // 0x0518, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Inverse_Sand_Mound_Timeline__Direction_E74CB6DA4DF637FD6DE13093B965F1C7;  // 0x051C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Inverse_Sand_Mound_Timeline;  // 0x0520, size 0x8, named "Inverse Sand Mound Timeline"
    UPROPERTY() float Sand_Mound_Timeline_Rumble_Speed_8BD2BFB64651EAB846C8208F68127CF8;  // 0x0528, size 0x4
    UPROPERTY() float Sand_Mound_Timeline_Morph_Value_8BD2BFB64651EAB846C8208F68127CF8;  // 0x052C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Sand_Mound_Timeline__Direction_8BD2BFB64651EAB846C8208F68127CF8;  // 0x0530, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Sand_Mound_Timeline;  // 0x0538, size 0x8, named "Sand Mound Timeline"
    UPROPERTY() float SecondaryEmerge_EmergeFXScale_30824AEA4664763349A51F86512F7C6F;  // 0x0540, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> SecondaryEmerge__Direction_30824AEA4664763349A51F86512F7C6F;  // 0x0544, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* SecondaryEmerge;  // 0x0548, size 0x8
    UPROPERTY() float FirstEmerge_EmergeFXScale_D87A7F1B48B4C975148696B25CC5EA43;  // 0x0550, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FirstEmerge__Direction_D87A7F1B48B4C975148696B25CC5EA43;  // 0x0554, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FirstEmerge;  // 0x0558, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<SandWormState> CurrentState;  // 0x0560, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentStateBlackboardKey;  // 0x0564, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MusicOverrideThreatThreshold;  // 0x056C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BaseAudioThreat;  // 0x0570, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* AudioThreatDistanceModifier;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AudioDeathDelay;  // 0x0580, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeOfDeath;  // 0x0584, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_FirstPreEmerge;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SecondaryPreEmerge;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeadBone;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageRadiusAroundHead;  // 0x05A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPositionHistory HeadBonePositionHistory;  // 0x05A8, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeadBoneVelocity;  // 0x05D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SandWormState> LastFrameState;  // 0x05DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Sand_DynamicMaterial;  // 0x05E0, size 0x8, named "Sand DynamicMaterial"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HiddenMoundOffset;  // 0x05E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator InitialRotation;  // 0x05F4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUpsideDown;  // 0x0600, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* DeathMontage;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackVelocityLimit;  // 0x0610, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDamagedRetreat DamagedRetreat;  // 0x0618, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AffectsNavigationOnDeath;  // 0x0628, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0630, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnCollisionActor;  // 0x0638, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> CollisionActorClass;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayHitReactOnCrit;  // 0x0648, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_AIAlert_C* BossProjectionComponent;  // 0x0650, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0658, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScaleDropOnCooldown;  // 0x0659, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanHitDamageTarget(AActor* TargetActor, FHitResult InHit);  // parameters 0x91
    UFUNCTION(BlueprintCallable) void DamagedRetreat__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DropScales(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_FactionBoss_SandWorm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeOutComponents(TArray<UPrimitiveComponent*>& ComponentList);  // parameters 0x10
    UFUNCTION() void FirstEmerge__FinishedFunc();
    UFUNCTION() void FirstEmerge__PlayEmergeFX__EventFunc();
    UFUNCTION() void FirstEmerge__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetThreatToPlayer(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0xC
    UFUNCTION() void Hide_Sand_Mound_Timeline__FinishedFunc();  // named "Hide Sand Mound Timeline__FinishedFunc"
    UFUNCTION() void Hide_Sand_Mound_Timeline__UpdateFunc();  // named "Hide Sand Mound Timeline__UpdateFunc"
    UFUNCTION(BlueprintCallable) void InitialiseStatsAndTags();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION() void Inverse_Sand_Mound_Timeline__FinishedFunc();  // named "Inverse Sand Mound Timeline__FinishedFunc"
    UFUNCTION() void Inverse_Sand_Mound_Timeline__UpdateFunc();  // named "Inverse Sand Mound Timeline__UpdateFunc"
    UFUNCTION(BlueprintCallable) void LowerSandMound();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_SetActorLocation(FVector NewLocation);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBossDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnCurrentStateUpdated();
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnRep_CurrentState();
    UFUNCTION(BlueprintCallable) void PlayPreEmergeAudio(bool IsFirstEmerge);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void PlayPreEmergeEffects(bool IsFirstEmerge, FVector EmergeLocation);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RaiseSandMound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void Sand_Mound_Timeline__FinishedFunc();  // named "Sand Mound Timeline__FinishedFunc"
    UFUNCTION() void Sand_Mound_Timeline__UpdateFunc();  // named "Sand Mound Timeline__UpdateFunc"
    UFUNCTION(BlueprintCallable) void ScaleStatForPlayerCount(FStatsEnum Stat, int32 UnscaledValue, int32 PlayerCount, int32& ScaledValue);  // parameters 0x1C
    UFUNCTION() void SecondaryEmerge__FinishedFunc();
    UFUNCTION() void SecondaryEmerge__PlayEmergeFX__EventFunc();
    UFUNCTION() void SecondaryEmerge__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateReplicatedBlackboardValues();
};
