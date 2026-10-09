// /Script/MovieSceneTracks.MovieSceneEventTriggerData
// size 0x48, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneEventSystems.h

USTRUCT()
struct FMovieSceneEventTriggerData
{
public:
    UPROPERTY() FMovieSceneEventPtrs Ptrs;  // 0x0000, size 0x28
    UPROPERTY() FGuid ObjectBindingID;  // 0x0028, size 0x10
    FMovieSceneSequenceID SequenceID;  // 0x0038, not reflected
    FFrameTime RootTime;  // 0x003C, not reflected
};
