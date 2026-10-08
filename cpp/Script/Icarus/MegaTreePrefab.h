// /Script/Icarus.MegaTreePrefab
// Derives from: AActorPrefab > AActor > UObject
// size 0x228, declared in Icarus/Source/Icarus/Systems/Prefab/MegaTreePrefab.h

UCLASS(Config=Engine)
class AMegaTreePrefab : public AActorPrefab
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMegaTreePrefabAsset* PrefabAsset;  // 0x0220, size 0x8
};
