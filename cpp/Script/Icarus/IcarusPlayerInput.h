// /Script/Icarus.IcarusPlayerInput
// Derives from: UPlayerInput > UObject
// size 0x450, declared in Icarus/Source/Icarus/Public/IcarusPlayerInput.h

UCLASS(Transient, Config=Input)
class UIcarusPlayerInput : public UPlayerInput
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Config) TMap<FKeybindContextsRowHandle, FPerInputUserBindings> SavedBindings;  // 0x03A8, size 0x50
    TMap<FKeybindContextsRowHandle,TSharedPtr<FPerInputUserBindings,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeybindContextsRowHandle,TSharedPtr<FPerInputUserBindings,0>,0> > RuntimeBindings;  // 0x03F8, not reflected
    bool bLock;  // 0x0448, not reflected
};
