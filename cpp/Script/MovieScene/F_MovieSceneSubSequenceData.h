// /Script/MovieScene.MovieSceneSubSequenceData
// size 0x108, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h

USTRUCT()
struct FMovieSceneSubSequenceData
{
    UPROPERTY() FSoftObjectPath Sequence;  // 0x0000, size 0x18
    UPROPERTY() FMovieSceneSequenceTransform OuterToInnerTransform;  // 0x0018, size 0x20
    UPROPERTY() FMovieSceneSequenceTransform RootToSequenceTransform;  // 0x0038, size 0x20
    UPROPERTY() FFrameRate TickResolution;  // 0x0058, size 0x8
    UPROPERTY() FMovieSceneSequenceID DeterministicSequenceID;  // 0x0060, size 0x4
    UPROPERTY() FMovieSceneFrameRange ParentPlayRange;  // 0x0064, size 0x10
    UPROPERTY() FFrameNumber ParentStartFrameOffset;  // 0x0074, size 0x4
    UPROPERTY() FFrameNumber ParentEndFrameOffset;  // 0x0078, size 0x4
    UPROPERTY() FFrameNumber ParentFirstLoopStartFrameOffset;  // 0x007C, size 0x4
    UPROPERTY() bool bCanLoop;  // 0x0080, size 0x1
    UPROPERTY() FMovieSceneFrameRange PlayRange;  // 0x0084, size 0x10
    UPROPERTY() FMovieSceneFrameRange FullPlayRange;  // 0x0094, size 0x10
    UPROPERTY() FMovieSceneFrameRange UnwarpedPlayRange;  // 0x00A4, size 0x10
    UPROPERTY() FMovieSceneFrameRange PreRollRange;  // 0x00B4, size 0x10
    UPROPERTY() FMovieSceneFrameRange PostRollRange;  // 0x00C4, size 0x10
    UPROPERTY() int16 HierarchicalBias;  // 0x00D4, size 0x2
    UPROPERTY() bool bHasHierarchicalEasing;  // 0x00D6, size 0x1
    UPROPERTY() FMovieSceneSequenceInstanceDataPtr InstanceData;  // 0x00D8, size 0x18
    UPROPERTY() FGuid SubSectionSignature;  // 0x00F8, size 0x10

    // Not reflected:
    TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> CachedSequence;  // 0x00F0
};
