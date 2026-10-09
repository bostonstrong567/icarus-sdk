// /Script/Icarus.BackingStatContainer
// size 0x20, declared in Icarus/Source/Icarus/Stats/IcarusStatContainer.h

USTRUCT()
struct FBackingStatContainer
{
public:
    FStatContainer * StatContainer;  // 0x0000, not reflected
    FDelegateHandle UpdatedDelegate;  // 0x0008, not reflected
    FDelegateHandle DestroyedDelegate;  // 0x0010, not reflected
    int32 UID;  // 0x0018, not reflected
};
