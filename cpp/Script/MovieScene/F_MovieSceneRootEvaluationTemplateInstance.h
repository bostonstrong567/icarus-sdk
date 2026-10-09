// /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
// size 0xE8, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h

USTRUCT()
struct FMovieSceneRootEvaluationTemplateInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;  // 0x0000, size 0x8
    UPROPERTY() UMovieSceneCompiledDataManager* CompiledDataManager;  // 0x0008, size 0x8
    UE::MovieScene::FInstanceHandle RootInstanceHandle;  // 0x0010, not reflected
    UPROPERTY() UMovieSceneEntitySystemLinker* EntitySystemLinker;  // 0x0018, size 0x8
    FMovieSceneEntitySystemRunner EntitySystemRunner;  // 0x0020, not reflected
    UPROPERTY() TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;  // 0x0090, size 0x50
    FMovieSceneSequenceID RootID;  // 0x00E0, not reflected
    FMovieSceneCompiledDataID CompiledDataID;  // 0x00E4, not reflected
};
