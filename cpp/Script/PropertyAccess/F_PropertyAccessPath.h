// /Script/PropertyAccess.PropertyAccessPath
// size 0xC, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessPath
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() int32 PathSegmentStartIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 PathSegmentCount;  // 0x0004, size 0x4
    UPROPERTY() uint8 bHasEvents : 1;  // 0x0008, mask 0x01
};
