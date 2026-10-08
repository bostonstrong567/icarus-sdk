// /Game/BP/Quests/Styx/E/Expedition/BPQ_STYX_E_Expedition_Scan.BPQ_STYX_E_Expedition_Scan_C
// Derives from: ABPQ_Scan_C > AQuest > AIcarusActor > AActor > UObject
// size 0x511, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_E_Expedition_Scan_C : public ABPQ_Scan_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_LargeCreatureSpawn;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScanInProgress;  // 0x0510, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_E_Expedition_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
