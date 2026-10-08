// /Game/BP/Quests/GreatHunts/Ape/D2/BPQ_GH_Ape_D2.BPQ_GH_Ape_D2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> Tag_Queries_Row_Handle;  // 0x0478, size 0x10, named "Tag Queries Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* MotherSpawner;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnedMother;  // 0x0490, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent_0(AActor* Spawner);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_D2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Mother(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
