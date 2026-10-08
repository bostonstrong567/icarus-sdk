// /Script/Engine.PluginRedirect
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FPluginRedirect
{
    UPROPERTY() FString OldPluginName;  // 0x0000, size 0x10
    UPROPERTY() FString NewPluginName;  // 0x0010, size 0x10
};
