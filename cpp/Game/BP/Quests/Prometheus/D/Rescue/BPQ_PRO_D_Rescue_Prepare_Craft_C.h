// /Game/BP/Quests/Prometheus/D/Rescue/BPQ_PRO_D_Rescue_Prepare_Craft.BPQ_PRO_D_Rescue_Prepare_Craft_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Rescue_Prepare_Craft_C : public ABPQ_Collect_Item_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
