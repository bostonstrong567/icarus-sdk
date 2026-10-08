// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_PRO_Story1.BPQ_PRO_Story1_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4BC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story1_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Row;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Row_0;  // 0x048C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Row_1;  // 0x04A4, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TomatoPlanted();
    UFUNCTION(BlueprintCallable) void TriggerQuestFlow();
};
