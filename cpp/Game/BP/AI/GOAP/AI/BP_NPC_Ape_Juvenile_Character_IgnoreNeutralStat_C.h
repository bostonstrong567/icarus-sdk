// /Game/BP/AI/GOAP/AI/BP_NPC_Ape_Juvenile_Character_IgnoreNeutralStat.BP_NPC_Ape_Juvenile_Character_IgnoreNeutralStat_C
// Derives from: ABP_NPC_Ape_Juvenile_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD09, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ape_Juvenile_Character_IgnoreNeutralStat_C : public ABP_NPC_Ape_Juvenile_Character_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FAIRelationshipsRowHandle CheckForStatBasedAIRelationshipChange(const FAIRelationshipsRowHandle& PreviousRelationship);  // parameters 0x30
};
