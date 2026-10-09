// /Script/Engine.SceneCaptureCube
// Derives from: ASceneCapture > AActor > UObject
// size 0x238, declared in Engine/Source/Runtime/Engine/Classes/Engine/SceneCaptureCube.h

UCLASS(Config=Engine)
class ASceneCaptureCube : public ASceneCapture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USceneCaptureComponentCube* CaptureComponentCube;  // 0x0230, size 0x8
public:
    UFUNCTION(BlueprintCallable) void OnInterpToggle(bool bEnable);  // parameters 0x1
};
