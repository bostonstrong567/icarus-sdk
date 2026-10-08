// /Game/BP/Systems/WorldBoss/BP_WorldBossManager.BP_WorldBossManager_C
// Derives from: AWorldBossManager > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossManager_C : public AWorldBossManager
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0368, size 0x8
};
