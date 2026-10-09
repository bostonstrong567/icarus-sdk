// /Script/Engine.RuntimeFloatCurve
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveFloat.h

USTRUCT()
struct FRuntimeFloatCurve
{
public:
    UPROPERTY() FRichCurve EditorCurveData;  // 0x0000, size 0x80
    UPROPERTY(EditAnywhere) UCurveFloat* ExternalCurve;  // 0x0080, size 0x8
};
