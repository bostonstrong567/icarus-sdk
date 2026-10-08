// /Game/BP/Quests/Olympus/Arctic/LongSurvey/BPQ_Arctic_LongtermSurvey_ProgressWrapper.BPQ_Arctic_LongtermSurvey_ProgressWrapper_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x468, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Arctic_LongtermSurvey_ProgressWrapper_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
