// /Script/Icarus.ScopedViewportBlocker
// Derives from: UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/ScopedViewportBlocker.h

UCLASS()
class UScopedViewportBlocker : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) bool bViewportBlockerIncremented;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FName ViewportBlockerContext;  // 0x002C, size 0x8
    TWeakObjectPtr<UIcarusGameInstance,FWeakObjectPtr> RegisteredIcarusGameInstance;  // 0x0034, not reflected
};
