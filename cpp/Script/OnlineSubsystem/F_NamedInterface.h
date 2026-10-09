// /Script/OnlineSubsystem.NamedInterface
// size 0x10, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/NamedInterfaces.h

USTRUCT()
struct FNamedInterface
{
public:
    UPROPERTY() FName InterfaceName;  // 0x0000, size 0x8
    UPROPERTY() UObject* InterfaceObject;  // 0x0008, size 0x8
};
