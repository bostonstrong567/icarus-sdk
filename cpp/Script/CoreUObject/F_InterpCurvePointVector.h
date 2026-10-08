// /Script/CoreUObject.InterpCurvePointVector
// size 0x2C

USTRUCT()
struct FInterpCurvePointVector
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OutVal;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ArriveTangent;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeaveTangent;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x0028, size 0x1
};
