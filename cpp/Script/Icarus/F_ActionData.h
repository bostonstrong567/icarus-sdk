// /Script/Icarus.ActionData
// size 0x100, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ActionableComponent.generated.h

USTRUCT()
struct FActionData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UActionableBehaviour> Behaviour;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> TP_ActionMontage;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSuccessAnimSet> TP_SuccessAnimations;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TP_ActionFailMontageVariations;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TP_ActionMissMontageVariations;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> FP_ActionMontage;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSuccessAnimSet> FP_SuccessAnimations;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> FP_ActionFailMontageVariations;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> FP_ActionMissMontageVariations;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BeginStaminaActionNotify;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaitForActionComplete;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ActionCooldown;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> CooldownMultipliers;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredStat;  // 0x00F0, size 0x10
};
