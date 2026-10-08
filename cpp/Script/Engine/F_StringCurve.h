// /Script/Engine.StringCurve
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Curves/StringCurve.h

USTRUCT()
struct FStringCurve : public FIndexedCurve
{
    UPROPERTY(EditAnywhere) FString DefaultValue;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TArray<FStringCurveKey> Keys;  // 0x0078, size 0x10
};
