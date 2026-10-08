// /Script/Icarus.ScopedViewportBlocker
// Derives from: UObject
// size 0x40, declared in Icarus/Source/Icarus/Systems/ScopedViewportBlocker.h

UCLASS()
class UScopedViewportBlocker : public UObject
{
public:
    UPROPERTY(EditAnywhere) bool bViewportBlockerIncremented;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FName ViewportBlockerContext;  // 0x002C, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UIcarusGameInstance,FWeakObjectPtr> RegisteredIcarusGameInstance;  // 0x0034, private
};
