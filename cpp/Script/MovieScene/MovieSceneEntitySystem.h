// /Script/MovieScene.MovieSceneEntitySystem
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystem.h

UCLASS()
class UMovieSceneEntitySystem : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UMovieSceneEntitySystemLinker* Linker;  // 0x0028, size 0x8
    UE::MovieScene::FComponentTypeID RelevantComponent;  // 0x0030, not reflected
    UE::MovieScene::ESystemPhase Phase;  // 0x0032, not reflected
    uint16 GraphID;  // 0x0034, not reflected
    uint16 GlobalDependencyGraphID;  // 0x0036, not reflected
    UE::MovieScene::EEntitySystemContext SystemExclusionContext;  // 0x0038, not reflected
    bool bSystemIsEnabled;  // 0x0039, not reflected

    // Virtual functions that start here:
    //   ConditionalLinkSystemImpl, IsRelevantImpl, OnCleanTaggedGarbage, OnLink, OnRun, OnTagGarbage
    //   OnUnlink
};
