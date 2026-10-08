// /Script/Engine.StereoLayerShapeEquirect
// Derives from: UStereoLayerShape > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h

UCLASS(EditInlineNew)
class UStereoLayerShapeEquirect : public UStereoLayerShape
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBox2D LeftUVRect;  // 0x0028, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBox2D RightUVRect;  // 0x003C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D LeftScale;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D RightScale;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D LeftBias;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D RightBias;  // 0x0068, size 0x8

    UFUNCTION(BlueprintCallable) void SetEquirectProps(FEquirectProps InScaleBiases);  // parameters 0x48
};
