// /Script/UMG.UMGSequenceTickManager
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/UMG/Public/Animation/UMGSequenceTickManager.h

UCLASS()
class UUMGSequenceTickManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets;  // 0x0028, size 0x50
    UPROPERTY(Transient) UMovieSceneEntitySystemLinker* Linker;  // 0x0078, size 0x8
    FMovieSceneEntitySystemRunner Runner;  // 0x0080, not reflected
    bool bIsTicking;  // 0x00F0, not reflected
    FDelegateHandle SlateApplicationPreTickHandle;  // 0x00F8, not reflected
    FDelegateHandle SlateApplicationPostTickHandle;  // 0x0100, not reflected
    FMovieSceneLatentActionManager LatentActionManager;  // 0x0108, not reflected
};
