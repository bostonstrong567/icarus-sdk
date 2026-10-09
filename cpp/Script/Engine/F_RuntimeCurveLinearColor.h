// /Script/Engine.RuntimeCurveLinearColor
// size 0x208, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveLinearColor.h

USTRUCT()
struct FRuntimeCurveLinearColor
{
public:
    UPROPERTY() FRichCurve ColorCurves;  // 0x0000, size 0x80
    UPROPERTY(EditAnywhere) UCurveLinearColor* ExternalCurve;  // 0x0200, size 0x8
};
