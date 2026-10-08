// /Script/Engine.NameCurve
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Curves/NameCurve.h

USTRUCT()
struct FNameCurve : public FIndexedCurve
{
    UPROPERTY(EditAnywhere) TArray<FNameCurveKey> Keys;  // 0x0068, size 0x10
};
