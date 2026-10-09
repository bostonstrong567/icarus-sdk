// /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneEventTemplate.h

USTRUCT()
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
    UPROPERTY() FMovieSceneEventSectionData EventData;  // 0x0020, size 0x88
    UPROPERTY() uint8 bFireEventsWhenForwards : 1;  // 0x00A8, mask 0x01
    UPROPERTY() uint8 bFireEventsWhenBackwards : 1;  // 0x00A8, mask 0x02
};
