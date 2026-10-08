// /Game/BP/AI/Bosses/BP_NPC_LavaHunter_Character.BP_NPC_LavaHunter_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD50, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_LavaHunter_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public ISpawnBlockerInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Underbelly_Low;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Underbelly_High;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_Eye_R;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTerrainAnchorComponent* TerrainAnchor;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF8, size 0x8
    UPROPERTY() float FlameOffEffectScale_FlameScale_5CEB42A54A5C9F1408E004B7C0FE8CB6;  // 0x0D00, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FlameOffEffectScale__Direction_5CEB42A54A5C9F1408E004B7C0FE8CB6;  // 0x0D04, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FlameOffEffectScale;  // 0x0D08, size 0x8
    UPROPERTY() float FlameOnEffectScale_FlameScale_7243327C4E03A8C319A5A89588EA0612;  // 0x0D10, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FlameOnEffectScale__Direction_7243327C4E03A8C319A5A89588EA0612;  // 0x0D14, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FlameOnEffectScale;  // 0x0D18, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<LavaHunterState> CurrentState;  // 0x0D20, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsDormant;  // 0x0D21, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0D28, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasLaidEgg;  // 0x0D30, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsWounded;  // 0x0D31, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsFlameOn;  // 0x0D32, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMeshMaterial;  // 0x0D38, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D40, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AnchorLocation;  // 0x0D44, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanUseStingAttack(bool& WantsToSting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DelayedShowHideHealthBar();
    UFUNCTION(BlueprintCallable) void DropCarapce(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_NPC_LavaHunter_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION() void FlameOffEffectScale__FinishedFunc();
    UFUNCTION() void FlameOffEffectScale__UpdateFunc();
    UFUNCTION() void FlameOnEffectScale__FinishedFunc();
    UFUNCTION() void FlameOnEffectScale__UpdateFunc();
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_69810BD742AC08DD5ACBFDAB28AE369C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_69810BD742AC08DD5ACBFDAB28AE369C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> FootstepType, TEnumAsByte<ECreatureFootstepDirection> FootstepDirection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnInterrupted_69810BD742AC08DD5ACBFDAB28AE369C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_69810BD742AC08DD5ACBFDAB28AE369C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_69810BD742AC08DD5ACBFDAB28AE369C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_IsDormant();
    UFUNCTION(BlueprintCallable) void OnRep_IsFlameOn();
    UFUNCTION(BlueprintCallable) void PlayFootstepParticleEffects(TEnumAsByte<ECreatureFootstepType> Type, TEnumAsByte<ECreatureFootstepDirection> Direction);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void StartFlameOnFX();
    UFUNCTION(BlueprintCallable) void StopFlameOnFX();
    UFUNCTION(BlueprintCallable) void UpdateUndergroundWidgetVisibility();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
