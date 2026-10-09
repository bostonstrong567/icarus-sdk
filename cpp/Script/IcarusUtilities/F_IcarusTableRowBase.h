// /Script/IcarusUtilities.IcarusTableRowBase
// size 0x18, declared in Icarus/Source/IcarusUtilities/Public/DataStructs/IcarusTableRowBase.h

USTRUCT()
struct FIcarusTableRowBase : public FTableRowBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TArray<UObject*> CachedHardReferences;  // 0x0008, size 0x10
};
