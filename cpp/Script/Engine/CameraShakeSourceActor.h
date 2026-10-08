// /Script/Engine.CameraShakeSourceActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeSourceActor.h

UCLASS(Config=Engine)
class ACameraShakeSourceActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCameraShakeSourceComponent* CameraShakeSourceComponent;  // 0x0220, size 0x8
};
