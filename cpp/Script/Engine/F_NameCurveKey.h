// /Script/Engine.NameCurveKey
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Curves/NameCurve.h

USTRUCT()
struct FNameCurveKey
{
public:
    UPROPERTY(EditAnywhere) float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FName Value;  // 0x0004, size 0x8
};
