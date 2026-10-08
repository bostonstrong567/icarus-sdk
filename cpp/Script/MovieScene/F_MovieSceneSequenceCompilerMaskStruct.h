// /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct
// size 0x1, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h

USTRUCT()
struct FMovieSceneSequenceCompilerMaskStruct
{
    UPROPERTY() uint8 bHierarchy : 1;  // 0x0000, mask 0x01
    UPROPERTY() uint8 bEvaluationTemplate : 1;  // 0x0000, mask 0x02
    UPROPERTY() uint8 bEvaluationTemplateField : 1;  // 0x0000, mask 0x04
    UPROPERTY() uint8 bEntityComponentField : 1;  // 0x0000, mask 0x08
};
