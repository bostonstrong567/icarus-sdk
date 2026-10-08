// /Script/Icarus.UserBindings
// size 0x40, declared in Icarus/Source/Icarus/Settings/UserBindings.h

USTRUCT()
struct FUserBindings
{
    UPROPERTY() TArray<FInputActionKeyMapping> UserActionMappings;  // 0x0000, size 0x10
    UPROPERTY() TArray<FInputAxisKeyMapping> UserAxisMappings;  // 0x0010, size 0x10

    // Not reflected:
    FKeybindContextsRowHandle BindContext;  // 0x0020
    bool bIsController;  // 0x0038
};
