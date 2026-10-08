// /Script/Engine.RectLightComponent
// Derives from: ULocalLightComponent > ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Components/RectLightComponent.h

UCLASS(EditInlineNew, Config=Engine)
class URectLightComponent : public ULocalLightComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceWidth;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceHeight;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BarnDoorAngle;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BarnDoorLength;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture* SourceTexture;  // 0x0350, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FRectLightRayTracingData * RayTracingData;  // 0x0358, private

    UFUNCTION(BlueprintCallable) void SetBarnDoorAngle(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBarnDoorLength(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSourceHeight(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSourceTexture(UTexture* bNewValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSourceWidth(float bNewValue);  // parameters 0x4
};
