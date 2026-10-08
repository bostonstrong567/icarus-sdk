// /Script/Engine.CurveVector
// Derives from: UCurveBase > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveVector.h

UCLASS(MinimalAPI)
class UCurveVector : public UCurveBase
{
public:
    UPROPERTY() FRichCurve FloatCurves;  // 0x0030, size 0x80

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetVectorValue(float InTime) const;  // parameters 0x10
};
