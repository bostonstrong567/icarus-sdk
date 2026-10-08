// /Game/BP/Mounts/BP_Mount_Bull.BP_Mount_Bull_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFD4, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Bull_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0F40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0F48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle FertilizeModifier;  // 0x0F4C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSweepingChargeDamage;  // 0x0F64, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChargeAbortSection;  // 0x0F68, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0F70, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> SweepHitActors;  // 0x0F78, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x0FC8, size 0xC

    UFUNCTION() void ExecuteUbergraph_BP_Mount_Bull(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishCharging(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Get_Stance_Transition_Montage(EGOAPCharacterStance NewStance, UAnimMontage*& OutMontage);  // parameters 0x10, named "Get Stance Transition Montage"
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayActionMontage(UAnimMontage* Montage, float PlayRate, FName Section);  // parameters 0x14
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveStaleHitActors();
    UFUNCTION(BlueprintCallable) void StartCharging();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAlternateAttack();  // parameters 0x1
};
