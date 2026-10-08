// /Game/BP/Quests/Elysium/SideQuests/Ambush/BPQ_ELY_SQ_Ambush_Reclaim_Soldiers.BPQ_ELY_SQ_Ambush_Reclaim_Soldiers_C
// Derives from: ABPQ_Common_Hunt_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Ambush_Reclaim_Soldiers_C : public ABPQ_Common_Hunt_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> AI;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> Tag_Queries_Row_Handle;  // 0x04B8, size 0x10, named "Tag Queries Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnedCount;  // 0x04C8, size 0x4

    UFUNCTION(BlueprintCallable) void AddSpawner(const ABP_ManualAISpawnPoint_C*& Spawner);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Ambush_Reclaim_Soldiers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindCharacter(AActor*& Target) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAttack();
};
