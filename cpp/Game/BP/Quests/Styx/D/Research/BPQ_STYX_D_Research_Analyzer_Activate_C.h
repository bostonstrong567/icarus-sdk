// /Game/BP/Quests/Styx/D/Research/BPQ_STYX_D_Research_Analyzer_Activate.BPQ_STYX_D_Research_Analyzer_Activate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Research_Analyzer_Activate_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
