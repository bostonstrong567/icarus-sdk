// /Script/UMG.MovieScene2DTransformSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x558, declared in Engine/Source/Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h

UCLASS(MinimalAPI)
class UMovieScene2DTransformSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieScene2DTransformMask TransformMask;  // 0x00F0, size 0x4
    UPROPERTY() FMovieSceneFloatChannel Translation;  // 0x00F8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Rotation;  // 0x0238, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Scale;  // 0x02D8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Shear;  // 0x0418, size 0xA0
};
