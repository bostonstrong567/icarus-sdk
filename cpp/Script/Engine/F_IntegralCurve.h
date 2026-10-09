// /Script/Engine.IntegralCurve
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Curves/IntegralCurve.h

USTRUCT()
struct FIntegralCurve : public FIndexedCurve
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) TArray<FIntegralKey> Keys;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) int32 DefaultValue;  // 0x0078, size 0x4
    UPROPERTY() bool bUseDefaultValueBeforeFirstKey;  // 0x007C, size 0x1
};
