// /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x1C0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentAttachmentSystem.h

UCLASS(MinimalAPI)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem, public IMovieScenePreAnimatedStateSystemInterface
{
private:
    UE::MovieScene::TOverlappingEntityTracker_BoundObject<UE::MovieScene::FPreAnimAttachment> AttachmentTracker;  // 0x0048, not reflected
    TArray<TTuple<USceneComponent *,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32> > PendingAttachmentsToRestore;  // 0x01B0, not reflected
};
