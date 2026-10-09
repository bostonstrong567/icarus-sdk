// /Game/BP/Quests/NPC/Norex/BPQ_SQ_Norex_Trade_Sell.BPQ_SQ_Norex_Trade_Sell_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_SQ_Norex_Trade_Sell_C : public ABPQ_Common_Craft_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void PreCheck(AActor* Actor);  // parameters 0x8
};
