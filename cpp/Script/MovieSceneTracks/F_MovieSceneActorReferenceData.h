// /Script/MovieSceneTracks.MovieSceneActorReferenceData
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneActorReferenceSection.h

USTRUCT()
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> KeyTimes;  // 0x0008, size 0x10
    UPROPERTY() FMovieSceneActorReferenceKey DefaultValue;  // 0x0018, size 0x28
    UPROPERTY() TArray<FMovieSceneActorReferenceKey> KeyValues;  // 0x0040, size 0x10
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0050, not reflected
};
