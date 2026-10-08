// /Game/BP/Quests/GreatHunts/Ape/B/BPQ_GH_Ape_B_Research_Capture_Pacify.BPQ_GH_Ape_B_Research_Capture_Pacify_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_B_Research_Capture_Pacify_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
