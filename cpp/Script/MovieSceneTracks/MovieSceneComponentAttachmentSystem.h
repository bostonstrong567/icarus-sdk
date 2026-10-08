// /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x1C0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentAttachmentSystem.h

UCLASS(MinimalAPI)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem, public IMovieScenePreAnimatedStateSystemInterface
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::TOverlappingEntityTracker_BoundObject<UE::MovieScene::FPreAnimAttachment> AttachmentTracker;  // 0x0048, private
    TArray<TTuple<USceneComponent *,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32> > PendingAttachmentsToRestore;  // 0x01B0, private
};
