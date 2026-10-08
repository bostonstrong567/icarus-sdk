// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_B/BPQ_GH_IM_B_Deliver_Enzymes.BPQ_GH_IM_B_Deliver_Enzymes_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_B_Deliver_Enzymes_C : public ABPQ_Common_Deliver_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
