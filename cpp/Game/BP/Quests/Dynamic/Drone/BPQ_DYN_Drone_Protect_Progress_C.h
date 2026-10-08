// /Game/BP/Quests/Dynamic/Drone/BPQ_DYN_Drone_Protect_Progress.BPQ_DYN_Drone_Protect_Progress_C
// Derives from: ABPQ_Common_Progress_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Drone_Protect_Progress_C : public ABPQ_Common_Progress_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PawnSwarm_C* TeenageCaveworm;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PawnSwarm_C* Caveworm;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BiomeSpawn;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> Creatures;  // 0x04B0, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Drone_Protect_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCreatureArray(TArray<FAISetupRowHandle>& Creatures);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxTime();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
