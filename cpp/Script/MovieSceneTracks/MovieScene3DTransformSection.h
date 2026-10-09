// /Script/MovieSceneTracks.MovieScene3DTransformSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x740, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieScene3DTransformSection.h

UCLASS(MinimalAPI)
class UMovieScene3DTransformSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneTransformMask TransformMask;  // 0x00F0, size 0x4
    UPROPERTY() FMovieSceneFloatChannel Translation;  // 0x00F8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Rotation;  // 0x02D8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Scale;  // 0x04B8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel ManualWeight;  // 0x0698, size 0xA0
    UPROPERTY(EditAnywhere) bool bUseQuaternionInterpolation;  // 0x0738, size 0x1
};
