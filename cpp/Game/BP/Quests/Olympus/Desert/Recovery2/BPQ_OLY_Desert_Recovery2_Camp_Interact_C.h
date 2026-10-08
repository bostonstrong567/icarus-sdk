// /Game/BP/Quests/Olympus/Desert/Recovery2/BPQ_OLY_Desert_Recovery2_Camp_Interact.BPQ_OLY_Desert_Recovery2_Camp_Interact_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Recovery2_Camp_Interact_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
