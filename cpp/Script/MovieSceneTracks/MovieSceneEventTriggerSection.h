// /Script/MovieSceneTracks.MovieSceneEventTriggerSection
// Derives from: UMovieSceneEventSectionBase > UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x178, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventTriggerSection.h

UCLASS(MinimalAPI)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneEventChannel EventChannel;  // 0x00F0, size 0x88
};
