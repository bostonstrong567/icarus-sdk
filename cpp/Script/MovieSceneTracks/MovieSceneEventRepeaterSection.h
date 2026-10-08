// /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
// Derives from: UMovieSceneEventSectionBase > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x118, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventRepeaterSection.h

UCLASS(MinimalAPI)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneEvent Event;  // 0x00F0, size 0x28
};
