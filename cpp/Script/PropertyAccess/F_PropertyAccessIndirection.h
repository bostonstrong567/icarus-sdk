// /Script/PropertyAccess.PropertyAccessIndirection
// size 0x40, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessIndirection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FFieldPath ArrayProperty;  // 0x0000, size 0x20
    UPROPERTY() UFunction* Function;  // 0x0020, size 0x8
    UPROPERTY() int32 ReturnBufferSize;  // 0x0028, size 0x4
    UPROPERTY() int32 ReturnBufferAlignment;  // 0x002C, size 0x4
    UPROPERTY() int32 ArrayIndex;  // 0x0030, size 0x4
    UPROPERTY() uint32 Offset;  // 0x0034, size 0x4
    UPROPERTY() EPropertyAccessObjectType ObjectType;  // 0x0038, size 0x1
    UPROPERTY() EPropertyAccessIndirectionType Type;  // 0x0039, size 0x1
};
