// /Script/PropertyAccess.PropertyAccessCopyBatch
// size 0x10, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessCopyBatch
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FPropertyAccessCopy> Copies;  // 0x0000, size 0x10
};
