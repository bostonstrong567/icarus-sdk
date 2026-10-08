// /Script/Icarus.BackingStatContainer
// size 0x20, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FBackingStatContainer
{

    // Not reflected:
    FStatContainer * StatContainer;  // 0x0000
    FDelegateHandle UpdatedDelegate;  // 0x0008
    FDelegateHandle DestroyedDelegate;  // 0x0010
    int32 UID;  // 0x0018
};
