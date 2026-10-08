// /Script/Engine.StereoLayerShapeCylinder
// Derives from: UStereoLayerShape > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h

UCLASS(EditInlineNew)
class UStereoLayerShapeCylinder : public UStereoLayerShape
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Radius;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OverlayArc;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Height;  // 0x0030, size 0x4

    UFUNCTION(BlueprintCallable) void SetHeight(int32 InHeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOverlayArc(float InOverlayArc);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRadius(float InRadius);  // parameters 0x4
};
