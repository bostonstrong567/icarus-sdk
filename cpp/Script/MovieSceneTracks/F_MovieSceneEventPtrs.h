// /Script/MovieSceneTracks.MovieSceneEventPtrs
// size 0x28, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneEvent.h

USTRUCT()
struct FMovieSceneEventPtrs
{
public:
    UPROPERTY() UFunction* Function;  // 0x0000, size 0x8
    UPROPERTY() FFieldPath BoundObjectProperty;  // 0x0008, size 0x20
};
