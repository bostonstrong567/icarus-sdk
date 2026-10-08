// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C3/BPQ_GH_IM_C3_Experiment_Hit.BPQ_GH_IM_C3_Experiment_Hit_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C3_Experiment_Hit_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
