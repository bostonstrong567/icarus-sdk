// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_MissionSpawnBlocker.BP_MissionSpawnBlocker_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x2CD, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MissionSpawnBlocker_C : public AIcarusActor, public ISpawnBlockerInterface
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 SpawnBlockerRadius;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool SpawnBlockerActive;  // 0x02CC, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
};
