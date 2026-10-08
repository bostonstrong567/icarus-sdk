// /Script/Engine.SphereReflectionCapture
// Derives from: AReflectionCapture > AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/SphereReflectionCapture.h

UCLASS(MinimalAPI, Config=Engine)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
    UPROPERTY(Instanced) UDrawSphereComponent* DrawCaptureRadius;  // 0x0228, size 0x8
};
