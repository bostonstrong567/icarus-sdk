// /Script/Engine.CurveLinearColorAtlas
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1C0, declared in Engine/Source/Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h

UCLASS()
class UCurveLinearColorAtlas : public UTexture2D
{
public:
    UPROPERTY(EditAnywhere) uint32 TextureSize;  // 0x01A0, size 0x4
    UPROPERTY(EditAnywhere) uint8 bSquareResolution : 1;  // 0x01A4, mask 0x01
    UPROPERTY(EditAnywhere) uint32 TextureHeight;  // 0x01A8, size 0x4
    UPROPERTY(EditAnywhere) TArray<UCurveLinearColor*> GradientCurves;  // 0x01B0, size 0x10

    UFUNCTION(BlueprintCallable) bool GetCurvePosition(UCurveLinearColor* InCurve, float& Position);  // parameters 0xD
};
