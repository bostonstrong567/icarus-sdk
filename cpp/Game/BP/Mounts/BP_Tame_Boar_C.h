// /Game/BP/Mounts/BP_Tame_Boar.BP_Tame_Boar_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF68, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Boar_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Tusk2;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Tusk1;  // 0x0F58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0F60, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
};
