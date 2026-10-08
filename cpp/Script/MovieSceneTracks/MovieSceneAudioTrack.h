// /Script/MovieSceneTracks.MovieSceneAudioTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneAudioTrack.h

UCLASS()
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> AudioSections;  // 0x0098, size 0x10

    // Virtual functions that start here:
    //   AddNewSound, AddNewSoundOnRow
};
