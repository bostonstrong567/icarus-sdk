// /Game/BP/AI/GOAP/AI/BP_NPC_Horse_Juvenile_Character.BP_NPC_Horse_Juvenile_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_Juvenile_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Horse_Juvenile_Character_C : public ABP_IcarusNPCGOAPCharacter_Juvenile_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ViewTargetActor_0;  // 0x0CE8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetCurrentAnimationTarget_0() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPointWithinFOV_0(FVector TargetLocation, float DotLimit);  // parameters 0x11
};
