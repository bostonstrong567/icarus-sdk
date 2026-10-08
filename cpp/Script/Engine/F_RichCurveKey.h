// /Script/Engine.RichCurveKey
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Curves/RichCurve.h

USTRUCT()
struct FRichCurveKey
{
    UPROPERTY() TEnumAsByte<ERichCurveInterpMode> InterpMode;  // 0x0000, size 0x1
    UPROPERTY() TEnumAsByte<ERichCurveTangentMode> TangentMode;  // 0x0001, size 0x1
    UPROPERTY() TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) float Time;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Value;  // 0x0008, size 0x4
    UPROPERTY() float ArriveTangent;  // 0x000C, size 0x4
    UPROPERTY() float ArriveTangentWeight;  // 0x0010, size 0x4
    UPROPERTY() float LeaveTangent;  // 0x0014, size 0x4
    UPROPERTY() float LeaveTangentWeight;  // 0x0018, size 0x4
};
