// /Script/Icarus.CachedItemStatContainer
// size 0x110, declared in Icarus/Source/Icarus/DataStructs/ItemData.h

USTRUCT()
struct FCachedItemStatContainer
{
    UPROPERTY(Transient) FStatContainer StatContainer;  // 0x0000, size 0x108
    UPROPERTY(Transient) bool bHasBuilt;  // 0x0108, size 0x1
    UPROPERTY(Transient) bool bIsHeldItem;  // 0x0109, size 0x1
    UPROPERTY(Transient) bool bIncludesAlterations;  // 0x010A, size 0x1
};
