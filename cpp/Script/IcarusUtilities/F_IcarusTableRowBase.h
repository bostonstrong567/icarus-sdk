// /Script/IcarusUtilities.IcarusTableRowBase
// size 0x18, declared in Icarus/Source/IcarusUtilities/Public/DataStructs/IcarusTableRowBase.h

USTRUCT()
struct FIcarusTableRowBase : public FTableRowBase
{
    UPROPERTY(Transient) TArray<UObject*> CachedHardReferences;  // 0x0008, size 0x10
};
