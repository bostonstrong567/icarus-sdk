// /Game/BP/Quests/Olympus/Forest/Scan/BPQ_Oly_Forest_Scan_Location_2.BPQ_Oly_Forest_Scan_Location_2_C
// Derives from: ABPQ_Scan_C > AQuest > AIcarusActor > AActor > UObject
// size 0x571, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Oly_Forest_Scan_Location_2_C : public ABPQ_Scan_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_LargeCreatureSpawn;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScanInProgress;  // 0x0510, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x0514, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle Event;  // 0x052C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BonusScaledCreatureLevel;  // 0x0544, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_CreatureLevel;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AoEForSpawn;  // 0x0558, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedCreatures;  // 0x0560, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AggroWolves;  // 0x0570, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_Oly_Forest_Scan_Location_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAI_Spawned(AActor* SpawnedAI);  // parameters 0x8, named "OnAI Spawned"
    UFUNCTION(BlueprintCallable) void OnAIKilled();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
