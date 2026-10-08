// /Script/Icarus.RockFormationPrefab
// Derives from: AActorPrefab > AActor > UObject
// size 0x228, declared in Icarus/Source/Icarus/Systems/Prefab/RockFormationPrefabAsset.h

UCLASS(Config=Engine)
class ARockFormationPrefab : public AActorPrefab
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) URockFormationPrefabAsset* PrefabAsset;  // 0x0220, size 0x8
};
