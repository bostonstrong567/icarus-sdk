// /Game/BP/AI/GOAP/AI/BP_NPC_Slug_Controller.BP_NPC_Slug_Controller_C
// Derives from: ABP_NPC_Generic_Controller_C > ABP_IcarusNPCGOAPController_C > AIcarusNPCGOAPController > AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_NPC_Slug_Controller_C : public ABP_NPC_Generic_Controller_C
{
public:
    UFUNCTION(BlueprintCallable) void GetAdditionalTargetThreatModifier(AActor* PerceivedTarget, float& AdditionalThreatPlusPercent);  // parameters 0xC
};
