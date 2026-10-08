// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_GroundSpawner_Spawners.BP_AISpawnBehaviour_AroundPlayers_GroundSpawner_Spawners_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C > UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x170, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_Spawners_C : public UBP_AISpawnBehaviour_AroundPlayers_GroundSpawner_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpawnRotation(FVector SpawnLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnSpawnedAI(AActor* AISpawned);  // parameters 0x8
};
