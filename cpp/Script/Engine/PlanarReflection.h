// /Script/Engine.PlanarReflection
// Derives from: ASceneCapture > AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlanarReflection.h

UCLASS(MinimalAPI, Config=Engine)
class APlanarReflection : public ASceneCapture
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPlanarReflectionComponent* PlanarReflectionComponent;  // 0x0230, size 0x8
    UPROPERTY(Deprecated) bool bShowPreviewPlane;  // 0x0238, size 0x1

    UFUNCTION(BlueprintCallable) void OnInterpToggle(bool bEnable);  // parameters 0x1
};
