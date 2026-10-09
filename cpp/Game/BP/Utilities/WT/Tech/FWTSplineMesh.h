// /Game/BP/Utilities/WT/Tech/FWTSplineMesh.FWTSplineMesh
// size 0xB0

USTRUCT()
struct FWTSplineMesh
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Mesh;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESplineMeshAxis> ForwardAxis;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartPos;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartTangent;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndPos;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndTangent;  // 0x0064, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D StartScale;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D EndScale;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartRoll;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EndRoll;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector UpDirection;  // 0x0088, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsVisible;  // 0x0094, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomPrimitiveData0;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CastShadow;  // 0x009C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OverrideCollisionProfile;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* OverrideMaterial;  // 0x00A8, size 0x8
};
