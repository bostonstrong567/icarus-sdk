// /Script/Engine.MatineeActorCameraAnim
// Derives from: AMatineeActor > AActor > UObject
// size 0x2D0, declared in Engine/Source/Runtime/Engine/Classes/Matinee/MatineeActorCameraAnim.h

UCLASS(NotPlaceable, MinimalAPI, Config=Engine)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
    UPROPERTY(Transient) UCameraAnim* CameraAnim;  // 0x02C8, size 0x8
};
