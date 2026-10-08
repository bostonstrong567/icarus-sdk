// /Game/BP/World/Prefab/BP_MegaTreePrefab.BP_MegaTreePrefab_C
// Derives from: AMegaTreePrefab > AActorPrefab > AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MegaTreePrefab_C : public AMegaTreePrefab
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
