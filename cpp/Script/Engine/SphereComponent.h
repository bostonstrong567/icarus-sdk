// /Script/Engine.SphereComponent
// Derives from: UShapeComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/SphereComponent.h

UCLASS(EditInlineNew, Config=Engine)
class USphereComponent : public UShapeComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SphereRadius;  // 0x0468, size 0x4
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScaledSphereRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetShapeScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetUnscaledSphereRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);  // parameters 0x5
};
