// /Game/BP/Quests/Styx/D/Research2/BPQ_STYX_D_Research2_TrackResearch.BPQ_STYX_D_Research2_TrackResearch_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x476, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Research2_TrackResearch_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CompletedProgress;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FoundPlayer;  // 0x0474, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QuestComplete;  // 0x0475, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Research2_TrackResearch(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
