// /Game/BP/Quests/Olympus/Riverlands/Extermination/BPQ_OLY_Riverlands_Extermination_Poison.BPQ_OLY_Riverlands_Extermination_Poison_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x469, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extermination_Poison_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPoison;  // 0x0468, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
