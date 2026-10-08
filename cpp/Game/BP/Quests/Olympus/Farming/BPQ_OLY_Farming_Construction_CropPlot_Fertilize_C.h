// /Game/BP/Quests/Olympus/Farming/BPQ_OLY_Farming_Construction_CropPlot_Fertilize.BPQ_OLY_Farming_Construction_CropPlot_Fertilize_C
// Derives from: ABPQ_Deploy_Count_List_C > AQuest > AIcarusActor > AActor > UObject
// size 0x492, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Farming_Construction_CropPlot_Fertilize_C : public ABPQ_Deploy_Count_List_C
{
public:

    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
};
