// /Game/BP/Quests/GreatHunts/Ape/D/BPQ_GH_Ape_D.BPQ_GH_Ape_D_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x492, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_D_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> Tag_Queries_Row_Handle;  // 0x0470, size 0x10, named "Tag Queries Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Extra_Spawner;  // 0x0480, size 0x10, named "Extra Spawner"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0491, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_D(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
