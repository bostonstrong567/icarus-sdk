// /Game/BP/AI/GOAP/AI/BP_NPC_RockGolem_Juvenile_Character.BP_NPC_RockGolem_Juvenile_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD7A, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_RockGolem_Juvenile_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_HeadRicochet;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_RockGolem_Roll;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* RollingAudio;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_RF_Leg;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_RB_Leg;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_LF_Leg;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_LB_Leg;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_RockGolem_Body_Armor;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ArmourPieces;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> CurrentState;  // 0x0D18, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsUnderground;  // 0x0D19, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsStingerExposed;  // 0x0D1A, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0D20, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsRolling;  // 0x0D28, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsRollingKey;  // 0x0D2C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot SkeletonPose;  // 0x0D38, size 0x38
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 ArmorVariation;  // 0x0D70, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArmorModifierUID;  // 0x0D74, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTriggerModifierUpdate;  // 0x0D78, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsArmourValid;  // 0x0D79, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanUseStingAttack(bool& WantsToSting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DropCarapce(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_NPC_RockGolem_Juvenile_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCarcassStats(TArray<FIcarusStatReplicated>& Custom_Stats);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 NPCResistDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintCallable) void OnArmourUpdated(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_ArmorVariation();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentArmourPercentage();
    UFUNCTION(BlueprintCallable) void OnRep_IsRolling();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void UpdateArmorVariation();
    UFUNCTION(BlueprintCallable) void UpdateArmorVisuals();
    UFUNCTION(BlueprintCallable) void UpdateAudioVelocityParam();
    UFUNCTION(BlueprintCallable) void UpdateUndergroundWidgetVisibility();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
};
