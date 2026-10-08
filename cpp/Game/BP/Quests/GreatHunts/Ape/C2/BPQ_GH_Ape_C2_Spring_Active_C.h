// /Game/BP/Quests/GreatHunts/Ape/C2/BPQ_GH_Ape_C2_Spring_Active.BPQ_GH_Ape_C2_Spring_Active_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C2_Spring_Active_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
