// /Game/BP/Mounts/BP_Tame_Cat_B.BP_Tame_Cat_B_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xFC4, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Cat_B_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0F50, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSweepingChargeDamage;  // 0x0F58, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChargeAbortSection;  // 0x0F5C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0F64, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> SweepHitActors;  // 0x0F68, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x0FB8, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAlternateAttack();  // parameters 0x1
};
