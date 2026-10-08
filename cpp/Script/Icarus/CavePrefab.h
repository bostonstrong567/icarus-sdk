// /Script/Icarus.CavePrefab
// Derives from: AActorPrefab > AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Systems/Prefab/CavePrefab.h

UCLASS(Config=Engine)
class ACavePrefab : public AActorPrefab
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCavePrefabAsset* PrefabAsset;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebug;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseEntrance;  // 0x0229, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 CombinedCaveIncludeFlags;  // 0x022A, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool bCaveInstanceResolved;  // 0x022B, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) UObject* CaveGroup;  // 0x0230, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasResolved() const;  // parameters 0x1
};
