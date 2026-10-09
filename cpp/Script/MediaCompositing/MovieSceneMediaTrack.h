// /Script/MediaCompositing.MovieSceneMediaTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Plugins/Media/MediaCompositing/Source/MediaCompositing/Public/MovieSceneMediaTrack.h

UCLASS(MinimalAPI)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UMovieSceneSection*> MediaSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewMediaSource, AddNewMediaSourceOnRow
};
