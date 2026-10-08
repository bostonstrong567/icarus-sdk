// /Script/Engine.SceneCaptureCube
// Derives from: ASceneCapture > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/SceneCaptureCube.h

UCLASS(Config=Engine)
class ASceneCaptureCube : public ASceneCapture
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneCaptureComponentCube* CaptureComponentCube;  // 0x0230, size 0x8

    UFUNCTION(BlueprintCallable) void OnInterpToggle(bool bEnable);  // parameters 0x1
};
