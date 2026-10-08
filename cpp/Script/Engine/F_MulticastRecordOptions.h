// /Script/Engine.MulticastRecordOptions
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/DemoNetDriver.h

USTRUCT()
struct FMulticastRecordOptions
{
    UPROPERTY() FString FuncPathName;  // 0x0000, size 0x10
    UPROPERTY() bool bServerSkip;  // 0x0010, size 0x1
    UPROPERTY() bool bClientSkip;  // 0x0011, size 0x1
};
