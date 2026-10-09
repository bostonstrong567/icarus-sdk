// /Game/BP/Utilities/WT/Tech/FWTShrinkWrap.FWTShrinkWrap
// size 0x48

USTRUCT()
struct FWTShrinkWrap
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Vertices;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> Triangles;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Normals;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector2D> UV0;  // 0x0038, size 0x10
};
