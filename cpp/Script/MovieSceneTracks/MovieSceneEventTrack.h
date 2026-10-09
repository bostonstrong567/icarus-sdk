// /Script/MovieSceneTracks.MovieSceneEventTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xB8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneEventTrack.h

UCLASS(MinimalAPI)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer, public IMovieSceneDeterminismSource
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenForwards : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFireEventsWhenBackwards : 1;  // 0x00A0, mask 0x02
    UPROPERTY(EditAnywhere) EFireEventsAtPosition EventPosition;  // 0x00A4, size 0x1
private:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x00A8, size 0x10
};
