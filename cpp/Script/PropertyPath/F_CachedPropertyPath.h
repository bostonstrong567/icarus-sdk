// /Script/PropertyPath.CachedPropertyPath
// size 0x28, declared in Engine/Source/Runtime/PropertyPath/Public/PropertyPathHelpers.h

USTRUCT()
struct FCachedPropertyPath
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FPropertyPathSegment> Segments;  // 0x0000, size 0x10
    void * CachedAddress;  // 0x0010, not reflected
    UPROPERTY() UFunction* CachedFunction;  // 0x0018, size 0x8
    bool bCanSafelyUsedCachedAddress;  // 0x0020, not reflected
};
