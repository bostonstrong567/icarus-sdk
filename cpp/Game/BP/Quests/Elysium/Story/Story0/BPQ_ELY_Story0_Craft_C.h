// /Game/BP/Quests/Elysium/Story/Story0/BPQ_ELY_Story0_Craft.BPQ_ELY_Story0_Craft_C
// Derives from: ABPQ_Deploy_Count_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story0_Craft_C : public ABPQ_Deploy_Count_C
{
public:

    UFUNCTION(BlueprintCallable) bool ExtraDeployableChecks(AIcarusActor* Deployable);  // parameters 0x9
};
