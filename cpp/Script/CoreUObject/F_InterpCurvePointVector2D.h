// /Script/CoreUObject.InterpCurvePointVector2D
// size 0x20

USTRUCT()
struct FInterpCurvePointVector2D
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D OutVal;  // 0x0004, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ArriveTangent;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D LeaveTangent;  // 0x0014, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x001C, size 0x1
};
