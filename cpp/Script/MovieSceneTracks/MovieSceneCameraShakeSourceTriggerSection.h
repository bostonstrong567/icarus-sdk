// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x170, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneCameraShakeSourceTriggerChannel Channel;  // 0x00E8, size 0x88
};
