// /Script/CoreUObject.InterpCurvePointLinearColor
// size 0x38

USTRUCT()
struct FInterpCurvePointLinearColor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OutVal;  // 0x0004, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ArriveTangent;  // 0x0014, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LeaveTangent;  // 0x0024, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x0034, size 0x1
};
