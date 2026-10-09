// /Game/BP/Quests/GreatHunts/Ape/A/BPQ_GH_Ape_A_Biochip_A.BPQ_GH_Ape_A_Biochip_A_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_A_Biochip_A_C : public ABPQ_Common_Deliver_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
