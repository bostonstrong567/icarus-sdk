// /Game/BP/Quests/Prometheus/Story/Story5/BPQ_PRO_Story5_Outpost_Power.BPQ_PRO_Story5_Outpost_Power_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story5_Outpost_Power_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
