// /Script/Engine.SphereReflectionCapture
// Derives from: AReflectionCapture > AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/SphereReflectionCapture.h

UCLASS(MinimalAPI, Config=Engine)
class ASphereReflectionCapture : public AReflectionCapture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Instanced) UDrawSphereComponent* DrawCaptureRadius;  // 0x0228, size 0x8
};
