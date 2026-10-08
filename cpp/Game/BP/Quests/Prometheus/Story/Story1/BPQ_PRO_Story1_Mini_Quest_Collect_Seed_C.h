// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_PRO_Story1_Mini_Quest_Collect_Seed.BPQ_PRO_Story1_Mini_Quest_Collect_Seed_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story1_Mini_Quest_Collect_Seed_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story1_Mini_Quest_Collect_Seed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
