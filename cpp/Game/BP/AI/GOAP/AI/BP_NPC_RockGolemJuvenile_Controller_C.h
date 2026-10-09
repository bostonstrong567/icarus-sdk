// /Game/BP/AI/GOAP/AI/BP_NPC_RockGolemJuvenile_Controller.BP_NPC_RockGolemJuvenile_Controller_C
// Derives from: ABP_IcarusNPCGOAPController_C > AIcarusNPCGOAPController > AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_NPC_RockGolemJuvenile_Controller_C : public ABP_IcarusNPCGOAPController_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetActorThreat(AActor* PerceivedActor, bool bIgnoreRelationships);  // parameters 0x10
};
