// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C2/BPQ_GH_IM_C2_Defences_Turrets.BPQ_GH_IM_C2_Defences_Turrets_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C2_Defences_Turrets_C : public ABPQ_Deploy_Count_C
{
public:

    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
};
