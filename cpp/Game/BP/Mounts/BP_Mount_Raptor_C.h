// /Game/BP/Mounts/BP_Mount_Raptor.BP_Mount_Raptor_C
// Derives from: ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF54, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Raptor_C : public ABP_Mount_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PetTarget;  // 0x0F40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* HandsTarget;  // 0x0F48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CrouchModifierUID;  // 0x0F50, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Mount_Raptor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UAnimMontage* GetMontageForGameplayTag(const FGameplayTag& Tag, FName& Section) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Mounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PerformAlternateAttack();
};
