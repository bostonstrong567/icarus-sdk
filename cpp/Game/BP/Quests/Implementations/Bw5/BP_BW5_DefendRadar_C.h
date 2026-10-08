// /Game/BP/Quests/Implementations/Bw5/BP_BW5_DefendRadar.BP_BW5_DefendRadar_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW5_DefendRadar_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ScanTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float ScanTimeMax;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakTime;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BreakTimeMax;  // 0x047C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW5_DefendRadar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void QuestEnded();
    UFUNCTION(BlueprintCallable) void RadarStopped();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
