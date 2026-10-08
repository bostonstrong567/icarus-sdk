// /Game/BP/Objects/World/BP_DeepOreDepositSpawn.BP_DeepOreDepositSpawn_C
// Derives from: AActor > UObject
// size 0x234, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeepOreDepositSpawn_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* MetaNode;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnCaveVariant;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnIceVariant;  // 0x0231, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnWoodVariant;  // 0x0232, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnLimestoneVariant;  // 0x0233, size 0x1
};
