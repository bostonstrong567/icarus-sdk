// /Script/Engine.BoxReflectionCaptureComponent
// Derives from: UReflectionCaptureComponent > USceneComponent > UActorComponent > UObject
// size 0x290, declared in Engine/Source/Runtime/Engine/Classes/Components/BoxReflectionCaptureComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BoxTransitionDistance;  // 0x0270, size 0x4
    UPROPERTY(Instanced) UBoxComponent* PreviewInfluenceBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced) UBoxComponent* PreviewCaptureBox;  // 0x0280, size 0x8
};
