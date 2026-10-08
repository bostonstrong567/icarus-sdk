// /Script/MovieScene.MovieSceneEntitySystemGraphNode
// size 0x28, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h

USTRUCT()
struct FMovieSceneEntitySystemGraphNode
{
    UPROPERTY() UMovieSceneEntitySystem* System;  // 0x0020, size 0x8

    // Not reflected:
    TSharedPtr<UE::MovieScene::FSystemTaskPrerequisites,0> Prerequisites;  // 0x0000
    TSharedPtr<UE::MovieScene::FSystemTaskPrerequisites,0> SubsequentTasks;  // 0x0010
};
