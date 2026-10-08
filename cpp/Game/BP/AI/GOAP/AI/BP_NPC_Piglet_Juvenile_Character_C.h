// /Game/BP/AI/GOAP/AI/BP_NPC_Piglet_Juvenile_Character.BP_NPC_Piglet_Juvenile_Character_C
// Derives from: ABP_NPC_Juvenile_Domesticated_C > ABP_IcarusNPCGOAPCharacter_Juvenile_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Piglet_Juvenile_Character_C : public ABP_NPC_Juvenile_Domesticated_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
};
