// /Script/MovieScene.MovieSceneSegment
// size 0x58, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h

USTRUCT()
struct FMovieSceneSegment
{
public:
    TRange<FFrameNumber> Range;  // 0x0000, not reflected
    FMovieSceneSegmentIdentifier ID;  // 0x0010, not reflected
    bool bAllowEmpty;  // 0x0014, not reflected
    TArray<FSectionEvaluationData,TInlineAllocator<4,TSizedDefaultAllocator<32> > > Impls;  // 0x0018, not reflected
};
