// /Game/BP/Quests/Olympus/Arctic/LongSurvey/BPQ_Arctic_LongtermSurvey.BPQ_Arctic_LongtermSurvey_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Arctic_LongtermSurvey_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RequiredSeconds;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Alpha;  // 0x0474, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Beta;  // 0x0475, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Gamma;  // 0x0476, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Delta;  // 0x0477, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SearchAreaRadius;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 DeployableCount;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool LogicCompleted;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float LogicProgress;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitRequiredSeconds;  // 0x0488, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Arctic_LongtermSurvey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
