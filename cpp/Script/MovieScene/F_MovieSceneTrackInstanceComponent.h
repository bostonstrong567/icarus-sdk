// /Script/MovieScene.MovieSceneTrackInstanceComponent
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/BuiltInComponentTypes.h

USTRUCT()
struct FMovieSceneTrackInstanceComponent
{
    UPROPERTY(Instanced) UMovieSceneSection* Owner;  // 0x0000, size 0x8
    UPROPERTY() TSubclassOf<UMovieSceneTrackInstance> TrackInstanceClass;  // 0x0008, size 0x8
};
