// /Game/BP/Quests/Elysium/Story/Story5/BPQ_ELY_Story_5_Mo_Collect.BPQ_ELY_Story_5_Mo_Collect_C
// Derives from: ABPQ_Collect_Note_List_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_5_Mo_Collect_C : public ABPQ_Collect_Note_List_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
