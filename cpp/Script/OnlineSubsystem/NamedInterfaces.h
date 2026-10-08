// /Script/OnlineSubsystem.NamedInterfaces
// Derives from: UObject
// size 0x60, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/NamedInterfaces.h

UCLASS(Transient, Config=Engine)
class UNamedInterfaces : public UObject
{
public:
    UPROPERTY() TArray<FNamedInterface> NamedInterfaces;  // 0x0028, size 0x10
    UPROPERTY(Config) TArray<FNamedInterfaceDef> NamedInterfaceDefs;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> CleanupDelegates;  // 0x0048, private
};
