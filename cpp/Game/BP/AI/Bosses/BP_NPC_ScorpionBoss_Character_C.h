// /Game/BP/AI/Bosses/BP_NPC_ScorpionBoss_Character.BP_NPC_ScorpionBoss_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD1E, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_ScorpionBoss_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTerrainAnchorComponent* TerrainAnchor;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CE8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastAttackSection;  // 0x0CEC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArenaRadius;  // 0x0CF4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaLocationKey;  // 0x0CF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaRadiusKey;  // 0x0D00, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> CurrentState;  // 0x0D08, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsUnderground;  // 0x0D09, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsStingerExposed;  // 0x0D0A, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float CurrentCarapacePercent;  // 0x0D18, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEncounteredPlayers;  // 0x0D1C, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D1D, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanUseStingAttack(bool& WantsToSting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DropCarapace(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_NPC_ScorpionBoss_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnBlendOut_E78D4FEC4EDDE545C7437F8413A0ED65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_E78D4FEC4EDDE545C7437F8413A0ED65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnInterrupted_E78D4FEC4EDDE545C7437F8413A0ED65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_E78D4FEC4EDDE545C7437F8413A0ED65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_E78D4FEC4EDDE545C7437F8413A0ED65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_CurrentCarapacePercent();
    UFUNCTION(BlueprintCallable) void OnRep_HasEncounteredPlayers();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void UpdateUndergroundWidgetVisibility();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
};
