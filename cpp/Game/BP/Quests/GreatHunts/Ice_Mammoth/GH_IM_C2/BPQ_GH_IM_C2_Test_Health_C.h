// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C2/BPQ_GH_IM_C2_Test_Health.BPQ_GH_IM_C2_Test_Health_C
// Derives from: ABPQ_Common_Object_Health_C > AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C2_Test_Health_C : public ABPQ_Common_Object_Health_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
