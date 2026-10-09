// /Script/Engine.CapsuleComponent
// Derives from: UShapeComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/CapsuleComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UCapsuleComponent : public UShapeComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CapsuleHalfHeight;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CapsuleRadius;  // 0x046C, size 0x4
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScaledCapsuleHalfHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScaledCapsuleHalfHeight_WithoutHemisphere() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScaledCapsuleRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetShapeScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetUnscaledCapsuleHalfHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetUnscaledCapsuleHalfHeight_WithoutHemisphere() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetUnscaledCapsuleRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);  // parameters 0x9
};
