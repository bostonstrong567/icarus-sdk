// /Game/BP/Quests/Olympus/Desert/Extermination2/BPQ_OLY_Desert_Extermination_2_Defend.BPQ_OLY_Desert_Extermination_2_Defend_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_2_Defend_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnedScorpions;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnedScorpions;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredScorpionKills;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ScorpSpawnDelay;  // 0x0480, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DestroyUnit();
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Extermination_2_Defend(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetScorpionsKilled();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetVariationName();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void IncrementScorpionsKilled();
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ScorpionDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
