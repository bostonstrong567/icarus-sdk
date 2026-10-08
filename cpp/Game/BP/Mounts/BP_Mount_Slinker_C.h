// /Game/BP/Mounts/BP_Mount_Slinker.BP_Mount_Slinker_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF40, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Slinker_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F38, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UAnimMontage* GetMontageForGameplayTag(const FGameplayTag& Tag, FName& Section) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnAttackNotify(UAnimMontage* Montage, FName NotifyName);  // parameters 0x10
};
