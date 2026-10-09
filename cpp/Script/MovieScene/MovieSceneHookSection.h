// /Script/MovieScene.MovieSceneHookSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x100, declared in Engine/Source/Runtime/MovieScene/Public/Sections/MovieSceneHookSection.h

UCLASS()
class UMovieSceneHookSection : public UMovieSceneSection, public IMovieSceneEntityProvider, public IMovieSceneEvaluationHook
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() uint8 bRequiresRangedHook : 1;  // 0x00F8, mask 0x01
    UPROPERTY() uint8 bRequiresTriggerHooks : 1;  // 0x00F8, mask 0x02

    // Virtual functions that start here:
    //   GetTriggerTimes
};
