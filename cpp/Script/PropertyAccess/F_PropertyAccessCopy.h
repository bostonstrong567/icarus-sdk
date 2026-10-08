// /Script/PropertyAccess.PropertyAccessCopy
// size 0x10, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessCopy
{
    UPROPERTY() int32 AccessIndex;  // 0x0000, size 0x4
    UPROPERTY() int32 DestAccessStartIndex;  // 0x0004, size 0x4
    UPROPERTY() int32 DestAccessEndIndex;  // 0x0008, size 0x4
    UPROPERTY() EPropertyAccessCopyType Type;  // 0x000C, size 0x1
};
