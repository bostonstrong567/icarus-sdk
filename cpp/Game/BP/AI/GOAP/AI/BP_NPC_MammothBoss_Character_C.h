// /Game/BP/AI/GOAP/AI/BP_NPC_MammothBoss_Character.BP_NPC_MammothBoss_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF1, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_MammothBoss_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk2;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk1;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* StompLoc;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurShort;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFurLong;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CE8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CF0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnActionMontageNotify(FName NotifyName);  // parameters 0x8
};
