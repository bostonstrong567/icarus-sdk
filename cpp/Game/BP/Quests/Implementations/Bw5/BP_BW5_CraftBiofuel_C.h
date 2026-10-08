// /Game/BP/Quests/Implementations/Bw5/BP_BW5_CraftBiofuel.BP_BW5_CraftBiofuel_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW5_CraftBiofuel_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
