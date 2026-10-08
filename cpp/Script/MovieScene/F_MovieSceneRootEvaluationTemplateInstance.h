// /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
// size 0xE8, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h

USTRUCT()
struct FMovieSceneRootEvaluationTemplateInstance
{
    UPROPERTY() TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;  // 0x0000, size 0x8
    UPROPERTY() UMovieSceneCompiledDataManager* CompiledDataManager;  // 0x0008, size 0x8
    UPROPERTY() UMovieSceneEntitySystemLinker* EntitySystemLinker;  // 0x0018, size 0x8
    UPROPERTY() TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;  // 0x0090, size 0x50

    // Not reflected:
    UE::MovieScene::FInstanceHandle RootInstanceHandle;  // 0x0010
    FMovieSceneEntitySystemRunner EntitySystemRunner;  // 0x0020
    FMovieSceneSequenceID RootID;  // 0x00E0
    FMovieSceneCompiledDataID CompiledDataID;  // 0x00E4
};
