// /Game/BP/AI/GOAP/AI/BP_NPC_Ghost_Crocodile_Character.BP_NPC_Ghost_Crocodile_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD70, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ghost_Crocodile_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraShakeSourceComponent* CameraShakeSource;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sandworm_Moving;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_SandMound;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* MoundFX;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Head2;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Head1;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail1;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail3;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Neck;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine4;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Pelvis;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_EyeL;  // 0x0D18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_EyeR;  // 0x0D20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine5;  // 0x0D30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail7;  // 0x0D38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Tail5;  // 0x0D40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Spine3;  // 0x0D48, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsSandSwimming;  // 0x0D50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SandSwimAlpha;  // 0x0D54, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator MoundRotation;  // 0x0D58, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMatineeCameraShake* ActiveShake;  // 0x0D68, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ghost_Crocodile_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) FVector GetAverageTerrainNormal();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
