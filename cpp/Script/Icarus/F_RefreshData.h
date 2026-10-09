// /Script/Icarus.RefreshData
// size 0x50, declared in Icarus/Source/Icarus/IcarusGameUserSettingsPreGen.h

USTRUCT()
struct FRefreshData
{
public:
    UPROPERTY() UObject* Object;  // 0x0000, size 0x8
    TFunction<void __cdecl(void)> Callback;  // 0x0010, not reflected
};
