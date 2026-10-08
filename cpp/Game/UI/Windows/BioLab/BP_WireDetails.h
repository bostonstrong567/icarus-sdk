// /Game/UI/Windows/BioLab/BP_WireDetails.BP_WireDetails
// size 0x1C

USTRUCT()
struct BP_WireDetails
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Start;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Mid;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D End;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeLerp;  // 0x0018, size 0x4
};
