// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C/BPQ_GH_IM_C.BPQ_GH_IM_C_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPC_RecoveryBeacon_C* BPC_RecoveryBeacon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_MammothDesert_Corpse_C*> UsedCarcasses;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner2;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> Tag_Queries_Row_Handle;  // 0x0498, size 0x10, named "Tag Queries Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> ManualSpawn;  // 0x04A8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
