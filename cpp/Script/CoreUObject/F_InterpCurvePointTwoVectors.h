// /Script/CoreUObject.InterpCurvePointTwoVectors
// size 0x50

USTRUCT()
struct FInterpCurvePointTwoVectors
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTwoVectors OutVal;  // 0x0004, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTwoVectors ArriveTangent;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTwoVectors LeaveTangent;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x004C, size 0x1
};
