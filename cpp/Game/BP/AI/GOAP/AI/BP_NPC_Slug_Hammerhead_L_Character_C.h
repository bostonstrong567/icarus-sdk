// /Game/BP/AI/GOAP/AI/BP_NPC_Slug_Hammerhead_L_Character.BP_NPC_Slug_Hammerhead_L_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xDA1, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Slug_Hammerhead_L_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn3;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn2;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn1;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* DM_SlugExplodePose;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HammerHead_Splash_2;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HammerHead_Splash_1;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0D00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D08, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle SmallerSlug;  // 0x0D0C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_NPC_Slug_Hammerhead_Character_C*> Slugs;  // 0x0D28, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartHealthPercent;  // 0x0D38, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_SlugManager_C* SlugManager;  // 0x0D40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0D48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ScaledStatsToAdd;  // 0x0D50, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSplit;  // 0x0DA0, size 0x1

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_L_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitSlugManager(ABP_SlugManager_C* Manager);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_7E9C1F7C4B6C0F6D88DA489C1E361E7F(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_DCE737964C96A2E6CE4FCBA14A377B89(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_7E9C1F7C4B6C0F6D88DA489C1E361E7F(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_DCE737964C96A2E6CE4FCBA14A377B89(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_7E9C1F7C4B6C0F6D88DA489C1E361E7F(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_DCE737964C96A2E6CE4FCBA14A377B89(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_7E9C1F7C4B6C0F6D88DA489C1E361E7F(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_DCE737964C96A2E6CE4FCBA14A377B89(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_7E9C1F7C4B6C0F6D88DA489C1E361E7F(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_DCE737964C96A2E6CE4FCBA14A377B89(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_SlugManager();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
};
