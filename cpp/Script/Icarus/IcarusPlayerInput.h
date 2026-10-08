// /Script/Icarus.IcarusPlayerInput
// Derives from: UPlayerInput > UObject
// size 0x450, declared in Icarus/Source/Icarus/Public/IcarusPlayerInput.h

UCLASS(Transient, Config=Input)
class UIcarusPlayerInput : public UPlayerInput
{
public:
    UPROPERTY(Config) TMap<FKeybindContextsRowHandle, FPerInputUserBindings> SavedBindings;  // 0x03A8, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TMap<FKeybindContextsRowHandle,TSharedPtr<FPerInputUserBindings,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeybindContextsRowHandle,TSharedPtr<FPerInputUserBindings,0>,0> > RuntimeBindings;  // 0x03F8, protected
    bool bLock;  // 0x0448, protected
};
