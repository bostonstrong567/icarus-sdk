// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Prepare_Berries.BPQ_Styx_A_Research_Nest_Prepare_Berries_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Prepare_Berries_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BerryCount;  // 0x0478, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Research_Nest_Prepare_Berries(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
