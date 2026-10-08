// /Script/MovieSceneTracks.MovieSceneActorReferenceData
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h

USTRUCT()
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    UPROPERTY() TArray<FFrameNumber> KeyTimes;  // 0x0008, size 0x10
    UPROPERTY() FMovieSceneActorReferenceKey DefaultValue;  // 0x0018, size 0x28
    UPROPERTY() TArray<FMovieSceneActorReferenceKey> KeyValues;  // 0x0040, size 0x10

    // Not reflected:
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0050
};
