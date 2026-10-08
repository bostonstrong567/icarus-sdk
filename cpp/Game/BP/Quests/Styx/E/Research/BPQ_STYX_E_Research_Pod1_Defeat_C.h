// /Game/BP/Quests/Styx/E/Research/BPQ_STYX_E_Research_Pod1_Defeat.BPQ_STYX_E_Research_Pod1_Defeat_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_E_Research_Pod1_Defeat_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
