// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Incubate_Progress.BPQ_Styx_A_Research_Nest_Incubate_Progress_C
// Derives from: ABPQ_Common_Progress_C > AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Incubate_Progress_C : public ABPQ_Common_Progress_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxTime();  // parameters 0x4
};
