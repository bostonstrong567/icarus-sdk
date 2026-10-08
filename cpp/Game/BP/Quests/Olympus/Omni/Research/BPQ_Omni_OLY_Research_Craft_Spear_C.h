// /Game/BP/Quests/Olympus/Omni/Research/BPQ_Omni_OLY_Research_Craft_Spear.BPQ_Omni_OLY_Research_Craft_Spear_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x469, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Omni_OLY_Research_Craft_Spear_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasItem;  // 0x0468, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
