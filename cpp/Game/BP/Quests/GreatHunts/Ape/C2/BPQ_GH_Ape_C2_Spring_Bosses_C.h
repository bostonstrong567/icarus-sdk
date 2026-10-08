// /Game/BP/Quests/GreatHunts/Ape/C2/BPQ_GH_Ape_C2_Spring_Bosses.BPQ_GH_Ape_C2_Spring_Bosses_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x485, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C2_Spring_Bosses_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> AI;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Current;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bTriggered;  // 0x0484, size 0x1

    UFUNCTION(BlueprintCallable) void AIKilled(ABP_ManualAISpawnerBasic_C* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AISpawned(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C2_Spring_Bosses(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TriggerBosses();
};
