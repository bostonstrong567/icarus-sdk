// /Game/BP/Quests/GreatHunts/Ape/G/BPQ_GH_Ape_G_CollectNotes.BPQ_GH_Ape_G_CollectNotes_C
// Derives from: ABPQ_Collect_Note_List_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_G_CollectNotes_C : public ABPQ_Collect_Note_List_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
