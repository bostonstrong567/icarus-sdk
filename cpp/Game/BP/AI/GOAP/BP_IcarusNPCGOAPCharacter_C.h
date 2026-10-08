// /Game/BP/AI/GOAP/BP_IcarusNPCGOAPCharacter.BP_IcarusNPCGOAPCharacter_C
// Derives from: AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCB4, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_IcarusNPCGOAPCharacter_C : public AIcarusNPCGOAPCharacter, public IICriticalHitInterface_C, public ICriticalHitReceiver, public IBP_CreatureAudio_AnimNotify_Interface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_AI_DPSTest_C* BP_AI_DPSTest;  // 0x0A88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Head;  // 0x0A90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0A98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* HeadBlocker;  // 0x0AA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AI;  // 0x0AA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* ClothAffector;  // 0x0AB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0AB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextCreatureComponent* AudioContext;  // 0x0AC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionCharacterComponent* AudioOcclusionCharacter;  // 0x0AC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_Actor_C* Flammable;  // 0x0AD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAIVocalisationComponent* AIVocalisation;  // 0x0AD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GroundSurfaceChecker_C* SurfaceChecker;  // 0x0AE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CreatureAudioComponent_C* CreatureAudio;  // 0x0AE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0AF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_SwimmingComponent_C* BP_SwimmingComponent;  // 0x0AF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* PredictionSpline;  // 0x0B00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* PredictionBox;  // 0x0B08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0B10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* GOAP_Debugger;  // 0x0B18, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UAnimMontage>> DeathAnimations;  // 0x0B20, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* CachedController;  // 0x0B30, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* CurrentTarget_0;  // 0x0B38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ReplicateVarsTimer;  // 0x0B40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugWidgetSetup;  // 0x0B48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> CurrentPath;  // 0x0B50, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector MeshLocation;  // 0x0B60, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator MeshRotation;  // 0x0B6C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeathVelocity_0;  // 0x0B78, size 0xC
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCheckAIDistance CheckAIDistance;  // 0x0B88, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStealthAttackType WasStealthDamage;  // 0x0B98, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnActionNotify OnActionNotify;  // 0x0BA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0BB0, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) EAIAudioState CurrentAudioState;  // 0x0BBC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TalentHighlightUpdateTick;  // 0x0BC0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastJumpTime;  // 0x0BC8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RetryJumpTimer;  // 0x0BD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStealthAttackType LastHitStealthState;  // 0x0BD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldDestroyIfStuckOnSpawn;  // 0x0BD9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReplicatedBlackboardVarsUpdateTime;  // 0x0BDC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeadSocket;  // 0x0BE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugJumpTrace;  // 0x0BE8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GenerateAimAssistTargetComponent;  // 0x0BE9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentTargetKey;  // 0x0BEC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LookAtNearbyPerceivedTargets;  // 0x0BF4, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* LookAtTargetActor;  // 0x0BF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyLookAtDotLimit;  // 0x0C00, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyLookAtDotLimit_CurrentTarget;  // 0x0C04, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideAimAssistCollisionRadius;  // 0x0C08, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldRagdollOnDeath;  // 0x0C0C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 ExoticInfusedCreatureType;  // 0x0C10, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* TempMesh;  // 0x0C18, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDamageType* LastDamageType;  // 0x0C20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRagdollCollision RagdollCollision;  // 0x0C28, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FActorDeath ActorDeath;  // 0x0C38, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FirstHit;  // 0x0C48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> Custom_Stats;  // 0x0C50, size 0x10, named "Custom Stats"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldReplaceWithCorpseOnSettle;  // 0x0C60, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialRelativeMeshLocation;  // 0x0C64, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreSettleMeshLocation;  // 0x0C70, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LocalRagdollTransform;  // 0x0C80, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextJumpDelay;  // 0x0CB0, size 0x4

    UFUNCTION(BlueprintCallable) void AIPredictionUpdate();
    UFUNCTION(BlueprintCallable) void ActorDeath__DelegateSignature(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ApplyExoticInfusedFX();
    UFUNCTION() void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckAIDistance__DelegateSignature(ABP_IcarusNPCGOAPCharacter_C* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckNearbyPlayers();
    UFUNCTION(BlueprintCallable) void CleanupController();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Do_Multicast_ActorDeath();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusNPCGOAPCharacter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNewLookAtTarget();
    UFUNCTION(BlueprintCallable) void GatherIntersections(AActor* Projectile, bool Debug, bool& Return, TArray<FCHCollisionStruct>& Intersections);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GatherIntersectionss(AActor* Actor, TArray<FCHCollisionStruct>& HitIntersections);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Get_Stance_Transition_Montage(EGOAPCharacterStance NewStance, UAnimMontage*& OutMontage);  // parameters 0x10, named "Get Stance Transition Montage"
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetCHBounds(bool& Return, UBoxComponent*& Box);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCarcassStats(TArray<FIcarusStatReplicated>& Custom_Stats);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTargetHealth(bool& Return, float& Health);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideFromShelterCapture();
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_MontageJumpToSection(FName Section, UAnimMontage* Montage);  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnHurt();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayGOAPActionMontage(FGOAPActionsRowHandle Action, FName Section, bool ClientsOnly);  // parameters 0x21
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayMontage(TSoftObjectPtr<UAnimMontage> Montage, FName Section, bool ClientsOnly);  // parameters 0x31
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayVocalisation(EAIVocalisationType VocalisationType);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_StopMontage(UAnimMontage* Montage, float InBlendOutTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnActionMontageNotify(FName NotifyName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnActionNotify__DelegateSignature(UAnimMontage* Montage, FName NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBlendOut_2C05199F475BC59402F98AA760E297CB(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_681AD0DA40563215093FAFA52CDA83A4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_ABA9BF27428CDA5A8670D3AC87FC6CE2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCharacterSlidingUpdated();
    UFUNCTION(BlueprintImplementableEvent) void OnCharacterStanceUpdated(EGOAPCharacterStance PreviousStance, EGOAPCharacterStance NewStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnCompleted_2C05199F475BC59402F98AA760E297CB(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_681AD0DA40563215093FAFA52CDA83A4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_ABA9BF27428CDA5A8670D3AC87FC6CE2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> FootstepType, TEnumAsByte<ECreatureFootstepDirection> FootstepDirection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnGOAPActionSet(UIcarusGOAPAction* Action);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInterrupted_2C05199F475BC59402F98AA760E297CB(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_681AD0DA40563215093FAFA52CDA83A4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_ABA9BF27428CDA5A8670D3AC87FC6CE2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_3553718246F29B8ED504B3939080E771(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_46D0D8B742825800C0F3B8B239D00770(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_A0E450DD46F0C70ADE8CBDA3482F0581(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_2C05199F475BC59402F98AA760E297CB(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_681AD0DA40563215093FAFA52CDA83A4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_ABA9BF27428CDA5A8670D3AC87FC6CE2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_2C05199F475BC59402F98AA760E297CB(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_681AD0DA40563215093FAFA52CDA83A4(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_ABA9BF27428CDA5A8670D3AC87FC6CE2(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRagdollSettled();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentAudioState();
    UFUNCTION(BlueprintCallable) void OnRep_ExoticInfusedCreatureType();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void OnVocalisationAnimNotify(EAIVocalisationType VocalisationType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PredictMovement(float Time, bool& Return);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void RagdollCollision__DelegateSignature(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void ReattachProjectilesToCorpse(AActor* CorpseActor);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void ResetPrediction(bool& Return);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetRagdollEnabled(bool bShouldRagdoll);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnHitEffects(FTransform SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void SpawnLootBag(FTransform AtTransform, TSubclassOf<AIcarusActor> LootBagClassOverride);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryJumpOverObstacle();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAudioState(EAIAudioState NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintImplementableEvent) bool UpdateMovementState(EMovementState NewState);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateRagdolledMeshTransform();
    UFUNCTION(BlueprintCallable) void UpdateTalentHighlight();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void ValidateSkeleton();
};
