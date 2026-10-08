// /Script/Engine.PlatformInterfaceData
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceBase.h

USTRUCT()
struct FPlatformInterfaceData
{
    UPROPERTY() FName DataName;  // 0x0000, size 0x8
    UPROPERTY() TEnumAsByte<EPlatformInterfaceDataType> Type;  // 0x0008, size 0x1
    UPROPERTY() int32 IntValue;  // 0x000C, size 0x4
    UPROPERTY() float FloatValue;  // 0x0010, size 0x4
    UPROPERTY() FString StringValue;  // 0x0018, size 0x10
    UPROPERTY() UObject* ObjectValue;  // 0x0028, size 0x8
};
