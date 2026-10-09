// /Game/BP/Quests/Olympus/Desert/Extermination2/BPQ_OLY_Desert_Extermination_2_Deposit_Base.BPQ_OLY_Desert_Extermination_2_Deposit_Base_C
// Derives from: ABPQ_Stockpile_Deposit_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_2_Deposit_Base_C : public ABPQ_Stockpile_Deposit_Item_C
{
public:
    UFUNCTION(BlueprintCallable) AIcarusActor* GetContainerActor();  // parameters 0x8
};
