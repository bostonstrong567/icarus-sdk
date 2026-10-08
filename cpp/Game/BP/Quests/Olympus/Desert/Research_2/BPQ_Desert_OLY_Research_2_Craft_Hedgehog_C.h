// /Game/BP/Quests/Olympus/Desert/Research_2/BPQ_Desert_OLY_Research_2_Craft_Hedgehog.BPQ_Desert_OLY_Research_2_Craft_Hedgehog_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x469, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Desert_OLY_Research_2_Craft_Hedgehog_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasItem;  // 0x0468, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
