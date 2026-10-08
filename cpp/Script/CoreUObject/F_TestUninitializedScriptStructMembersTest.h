// /Script/CoreUObject.TestUninitializedScriptStructMembersTest
// size 0x18, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

USTRUCT()
struct FTestUninitializedScriptStructMembersTest
{
    UPROPERTY(Transient) UObject* UninitializedObjectReference;  // 0x0000, size 0x8
    UPROPERTY(Transient) UObject* InitializedObjectReference;  // 0x0008, size 0x8
    UPROPERTY(Transient) float UnusedValue;  // 0x0010, size 0x4
};
