// /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xD0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkTrack.h

UCLASS(MinimalAPI)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TSubclassOf<ULiveLinkRole> TrackRole;  // 0x00C8, size 0x8
};
