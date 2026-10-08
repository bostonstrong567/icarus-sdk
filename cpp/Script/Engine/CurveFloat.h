// /Script/Engine.CurveFloat
// Derives from: UCurveBase > UObject
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveFloat.h

UCLASS()
class UCurveFloat : public UCurveBase
{
public:
    UPROPERTY() FRichCurve FloatCurve;  // 0x0030, size 0x80
    UPROPERTY() bool bIsEventCurve;  // 0x00B0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFloatValue(float InTime) const;  // parameters 0x8
};
