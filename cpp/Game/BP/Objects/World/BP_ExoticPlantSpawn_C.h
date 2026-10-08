// /Game/BP/Objects/World/BP_ExoticPlantSpawn.BP_ExoticPlantSpawn_C
// Derives from: AActor > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ExoticPlantSpawn_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x0220, size 0x8

    UFUNCTION(BlueprintCallable) void Resolve();
};
