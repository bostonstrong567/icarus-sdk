// /Script/Icarus.PrefabFoliage
// size 0x38, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabFoliage
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFoliageType> FoliageType;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> Instances;  // 0x0028, size 0x10
};
