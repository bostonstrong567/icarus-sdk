// /Script/Engine.PlanarReflection
// Derives from: ASceneCapture > AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlanarReflection.h

UCLASS(MinimalAPI, Config=Engine)
class APlanarReflection : public ASceneCapture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Deprecated) bool bShowPreviewPlane;  // 0x0238, size 0x1
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPlanarReflectionComponent* PlanarReflectionComponent;  // 0x0230, size 0x8
public:
    UFUNCTION(BlueprintCallable) void OnInterpToggle(bool bEnable);  // parameters 0x1
};
