// /Script/CoreUObject.InterpCurvePointQuat
// size 0x50

USTRUCT()
struct FInterpCurvePointQuat
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InVal;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuat OutVal;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuat ArriveTangent;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuat LeaveTangent;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EInterpCurveMode> InterpMode;  // 0x0040, size 0x1
};
