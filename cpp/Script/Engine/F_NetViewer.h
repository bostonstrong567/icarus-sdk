// /Script/Engine.NetViewer
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

USTRUCT()
struct FNetViewer
{
public:
    UPROPERTY() UNetConnection* Connection;  // 0x0000, size 0x8
    UPROPERTY() AActor* InViewer;  // 0x0008, size 0x8
    UPROPERTY() AActor* ViewTarget;  // 0x0010, size 0x8
    UPROPERTY() FVector ViewLocation;  // 0x0018, size 0xC
    UPROPERTY() FVector ViewDir;  // 0x0024, size 0xC
};
