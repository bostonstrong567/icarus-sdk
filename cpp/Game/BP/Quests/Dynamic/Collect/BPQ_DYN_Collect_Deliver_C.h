// /Game/BP/Quests/Dynamic/Collect/BPQ_DYN_Collect_Deliver.BPQ_DYN_Collect_Deliver_C
// Derives from: ABPQ_Common_Deliver_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Collect_Deliver_C : public ABPQ_Common_Deliver_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x04C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Initialised;  // 0x04C8, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawner;  // 0x04D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> ManualSpawnerCheck;  // 0x04E0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Collect_Deliver(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCreature(FAISetupRowHandle& CreatureToSpawn, int32& MinLevel, int32& MaxLevel);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
