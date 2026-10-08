// /Game/BP/Systems/WorldBoss/BP_WorldBossSpawner.BP_WorldBossSpawner_C
// Derives from: AWorldBossSpawner > AIcarusActor > AActor > UObject
// size 0x369, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossSpawner_C : public AWorldBossSpawner
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DummySphere;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsWorldBossActive;  // 0x0368, size 0x1

    UFUNCTION(BlueprintCallable) void OnRep_IsWorldBossActive();
    UFUNCTION(BlueprintCallable) void SetWorldBossActive(bool Active);  // parameters 0x1
};
