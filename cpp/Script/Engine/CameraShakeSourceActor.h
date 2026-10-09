// /Script/Engine.CameraShakeSourceActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeSourceActor.h

UCLASS(Config=Engine)
class ACameraShakeSourceActor : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UCameraShakeSourceComponent* CameraShakeSourceComponent;  // 0x0220, size 0x8
};
