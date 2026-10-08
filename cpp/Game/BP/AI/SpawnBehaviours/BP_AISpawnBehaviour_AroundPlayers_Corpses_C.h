// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_Corpses.BP_AISpawnBehaviour_AroundPlayers_Corpses_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C > UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x179, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_Corpses_C : public UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0170, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DOUBLE_SPAWN;  // 0x0178, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_Corpses(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNearbyCorpse(AActor* TargetPlayer, AActor*& CorpseOut);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void QueryComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
