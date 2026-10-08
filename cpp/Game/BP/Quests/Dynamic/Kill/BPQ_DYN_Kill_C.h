// /Game/BP/Quests/Dynamic/Kill/BPQ_DYN_Kill.BPQ_DYN_Kill_C
// Derives from: ABPQ_DYN_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Kill_C : public ABPQ_DYN_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool NPCKilled;  // 0x04A0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* MapIcon;  // 0x04A8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Kill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FAISetupRowHandle GetCreature();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCreatureToSpawn(FEpicCreaturesRowHandle& EpicRow, FAISetupRowHandle& AIRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void NewFunction_0();
    UFUNCTION(BlueprintCallable) void OnAIKilled(AActor* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_NPCKilled();
    UFUNCTION(BlueprintCallable) void OnSpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PostLocationFound(bool FirstTime);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
