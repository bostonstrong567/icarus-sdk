// /Script/Icarus.PrefabStaticMesh
// size 0xB0, declared in Icarus/Source/Icarus/Systems/Prefab/ActorPrefabFunctionLibrary.h

USTRUCT()
struct FPrefabStaticMesh
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;  // 0x0028, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0080, size 0x30
};
