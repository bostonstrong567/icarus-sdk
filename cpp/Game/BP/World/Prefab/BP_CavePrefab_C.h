// /Game/BP/World/Prefab/BP_CavePrefab.BP_CavePrefab_C
// Derives from: ACavePrefab > AActorPrefab > AActor > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CavePrefab_C : public ACavePrefab
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateShadowSettings(UObject* OldMesh, UStaticMeshComponent* NewMesh);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
