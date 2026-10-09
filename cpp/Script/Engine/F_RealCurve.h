// /Script/Engine.RealCurve
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Curves/RealCurve.h

USTRUCT()
struct FRealCurve : public FIndexedCurve
{
public:
    UPROPERTY(EditAnywhere) float DefaultValue;  // 0x0068, size 0x4
    UPROPERTY() TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;  // 0x006C, size 0x1
    UPROPERTY() TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;  // 0x006D, size 0x1
};
