// /Script/MovieSceneCapture.LevelCapture
// Derives from: UMovieSceneCapture > UObject
// size 0x240, declared in Engine/Source/Runtime/MovieSceneCapture/Public/LevelCapture.h

UCLASS(Config=EditorPerProjectUserSettings)
class ULevelCapture : public UMovieSceneCapture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bAutoStartCapture;  // 0x0220, size 0x1
private:
    TWeakObjectPtr<AActor,FWeakObjectPtr> PrerequisiteActor;  // 0x0224, not reflected
    UPROPERTY() FGuid PrerequisiteActorId;  // 0x022C, size 0x10
    int32 PIECaptureInstance;  // 0x023C, not reflected
};
