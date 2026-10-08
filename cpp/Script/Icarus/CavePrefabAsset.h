// /Script/Icarus.CavePrefabAsset
// Derives from: UActorPrefabAsset > UDataAsset > UObject
// size 0x140, declared in Icarus/Source/Icarus/Systems/Prefab/CavePrefab.h

UCLASS()
class UCavePrefabAsset : public UActorPrefabAsset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabStaticMesh> StaticMeshes;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabActorClass> Voids;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> Volumes;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> Entrances;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabLake> Lakes;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabWaterfall> Waterfalls;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabLavaFlowPoint> LavaFlowPoints;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabFoliage> Foliage;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabCaveLight> CaveLights;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabActorClass> EntranceActors;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> ExoticVoxels;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPrefabTransform> DeepMiningOreDeposit;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<AActor>, FCaveSpawnConfig> CaveActorSpawnMap;  // 0x00F0, size 0x50
};
