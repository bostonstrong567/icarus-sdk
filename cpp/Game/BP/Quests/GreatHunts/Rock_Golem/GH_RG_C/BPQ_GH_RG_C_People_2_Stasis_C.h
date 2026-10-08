// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C/BPQ_GH_RG_C_People_2_Stasis.BPQ_GH_RG_C_People_2_Stasis_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C_People_2_Stasis_C : public ABPQ_Collect_Item_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
