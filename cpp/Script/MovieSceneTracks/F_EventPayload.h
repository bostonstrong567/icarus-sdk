// /Script/MovieSceneTracks.EventPayload
// size 0x30, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEventSection.h

USTRUCT()
struct FEventPayload
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName EventName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMovieSceneEventParameters Parameters;  // 0x0008, size 0x28
};
