// /Script/MovieScene.SectionEvaluationData
// size 0xC, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h

USTRUCT()
struct FSectionEvaluationData
{
public:
    UPROPERTY() int32 ImplIndex;  // 0x0000, size 0x4
    UPROPERTY() FFrameNumber ForcedTime;  // 0x0004, size 0x4
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x0008, size 0x1
};
