// /Game/BP/Quests/Prometheus/Story/Story4/BPQ_PRO_Story4_Body3_Creature.BPQ_PRO_Story4_Body3_Creature_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story4_Body3_Creature_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
