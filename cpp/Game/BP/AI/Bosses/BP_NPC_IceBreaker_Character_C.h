// /Game/BP/AI/Bosses/BP_NPC_IceBreaker_Character.BP_NPC_IceBreaker_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD18, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_IceBreaker_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AccoladeTraceSocket;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CD0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastAttackSection;  // 0x0CDC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArenaRadius;  // 0x0CE4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaLocationKey;  // 0x0CE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ArenaRadiusKey;  // 0x0CF0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ScorpionBossState> CurrentState;  // 0x0CF8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsUnderground;  // 0x0CF9, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsStingerExposed;  // 0x0CFA, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* NavigationDirtier;  // 0x0D00, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float CurrentCarapacePercent;  // 0x0D08, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AccoladeTimer;  // 0x0D10, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanUseStingAttack(bool& WantsToSting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DropCarapce(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_NPC_IceBreaker_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetSightPerceptionOrigin(FVector& OutLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentCarapacePercent();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void UpdateAccolade();
    UFUNCTION(BlueprintCallable) void UpdateUndergroundWidgetVisibility();
    UFUNCTION(BlueprintImplementableEvent) void UpdateVisibilityBasedAnimTickOption();
};
