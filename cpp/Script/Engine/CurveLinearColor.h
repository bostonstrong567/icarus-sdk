// /Script/Engine.CurveLinearColor
// Derives from: UCurveBase > UObject
// size 0x250, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveLinearColor.h

UCLASS()
class UCurveLinearColor : public UCurveBase
{
public:
    UPROPERTY() FRichCurve FloatCurves;  // 0x0030, size 0x80
    UPROPERTY(EditAnywhere) float AdjustHue;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere) float AdjustSaturation;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere) float AdjustBrightness;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere) float AdjustBrightnessCurve;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere) float AdjustVibrance;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere) float AdjustMinAlpha;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere) float AdjustMaxAlpha;  // 0x0248, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetClampedLinearColorValue(float InTime) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetLinearColorValue(float InTime) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetUnadjustedLinearColorValue(float InTime) const;  // parameters 0x14
};
