// /Game/BP/Quests/NPC/Farmer/BPQ_SQ_Farmer_Setup_Sell_Trade.BPQ_SQ_Farmer_Setup_Sell_Trade_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_SQ_Farmer_Setup_Sell_Trade_C : public ABPQ_Common_Craft_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void DeviceCheck(AActor* Device, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
