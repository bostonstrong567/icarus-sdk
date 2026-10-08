// /Game/BP/Quests/Prometheus/C/Research/BPQ_PRO_C_Research_Refine_Ironwood.BPQ_PRO_C_Research_Refine_Ironwood_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_C_Research_Refine_Ironwood_C : public ABPQ_Common_Craft_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
