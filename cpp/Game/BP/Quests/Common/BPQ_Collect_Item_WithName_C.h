// /Game/BP/Quests/Common/BPQ_Collect_Item_WithName.BPQ_Collect_Item_WithName_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Collect_Item_WithName_C : public ABPQ_Collect_Item_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetName(FText& Name);  // parameters 0x18
};
