// /Script/Engine.CurveEdEntry
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h

USTRUCT()
struct FCurveEdEntry
{
    UPROPERTY() UObject* CurveObject;  // 0x0000, size 0x8
    UPROPERTY() FColor CurveColor;  // 0x0008, size 0x4
    UPROPERTY() FString CurveName;  // 0x0010, size 0x10
    UPROPERTY() int32 bHideCurve;  // 0x0020, size 0x4
    UPROPERTY() int32 bColorCurve;  // 0x0024, size 0x4
    UPROPERTY() int32 bFloatingPointColorCurve;  // 0x0028, size 0x4
    UPROPERTY() int32 bClamp;  // 0x002C, size 0x4
    UPROPERTY() float ClampLow;  // 0x0030, size 0x4
    UPROPERTY() float ClampHigh;  // 0x0034, size 0x4
};
