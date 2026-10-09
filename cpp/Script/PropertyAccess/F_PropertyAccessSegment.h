// /Script/PropertyAccess.PropertyAccessSegment
// size 0x40, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessSegment
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() UStruct* Struct;  // 0x0008, size 0x8
    UPROPERTY() FFieldPath Property;  // 0x0010, size 0x20
    UPROPERTY() UFunction* Function;  // 0x0030, size 0x8
    UPROPERTY() int32 ArrayIndex;  // 0x0038, size 0x4
    UPROPERTY() uint16 Flags;  // 0x003C, size 0x2
};
