// /Script/MovieScene.MovieSceneCompiledData
// Derives from: UObject
// size 0x3F8, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h

UCLASS()
class UMovieSceneCompiledData : public UObject
{
public:
    UPROPERTY() FMovieSceneEvaluationTemplate EvaluationTemplate;  // 0x0028, size 0x160
    UPROPERTY() FMovieSceneSequenceHierarchy Hierarchy;  // 0x0188, size 0x118
    UPROPERTY() FMovieSceneEntityComponentField EntityComponentField;  // 0x02A0, size 0xF0
    UPROPERTY() FMovieSceneEvaluationField TrackTemplateField;  // 0x0390, size 0x30
    UPROPERTY() TArray<FFrameTime> DeterminismFences;  // 0x03C0, size 0x10
    UPROPERTY() FGuid CompiledSignature;  // 0x03D0, size 0x10
    UPROPERTY() FGuid CompilerVersion;  // 0x03E0, size 0x10
    UPROPERTY() FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;  // 0x03F0, size 0x1
    UPROPERTY() FMovieSceneSequenceCompilerMaskStruct AllocatedMask;  // 0x03F1, size 0x1
    UPROPERTY() EMovieSceneSequenceFlags AccumulatedFlags;  // 0x03F2, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FMovieSceneCompiledSequenceFlagStruct CompiledFlags;  // 0x03F3, private
};
