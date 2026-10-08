// /Script/Engine.SphereReflectionCaptureComponent
// Derives from: UReflectionCaptureComponent > USceneComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/Engine/Classes/Components/SphereReflectionCaptureComponent.h

UCLASS(MinimalAPI, Config=Engine)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InfluenceRadius;  // 0x0270, size 0x4
    UPROPERTY() float CaptureDistanceScale;  // 0x0274, size 0x4
    UPROPERTY(Instanced) UDrawSphereComponent* PreviewInfluenceRadius;  // 0x0278, size 0x8
};
