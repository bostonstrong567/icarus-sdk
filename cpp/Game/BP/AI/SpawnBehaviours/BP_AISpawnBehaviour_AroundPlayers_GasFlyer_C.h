// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_GasFlyer.BP_AISpawnBehaviour_AroundPlayers_GasFlyer_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x168, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_GasFlyer_C : public UBP_AISpawnBehaviour_AroundPlayers_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0160, size 0x8

    UFUNCTION(BlueprintCallable) void DoSpawn(UObject* Context, FVector SpawnLocation);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_GasFlyer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAdditionalFlyerSpawnLocation(FVector Around, FVector& OutLocation, bool& Success);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
