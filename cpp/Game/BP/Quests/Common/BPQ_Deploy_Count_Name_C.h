// /Game/BP/Quests/Common/BPQ_Deploy_Count_Name.BPQ_Deploy_Count_Name_C
// Derives from: ABPQ_Deploy_Count_ItemStatic_C > AQuest > AIcarusActor > AActor > UObject
// size 0x493, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Deploy_Count_Name_C : public ABPQ_Deploy_Count_ItemStatic_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
