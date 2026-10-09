// /Game/BP/Quests/Dynamic/Drone/BPQ_DYN_Drone_Protect_Health.BPQ_DYN_Drone_Protect_Health_C
// Derives from: ABPQ_Common_Object_Health_C > AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Drone_Protect_Health_C : public ABPQ_Common_Object_Health_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
