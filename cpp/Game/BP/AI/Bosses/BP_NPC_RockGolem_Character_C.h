// /Game/BP/AI/Bosses/BP_NPC_RockGolem_Character.BP_NPC_RockGolem_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xDE1, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_RockGolem_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IThreatAudioInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_HeadRicochet;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_JumpLerpComponent_C* BP_JumpLerpComponent;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraShakeSourceComponent* CameraShakeSource;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_RockGolem_Roll;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* RollingAudio;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_RF_Leg;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_RB_Leg;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_LF_Leg;  // 0x0D18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_LB_Leg;  // 0x0D20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_Body_Armor;  // 0x0D28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ArmourPieces;  // 0x0D30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D38, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> CurrentState;  // 0x0D40, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0D48, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsRolling;  // 0x0D50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsRollingKey;  // 0x0D54, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot SkeletonPose;  // 0x0D60, size 0x38
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D98, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) TEnumAsByte<RockGolemRockModifierType> CurrentRockModifier;  // 0x0D99, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastModifierStateUID;  // 0x0D9C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_NPCTrailComponent_OverlapModifier_C* TrailComponent;  // 0x0DA0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ShouldMusicStartKey;  // 0x0DA8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShouldMusicStart;  // 0x0DB0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AudioThreatDistanceModifier;  // 0x0DB8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FVector_NetQuantize ProjectileTargetLocation;  // 0x0DC0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProjectileTargetKey;  // 0x0DCC, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* ProjectileTargetActor;  // 0x0DD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArmourValid;  // 0x0DE0, size 0x1

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DropCarapce(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_NPC_RockGolem_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetThreatToPlayer(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void InitialiseTrailParticle(UNiagaraComponent* NewSystem);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 NPCResistDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintCallable) void OnArmourUpdated(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnBlendOut_98659DC5496E7F1E23B4F6946CA538E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_98659DC5496E7F1E23B4F6946CA538E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_98659DC5496E7F1E23B4F6946CA538E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_98659DC5496E7F1E23B4F6946CA538E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_98659DC5496E7F1E23B4F6946CA538E8(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_CurrentArmourPercentage();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentRockModifier();
    UFUNCTION(BlueprintCallable) void OnRep_IsRolling();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void UpdateAudioVelocityParam();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
    UFUNCTION(BlueprintCallable) void UpdateCurrentRockModifier(TEnumAsByte<RockGolemRockModifierType> NewModifier);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateRockArmourModifier();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
