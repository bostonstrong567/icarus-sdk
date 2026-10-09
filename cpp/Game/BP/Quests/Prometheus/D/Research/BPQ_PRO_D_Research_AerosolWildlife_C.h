// /Game/BP/Quests/Prometheus/D/Research/BPQ_PRO_D_Research_AerosolWildlife.BPQ_PRO_D_Research_AerosolWildlife_C
// Derives from: ABPQ_Common_Clear_Area_C > AQuest > AIcarusActor > AActor > UObject
// size 0x49C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_D_Research_AerosolWildlife_C : public ABPQ_Common_Clear_Area_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
