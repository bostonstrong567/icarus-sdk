// /Script/UMG.UMGSequenceTickManager
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/UMG/Public/Animation/UMGSequenceTickManager.h

UCLASS()
class UUMGSequenceTickManager : public UObject
{
public:
    UPROPERTY(Transient) TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets;  // 0x0028, size 0x50
    UPROPERTY(Transient) UMovieSceneEntitySystemLinker* Linker;  // 0x0078, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FMovieSceneEntitySystemRunner Runner;  // 0x0080, private
    bool bIsTicking;  // 0x00F0, private
    FDelegateHandle SlateApplicationPreTickHandle;  // 0x00F8, private
    FDelegateHandle SlateApplicationPostTickHandle;  // 0x0100, private
    FMovieSceneLatentActionManager LatentActionManager;  // 0x0108, private
};
