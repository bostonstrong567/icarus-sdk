// /Script/Engine.SimpleCurve
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Curves/SimpleCurve.h

USTRUCT()
struct FSimpleCurve : public FRealCurve
{
    UPROPERTY() TEnumAsByte<ERichCurveInterpMode> InterpMode;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) TArray<FSimpleCurveKey> Keys;  // 0x0078, size 0x10
};
