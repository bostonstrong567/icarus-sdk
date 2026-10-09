// /Script/Engine.CurveBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveBase.h

UCLASS(Abstract)
class UCurveBase : public UObject
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTimeRange(float& MinTime, float& MaxTime) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetValueRange(float& MinValue, float& MaxValue) const;  // parameters 0x8
};
