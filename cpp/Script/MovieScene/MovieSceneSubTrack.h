// /Script/MovieScene.MovieSceneSubTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieScene/Public/Tracks/MovieSceneSubTrack.h

UCLASS()
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10

    // Virtual functions that start here:
    //   AddSequence, AddSequenceOnRow, AddSequenceToRecord
};
