// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers.BP_AISpawnBehaviour_AroundPlayers_C
// Derives from: UAISpawnBehaviour > UObject
// size 0x159, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_C : public UAISpawnBehaviour
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0128, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseFallbackSpawnPoint;  // 0x0134, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugIgnoreZoneCheck;  // 0x0135, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* SpawnEQS;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SuccessfullySpawnedAI;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnScale;  // 0x0148, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CleanupLifespan;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreStatRequirement;  // 0x0158, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CleanupAI(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoSpawn(UObject* Context, FVector SpawnLocation);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpawnRotation(FVector SpawnLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool IsLocationWithinAffectedTerrainZone(UObject* WorldContextObject, FVector WorldLocation);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void OnSpawnedAI(AActor* AISpawned);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TrySpawnAI(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
