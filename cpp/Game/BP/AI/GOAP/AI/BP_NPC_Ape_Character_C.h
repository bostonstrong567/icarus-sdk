// /Game/BP/AI/GOAP/AI/BP_NPC_Ape_Character.BP_NPC_Ape_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xEBA, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ape_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IThreatAudioInterface, public IShowHideCharacterProxyMeshInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Regen;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Enraged;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_HeadResistL;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_HeadResistR;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Stomach_Resist;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Fist_R_Resist;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Fist_L_Resist;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* BodyBlocker2;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* BodyBlocker;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* ArmRBlocker;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* ArmLBlocker;  // 0x0D18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* TailBlocker2;  // 0x0D20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* TailBlocker4;  // 0x0D28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_HeadResist;  // 0x0D30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_EyeR;  // 0x0D38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_EyeL;  // 0x0D40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_DateHole;  // 0x0D48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Throat;  // 0x0D50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_JumpLerpComponent_C* BP_JumpLerpComponent;  // 0x0D58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* LogMesh;  // 0x0D60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockMesh;  // 0x0D68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* TreeColliderSphere;  // 0x0D70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0D78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0D80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0D88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0D90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0DA0, size 0x8
    UPROPERTY() float TimelineRegenFX_Regen_056C3E8B48E14AFBB7564ABDF27440E8;  // 0x0DA8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> TimelineRegenFX__Direction_056C3E8B48E14AFBB7564ABDF27440E8;  // 0x0DAC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* TimelineRegenFX;  // 0x0DB0, size 0x8
    UPROPERTY() float Enrage_EnrageActivate_15F76CBA40B85F0AF4C56DB7EE806D5D;  // 0x0DB8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Enrage__Direction_15F76CBA40B85F0AF4C56DB7EE806D5D;  // 0x0DBC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Enrage;  // 0x0DC0, size 0x8
    UPROPERTY() float LogLerp_NewTrack_0_5289F6C14A5E89FAA6FBE3B5AA84F543;  // 0x0DC8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> LogLerp__Direction_5289F6C14A5E89FAA6FBE3B5AA84F543;  // 0x0DCC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* LogLerp;  // 0x0DD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0DD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttackTypeStateKey;  // 0x0DDC, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsCarryingLog;  // 0x0DE4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsCarryingLogKey;  // 0x0DE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ClosestLogKey;  // 0x0DF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LogTransform;  // 0x0E00, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UFMODEvent>> HarvestAudio;  // 0x0E30, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsHangingInTree;  // 0x0E40, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsInTreeKey;  // 0x0E44, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BranchBreakAudio;  // 0x0E50, size 0x28
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsOnTrunk;  // 0x0E78, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsOnTrunkKey;  // 0x0E7C, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShouldMusicStart;  // 0x0E84, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ShouldMusicStartKey;  // 0x0E88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AudioThreatDistanceModifier;  // 0x0E90, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* ApeDynamicMaterial;  // 0x0E98, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* LeftHandNS;  // 0x0EA0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* RightHandNS;  // 0x0EA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* Trail_System_Template;  // 0x0EB0, size 0x8, named "Trail System Template"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enraged;  // 0x0EB8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0EB9, size 0x1

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION() void BndEvt__BP_NPC_Ape_Character_CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION() void BndEvt__BP_NPC_Ape_Character_TreeColiderSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void Enrage__FinishedFunc();
    UFUNCTION() void Enrage__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ape_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FallAnimEnded(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishLogLerp();
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetThreatToPlayer(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void IsDeadApeOnGround(bool& OnGround, FVector& GroundLoc, float& FallRate);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION() void LogLerp__FinishedFunc();
    UFUNCTION() void LogLerp__UpdateFunc();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PlayLogBreakAudio();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_RegEffects(bool Enable);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_ShowRockMesh(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_StartEnrageEffects();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_StopEnrageEffects();
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 NPCResistDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintCallable) void OnDeaded(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnLoaded_2FD46EBD40421ADB9685BCB94EE2189C(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_9DC183FF45BFB632856AA293329AE988(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_IsCarryingLog();
    UFUNCTION(BlueprintCallable) void OnRep_IsFlying();
    UFUNCTION(BlueprintCallable) void OnRep_IsHangingInTree();
    UFUNCTION(BlueprintCallable) void OnRep_IsOnTrunk();
    UFUNCTION(BlueprintCallable) void OnRep_ShouldMusicStart();
    UFUNCTION(BlueprintCallable) void PlayDeathMontageAndCleanUp();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowHideProxyMesh(bool bShow, int32 MeshIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowLogMesh(bool Show, bool ShowDestroy);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShowRockMesh(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowThrowLogMesh(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartLogLerp();
    UFUNCTION() void TimelineRegenFX__FinishedFunc();
    UFUNCTION() void TimelineRegenFX__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
    UFUNCTION(BlueprintCallable) void UpdateLogLerp(float Alpha);  // parameters 0x4
};
