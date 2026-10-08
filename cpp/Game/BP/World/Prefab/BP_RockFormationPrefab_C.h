// /Game/BP/World/Prefab/BP_RockFormationPrefab.BP_RockFormationPrefab_C
// Derives from: ARockFormationPrefab > AActorPrefab > AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RockFormationPrefab_C : public ARockFormationPrefab
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
