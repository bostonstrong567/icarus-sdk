// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure.BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x170, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure_C : public UBP_AISpawnBehaviour_AroundPlayers_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenSpawns;  // 0x0168, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastSpawnTime;  // 0x016C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanCleanupAI(AActor* AI);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DoSpawn(UObject* Context, FVector SpawnLocation);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_PrebuiltStructure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetPrebuiltNPCs(UObject* Object, TArray<AActor*>& SpawnedNPCs);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitialiseSpawnBehaviour(const FAutonomousSpawnsRowHandle& InSpawnData);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldCleanupAI(AActor* AI, TArray<AActor*>& ValidPlayers);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TrySpawnAI(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
