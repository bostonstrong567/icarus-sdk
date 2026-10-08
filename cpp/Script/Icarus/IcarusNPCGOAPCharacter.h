// /Script/Icarus.IcarusNPCGOAPCharacter
// Derives from: AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xA80, declared in Icarus/Source/Icarus/AI/IcarusNPCGOAPCharacter.h

UCLASS(Config=Game)
class AIcarusNPCGOAPCharacter : public AIcarusNPCCharacter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipCapsuleSizeValidation;  // 0x0918, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x091C, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0934, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EpicCreatureName;  // 0x0950, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftClassPtr<UIcarusGOAPAction>, FActionAnimData> ActionAnimMapping;  // 0x0968, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceUpdateAnimationOnProjectileFired;  // 0x09B8, size 0x1
    UPROPERTY(BlueprintAssignable) FCharacterStanceUpdatedSignature CharacterStanceUpdated;  // 0x09C0, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> NPCChildren;  // 0x09D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* JumpMontage;  // 0x09E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxJumpDistance;  // 0x09E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpArc;  // 0x09EC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) int32 CurrentLevel;  // 0x09F0, size 0x4
    UPROPERTY(BlueprintAssignable) FObstacleJumpStartedSignature OnObstacleJumpStarted;  // 0x09F8, size 0x10
    UPROPERTY(BlueprintAssignable) FObstacleJumpFinishedSignature OnObstacleJumpFinished;  // 0x0A08, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* CurrentTarget;  // 0x0A18, size 0x8
    UPROPERTY(BlueprintAssignable) FCurrentTargetUpdated CurrentTargetUpdated;  // 0x0A20, size 0x10
    UPROPERTY(BlueprintAssignable) FGOAPMovementBlockedSignature GOAPMovementBlocked;  // 0x0A30, size 0x10
    UPROPERTY(BlueprintAssignable) FCreatureLevelUpdated CreatureLevelUpdated;  // 0x0A40, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastDamageCauser;  // 0x0A50, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastDamageInstigator;  // 0x0A58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPCharacterStance CurrentStance;  // 0x0A64, size 0x1
    UPROPERTY() int32 LevelToSet;  // 0x0A68, size 0x4
    UPROPERTY() AActor* LastTarget;  // 0x0A70, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    float DefaultBuoyancy;  // 0x0A60, protected
    float LastForcedAnimUpdateTime;  // 0x0A6C, private

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnCharacterStanceUpdated(EGOAPCharacterStance PreviousStance, EGOAPCharacterStance NewStance);  // parameters 0x2
    UFUNCTION() void OnRep_Level();
    UFUNCTION(BlueprintNativeEvent) bool SetCurrentStance(EGOAPCharacterStance NewStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetHitEventsEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION() void StatContainerUpdated();
    UFUNCTION() void TryForceUpdateAnimation(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool TryJumpOverObstacle();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent) bool UpdateMovementState(EMovementState NewState);  // parameters 0x2
    UFUNCTION() void WorldStatsSet();

    // Virtual functions that start here:
    //   TryJumpOverObstacle_Implementation
};
