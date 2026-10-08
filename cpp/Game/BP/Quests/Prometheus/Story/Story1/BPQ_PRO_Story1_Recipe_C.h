// /Game/BP/Quests/Prometheus/Story/Story1/BPQ_PRO_Story1_Recipe.BPQ_PRO_Story1_Recipe_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story1_Recipe_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0478, size 0x18

    UFUNCTION(BlueprintCallable) void _5MinTimer();  // named "5MinTimer"
    UFUNCTION(BlueprintCallable) void AIKilled(AActor* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story1_Recipe(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSupplyPodSpawnLocationFound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnSpawner();
};
