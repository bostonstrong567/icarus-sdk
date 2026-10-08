// /Script/MovieSceneTracks.MovieSceneEventSectionData
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventSection.h

USTRUCT()
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0008, size 0x10
    UPROPERTY() TArray<FEventPayload> KeyValues;  // 0x0018, size 0x10

    // Not reflected:
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0028
};
