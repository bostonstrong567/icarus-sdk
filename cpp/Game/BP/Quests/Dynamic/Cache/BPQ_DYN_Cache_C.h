// /Game/BP/Quests/Dynamic/Cache/BPQ_DYN_Cache.BPQ_DYN_Cache_C
// Derives from: ABPQ_DYN_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4DC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Cache_C : public ABPQ_DYN_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_LocationQueries_C* BPQC_LocationQueries;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle CreatureToSpawn;  // 0x0498, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Stream;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CreditsToAward;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExpToAward;  // 0x04BC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExperienceAwarded;  // 0x04D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AoEForSpawn;  // 0x04D8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Cache(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FAISetupRowHandle GetCreature();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnAIKilled(AActor* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PostLocationFound(bool FirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RandomizeSpawnTransform(FTransform& RandomizedTransform);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnSpawners();
};
