// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_B/BPQ_GH_RG_B_Area_Cave2_Salvage_Cart.BPQ_GH_RG_B_Area_Cave2_Salvage_Cart_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_B_Area_Cave2_Salvage_Cart_C : public ABPQ_Common_Deliver_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
