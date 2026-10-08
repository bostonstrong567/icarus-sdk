// /Script/MovieSceneTracks.MovieSceneMaterialTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h

UCLASS()
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10
};
