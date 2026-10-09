// /Script/Engine.RichCurve
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Curves/RichCurve.h

USTRUCT()
struct FRichCurve : public FRealCurve
{
public:
    UPROPERTY(EditAnywhere) TArray<FRichCurveKey> Keys;  // 0x0070, size 0x10
};
