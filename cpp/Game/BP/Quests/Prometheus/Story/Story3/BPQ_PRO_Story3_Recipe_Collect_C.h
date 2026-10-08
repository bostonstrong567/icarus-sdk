// /Game/BP/Quests/Prometheus/Story/Story3/BPQ_PRO_Story3_Recipe_Collect.BPQ_PRO_Story3_Recipe_Collect_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4EC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story3_Recipe_Collect_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Account_Flag;  // 0x04D4, size 0x18, named "Account Flag"

    UFUNCTION(BlueprintCallable) void GrantCommunicationFlag();
};
