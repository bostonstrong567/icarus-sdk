// /Game/BP/AI/GOAP/AI/BP_NPC_LavaKomodo_Character.BP_NPC_LavaKomodo_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCC0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_LavaKomodo_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CB8, size 0x8

    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
};
