// /Script/MovieScene.MovieSceneTrackInstanceEntry
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h

USTRUCT()
struct FMovieSceneTrackInstanceEntry
{
    UPROPERTY() UObject* BoundObject;  // 0x0000, size 0x8
    UPROPERTY() UMovieSceneTrackInstance* TrackInstance;  // 0x0008, size 0x8
};
