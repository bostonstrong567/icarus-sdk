// /Script/MovieScene.TestMovieSceneSubTrack
// Derives from: UMovieSceneSubTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieScene/Private/Tests/MovieSceneTestObjects.h

UCLASS(MinimalAPI)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> SectionArray;  // 0x00A0, size 0x10
};
