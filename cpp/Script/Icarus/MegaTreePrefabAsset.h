// /Script/Icarus.MegaTreePrefabAsset
// Derives from: UActorPrefabAsset > UDataAsset > UObject
// size 0x90, declared in Icarus/Source/Icarus/Systems/Prefab/MegaTreePrefab.h

UCLASS()
class UMegaTreePrefabAsset : public UActorPrefabAsset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabStaticMesh> StaticMeshes;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabFoliage> Foliage;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPrefabTriggerBox AudioVolume;  // 0x0050, size 0x40
};
