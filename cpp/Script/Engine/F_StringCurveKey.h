// /Script/Engine.StringCurveKey
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Curves/StringCurve.h

USTRUCT()
struct FStringCurveKey
{
    UPROPERTY(EditAnywhere) float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FString Value;  // 0x0008, size 0x10
};
