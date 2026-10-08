// /Script/MovieSceneCapture.LevelCapture
// Derives from: UMovieSceneCapture > UObject
// size 0x240, declared in Engine/Source/Runtime/MovieSceneCapture/Public/LevelCapture.h

UCLASS(Config=EditorPerProjectUserSettings)
class ULevelCapture : public UMovieSceneCapture
{
public:
    UPROPERTY(EditAnywhere) bool bAutoStartCapture;  // 0x0220, size 0x1
    UPROPERTY() FGuid PrerequisiteActorId;  // 0x022C, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<AActor,FWeakObjectPtr> PrerequisiteActor;  // 0x0224, private
    int32 PIECaptureInstance;  // 0x023C, private
};
