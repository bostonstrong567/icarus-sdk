// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C3/BPQ_GH_IM_C3_Experiment_Weaken.BPQ_GH_IM_C3_Experiment_Weaken_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C3_Experiment_Weaken_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetActorHealth(bool& Valid, int32& Current, int32& Max, float& Percent);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
