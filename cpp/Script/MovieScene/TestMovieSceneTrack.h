// /Script/MovieScene.TestMovieSceneTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI)
class UTestMovieSceneTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() bool bHighPassFilter;  // 0x0098, size 0x1
    UPROPERTY() TArray<UMovieSceneSection*> SectionArray;  // 0x00A0, size 0x10
};
