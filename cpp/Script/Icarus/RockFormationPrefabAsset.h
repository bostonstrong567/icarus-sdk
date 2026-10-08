// /Script/Icarus.RockFormationPrefabAsset
// Derives from: UActorPrefabAsset > UDataAsset > UObject
// size 0x50, declared in Icarus/Source/Icarus/Systems/Prefab/RockFormationPrefabAsset.h

UCLASS()
class URockFormationPrefabAsset : public UActorPrefabAsset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabStaticMesh> StaticMeshes;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabFoliage> Foliage;  // 0x0040, size 0x10
};
