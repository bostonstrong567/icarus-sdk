// /Script/Icarus.RefreshData
// size 0x50, declared in Icarus/Source/Icarus/IcarusGameUserSettingsPreGen.h

USTRUCT()
struct FRefreshData
{
    UPROPERTY() UObject* Object;  // 0x0000, size 0x8

    // Not reflected:
    TFunction<void __cdecl(void)> Callback;  // 0x0010
};
