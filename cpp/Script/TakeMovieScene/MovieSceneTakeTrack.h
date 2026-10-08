// /Script/TakeMovieScene.MovieSceneTakeTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Plugins/VirtualProduction/Takes/Source/TakeMovieScene/Public/MovieSceneTakeTrack.h

UCLASS(MinimalAPI)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10
};
