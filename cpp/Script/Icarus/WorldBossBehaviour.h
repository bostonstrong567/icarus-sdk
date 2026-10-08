// /Script/Icarus.WorldBossBehaviour
// Derives from: UActorComponent > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Systems/WorldBoss/WorldBossBehaviour.h

UCLASS(Config=Engine)
class UWorldBossBehaviour : public UActorComponent
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetSpawnedBossActor() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnAIBecomeIrrelevant();
    UFUNCTION(BlueprintNativeEvent) void OnAIBecomeRelevant();
};
