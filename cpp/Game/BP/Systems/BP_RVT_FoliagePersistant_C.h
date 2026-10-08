// /Game/BP/Systems/BP_RVT_FoliagePersistant.BP_RVT_FoliagePersistant_C
// Derives from: AActor > UObject
// size 0x228, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RVT_FoliagePersistant_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FoliagePersistantMesh;  // 0x0220, size 0x8
};
