// /Script/MovieScene.MovieSceneSegment
// size 0x58, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h

USTRUCT()
struct FMovieSceneSegment
{

    // Not reflected:
    TRange<FFrameNumber> Range;  // 0x0000
    FMovieSceneSegmentIdentifier ID;  // 0x0010
    bool bAllowEmpty;  // 0x0014
    TArray<FSectionEvaluationData,TInlineAllocator<4,TSizedDefaultAllocator<32> > > Impls;  // 0x0018
};
