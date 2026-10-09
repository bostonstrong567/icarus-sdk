// /Game/BP/Utilities/WT/Tech/FWTStaticMesh.FWTStaticMesh
// size 0x60

USTRUCT()
struct FWTStaticMesh
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Mesh;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> MaterialOverrides;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0020, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CollisionProfile;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecievesDecals;  // 0x0058, size 0x1
};
