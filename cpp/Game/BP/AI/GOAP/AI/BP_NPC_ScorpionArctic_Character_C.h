// /Game/BP/AI/GOAP/AI/BP_NPC_ScorpionArctic_Character.BP_NPC_ScorpionArctic_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCE8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_ScorpionArctic_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CC8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CD0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastAttackSection;  // 0x0CD4, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEmerged;  // 0x0CDC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle EmergeTimer;  // 0x0CE0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanUseStingAttack(bool& WantsToSting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompleteEmerge();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_ScorpionArctic_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_HasEmerged();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
