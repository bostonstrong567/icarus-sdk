// /Script/PropertyPath.CachedPropertyPath
// size 0x28, declared in Engine/Source/Runtime/PropertyPath/Public/PropertyPathHelpers.h

USTRUCT()
struct FCachedPropertyPath
{
    UPROPERTY() TArray<FPropertyPathSegment> Segments;  // 0x0000, size 0x10
    UPROPERTY() UFunction* CachedFunction;  // 0x0018, size 0x8

    // Not reflected:
    void * CachedAddress;  // 0x0010
    bool bCanSafelyUsedCachedAddress;  // 0x0020
};
