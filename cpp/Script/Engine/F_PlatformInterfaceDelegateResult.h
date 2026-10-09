// /Script/Engine.PlatformInterfaceDelegateResult
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceBase.h

USTRUCT()
struct FPlatformInterfaceDelegateResult
{
public:
    UPROPERTY() bool bSuccessful;  // 0x0000, size 0x1
    UPROPERTY() FPlatformInterfaceData Data;  // 0x0008, size 0x30
};
