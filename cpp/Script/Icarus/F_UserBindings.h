// /Script/Icarus.UserBindings
// size 0x40, declared in Icarus/Source/Icarus/Settings/UserBindings.h

USTRUCT()
struct FUserBindings
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<FInputActionKeyMapping> UserActionMappings;  // 0x0000, size 0x10
    UPROPERTY() TArray<FInputAxisKeyMapping> UserAxisMappings;  // 0x0010, size 0x10
    FKeybindContextsRowHandle BindContext;  // 0x0020, not reflected
    bool bIsController;  // 0x0038, not reflected
};
