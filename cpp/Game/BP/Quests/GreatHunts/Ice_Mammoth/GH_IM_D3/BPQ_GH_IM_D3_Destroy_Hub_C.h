// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_D3/BPQ_GH_IM_D3_Destroy_Hub.BPQ_GH_IM_D3_Destroy_Hub_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_D3_Destroy_Hub_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
