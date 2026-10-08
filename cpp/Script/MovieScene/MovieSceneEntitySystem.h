// /Script/MovieScene.MovieSceneEntitySystem
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystem.h

UCLASS()
class UMovieSceneEntitySystem : public UObject
{
public:
    UPROPERTY() UMovieSceneEntitySystemLinker* Linker;  // 0x0028, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FComponentTypeID RelevantComponent;  // 0x0030, protected
    UE::MovieScene::ESystemPhase Phase;  // 0x0032, protected
    uint16 GraphID;  // 0x0034, protected
    uint16 GlobalDependencyGraphID;  // 0x0036, protected
    UE::MovieScene::EEntitySystemContext SystemExclusionContext;  // 0x0038, protected
    bool bSystemIsEnabled;  // 0x0039, protected

    // Virtual functions that start here:
    //   ConditionalLinkSystemImpl, IsRelevantImpl, OnCleanTaggedGarbage, OnLink, OnRun, OnTagGarbage
    //   OnUnlink
};
