// /Game/BP/Quests/Elysium/Story/Story6/BPQ_ELY_Story_6_Stop.BPQ_ELY_Story_6_Stop_C
// Derives from: ABPQ_ELY_Setup_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_6_Stop_C : public ABPQ_ELY_Setup_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> Tag_Queries_Row_Handle;  // 0x0488, size 0x10, named "Tag Queries Row Handle"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_6_Stop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSoldierSpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) ABP_ManualAISpawnPoint_C* SpawnSoldier(FTransform AtTransform);  // parameters 0x38
};
