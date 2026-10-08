// /Game/BP/Quests/Common/BPQ_Scan_Progress.BPQ_Scan_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Scan_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x0470, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakTime;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakMaxTime;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EventTime;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_EventTime;  // 0x0484, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Scan_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
