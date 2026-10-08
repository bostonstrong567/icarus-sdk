// /Game/BP/AI/GOAP/AI/BP_NPC_Crocodile_Character.BP_NPC_Crocodile_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD20, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Crocodile_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Eyes;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Neck1;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine5;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail1;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail2;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail6;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_MouthBot;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_MouthTop;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine4;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail8;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail4;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine1;  // 0x0D18, size 0x8

    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
};
