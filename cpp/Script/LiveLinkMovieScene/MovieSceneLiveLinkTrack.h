// /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xD0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkMovieScene/Public/MovieScene/MovieSceneLiveLinkTrack.h

UCLASS(MinimalAPI)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TSubclassOf<ULiveLinkRole> TrackRole;  // 0x00C8, size 0x8
};
