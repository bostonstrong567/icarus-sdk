// /Script/CoreUObject.InterpCurvePointFloat
// size 0x14

USTRUCT()
struct FInterpCurvePointFloat
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutVal;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArriveTangent;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LeaveTangent;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x0010, size 0x1
};
