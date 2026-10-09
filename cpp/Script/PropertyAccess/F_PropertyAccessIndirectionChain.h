// /Script/PropertyAccess.PropertyAccessIndirectionChain
// size 0x30, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessIndirectionChain
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FFieldPath Property;  // 0x0000, size 0x20
    UPROPERTY() int32 IndirectionStartIndex;  // 0x0020, size 0x4
    UPROPERTY() int32 IndirectionEndIndex;  // 0x0024, size 0x4
    UPROPERTY() int32 EventId;  // 0x0028, size 0x4
};
