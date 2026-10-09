// /Script/PropertyPath.PropertyPathSegment
// size 0x28, declared in Engine/Source/Runtime/PropertyPath/Public/PropertyPathHelpers.h

USTRUCT()
struct FPropertyPathSegment
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() int32 ArrayIndex;  // 0x0008, size 0x4
private:
    UPROPERTY(Transient) UStruct* Struct;  // 0x0010, size 0x8
    FFieldVariant Field;  // 0x0018, not reflected
};
