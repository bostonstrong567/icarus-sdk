// /Game/BP/AI/GOAP/AI/BP_NPC_Slug_Hammerhead_Character.BP_NPC_Slug_Hammerhead_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xDBC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Slug_Hammerhead_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cocoon;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn3;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn2;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawn1;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* DM_SlugExplodePose;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_NPCTrailComponent_OverlapModifier_C* BP_NPCTrailComponent_Slug;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CF8, size 0x8
    UPROPERTY() float Timeline_0_CocoonForm_8888DFFE40F1C3D852C4DA8AA78EDDE0;  // 0x0D00, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_8888DFFE40F1C3D852C4DA8AA78EDDE0;  // 0x0D04, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0D08, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle SmallerSlug;  // 0x0D10, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_NPC_Slug_Hammerhead_S_Character_C*> Slugs;  // 0x0D28, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartHealthPercent;  // 0x0D38, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OldActiveState;  // 0x0D3C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0D40, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ScaledStatsToAdd;  // 0x0D48, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CocoonTime;  // 0x0D98, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_SlugManager_C* Slug_Manager;  // 0x0DA0, size 0x8, named "Slug Manager"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSplit;  // 0x0DA8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCharacterState* OtherActorState;  // 0x0DB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagePercent;  // 0x0DB8, size 0x4

    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CocoonTimeout();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Event_Set_Cocoon_State(bool Active);  // parameters 0x1, named "Event Set Cocoon State"
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Slug_Hammerhead_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_01CCC6BA44B3524B807D58A9F8162B11(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_F3F32530413BA8F7542F50B5A9910F7A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_01CCC6BA44B3524B807D58A9F8162B11(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_F3F32530413BA8F7542F50B5A9910F7A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_01CCC6BA44B3524B807D58A9F8162B11(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_F3F32530413BA8F7542F50B5A9910F7A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_01CCC6BA44B3524B807D58A9F8162B11(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_F3F32530413BA8F7542F50B5A9910F7A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_01CCC6BA44B3524B807D58A9F8162B11(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_F3F32530413BA8F7542F50B5A9910F7A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_Slug_Manager();  // named "OnRep_Slug Manager"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetArmorPercent(int32 Percent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSlugSpawnHP(AActor* Slug, bool DamageSlug);  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void SetVisualsCocoonActive(bool bNewVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateCocoonState(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
};
