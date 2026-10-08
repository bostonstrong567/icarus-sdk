// /Script/Engine.ChannelDefinition
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetDriver.h

USTRUCT()
struct FChannelDefinition
{
    UPROPERTY() FName ChannelName;  // 0x0000, size 0x8
    UPROPERTY() FName ClassName;  // 0x0008, size 0x8
    UPROPERTY() TSubclassOf<UObject> ChannelClass;  // 0x0010, size 0x8
    UPROPERTY() int32 StaticChannelIndex;  // 0x0018, size 0x4
    UPROPERTY() bool bTickOnCreate;  // 0x001C, size 0x1
    UPROPERTY() bool bServerOpen;  // 0x001D, size 0x1
    UPROPERTY() bool bClientOpen;  // 0x001E, size 0x1
    UPROPERTY() bool bInitialServer;  // 0x001F, size 0x1
    UPROPERTY() bool bInitialClient;  // 0x0020, size 0x1
};
