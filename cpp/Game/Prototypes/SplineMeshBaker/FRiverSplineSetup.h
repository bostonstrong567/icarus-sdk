// /Game/Prototypes/SplineMeshBaker/FRiverSplineSetup.FRiverSplineSetup
// size 0x40

USTRUCT()
struct FRiverSplineSetup
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartPosition;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartTangent;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndPosition;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndTangent;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D StartScale;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D EndScale;  // 0x0038, size 0x8
};
