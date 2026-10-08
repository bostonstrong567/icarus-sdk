// /Game/BP/Mounts/BP_Mount_Tusker.BP_Mount_Tusker_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFBC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Tusker_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0F40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSweepingChargeDamage;  // 0x0F50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChargeAbortSection;  // 0x0F54, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0F5C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> SweepHitActors;  // 0x0F60, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x0FB0, size 0xC

    UFUNCTION() void ExecuteUbergraph_BP_Mount_Tusker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishCharging(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayActionMontage(UAnimMontage* Montage, float PlayRate, FName Section);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveStaleHitActors();
    UFUNCTION(BlueprintCallable) void StartCharging();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAlternateAttack();  // parameters 0x1
};
