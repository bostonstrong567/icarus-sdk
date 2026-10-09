// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2_Outpost_Build_Rain.BPQ_GH_RG_C2_Outpost_Build_Rain_C
// Derives from: ABPQ_Deploy_Count_ItemStatic_C > AQuest > AIcarusActor > AActor > UObject
// size 0x493, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_Outpost_Build_Rain_C : public ABPQ_Deploy_Count_ItemStatic_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
