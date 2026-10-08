// /Game/BP/AI/GOAP/AI/BP_NPC_Slug_Hammerhead_S_Character.BP_NPC_Slug_Hammerhead_S_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFAC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Slug_Hammerhead_S_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cocoon;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CF0, size 0x8
    UPROPERTY() float Timeline_0_CocoonForm_3A1A548A4FAE628BEF74B7BF2E5E26E9;  // 0x0CF8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_3A1A548A4FAE628BEF74B7BF2E5E26E9;  // 0x0CFC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0D00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D08, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle LootRewards;  // 0x0D0C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Loot_0;  // 0x0D28, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ModifiedItem;  // 0x0D38, size 0x1F0
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsFinalSlug;  // 0x0F28, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OldActiveState;  // 0x0F29, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0F2C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ScaledStatsToAdd;  // 0x0F30, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CocoonTime;  // 0x0F80, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_SlugManager_C* SlugManager;  // 0x0F88, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSlugDeath SlugDeath;  // 0x0F90, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCharacterState* OtherActorState;  // 0x0FA0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagePercent;  // 0x0FA8, size 0x4

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CocoonTimeout();
    UFUNCTION(BlueprintCallable) void Event_Set_Cocoon_State(bool Active);  // parameters 0x1, named "Event Set Cocoon State"
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_S_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateSlugRewards(AIcarusPlayerCharacter* PlayerInstigator);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBlendOut_027C5F424C4CE6600C103087547D20E7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_1DFD81434DC93AC23F9660BBC7888683(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_D7575411429F2D879ADFEAA43CB880D1(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_027C5F424C4CE6600C103087547D20E7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_1DFD81434DC93AC23F9660BBC7888683(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_D7575411429F2D879ADFEAA43CB880D1(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_027C5F424C4CE6600C103087547D20E7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_1DFD81434DC93AC23F9660BBC7888683(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_D7575411429F2D879ADFEAA43CB880D1(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_027C5F424C4CE6600C103087547D20E7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_1DFD81434DC93AC23F9660BBC7888683(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_D7575411429F2D879ADFEAA43CB880D1(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_027C5F424C4CE6600C103087547D20E7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_1DFD81434DC93AC23F9660BBC7888683(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_D7575411429F2D879ADFEAA43CB880D1(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_SlugManager();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetArmorPercent(int32 Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSlugSpawnHP(AActor* Slug, bool DamageSlug);  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void SetSlugVisualsActive(bool bNewVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SlugDeath__DelegateSignature(AActor* Slug);  // parameters 0x8
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateCocoonState(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
};
