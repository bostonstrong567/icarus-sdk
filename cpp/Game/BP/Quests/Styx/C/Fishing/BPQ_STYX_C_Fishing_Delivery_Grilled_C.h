// /Game/BP/Quests/Styx/C/Fishing/BPQ_STYX_C_Fishing_Delivery_Grilled.BPQ_STYX_C_Fishing_Delivery_Grilled_C
// Derives from: ABPQ_Stockpile_Deposit_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_C_Fishing_Delivery_Grilled_C : public ABPQ_Stockpile_Deposit_Item_C
{
public:
    UFUNCTION(BlueprintCallable) AIcarusActor* GetContainerActor();  // parameters 0x8
};
