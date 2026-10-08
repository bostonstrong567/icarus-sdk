// /Game/BP/Quests/Olympus/Omni/Research/BPQ_Omni_OLY_Research_Analyzer_Defend.BPQ_Omni_OLY_Research_Analyzer_Defend_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Omni_OLY_Research_Analyzer_Defend_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnedWorms;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxWorms;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool PlayersNearby;  // 0x047C, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Omni_OLY_Research_Analyzer_Defend(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WormDeath(UActorState* ActorState);  // parameters 0x8
};
