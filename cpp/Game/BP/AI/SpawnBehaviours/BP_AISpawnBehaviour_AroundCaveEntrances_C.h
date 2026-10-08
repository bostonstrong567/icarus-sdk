// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundCaveEntrances.BP_AISpawnBehaviour_AroundCaveEntrances_C
// Derives from: UAISpawnBehaviour > UObject
// size 0x224, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundCaveEntrances_C : public UAISpawnBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreStatRequirement;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* SpawnEQS;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0138, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseFallbackSpawnPoint;  // 0x0144, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CleanupLifespan;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SuccessfullySpawnedAI;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnScale;  // 0x0158, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetCaveEntrance;  // 0x0168, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, ActorArrayStruct> PreviousSpawns;  // 0x0170, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> CurrentCaveSpawns;  // 0x01C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> CaveSpawnCooldowns;  // 0x01D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CaveSpawnCooldownDuration;  // 0x0220, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CleanupAI(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CustomEvent(UObject* Context1, FVector SpawnLocation1);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void DoSpawn(UObject* Context, FVector SpawnLocation);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void DoesCaveHavePreviouslySpawnedAI(ACaveEntranceBase* CaveEntrance, bool& HasAI);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DoesCaveSupportSpawning(ACaveEntranceBase* Cave, bool& SupportsSpawning);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundCaveEntrances(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool IsLocationWithinAffectedTerrainZone(UObject* WorldContextObject, FVector WorldLocation);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void OnSpawnedAI(AActor* AISpawned);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSpawnedCaveActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TrySpawnAI(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundCave);  // parameters 0x8
};
