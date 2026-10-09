// /Script/OnlineSubsystem.NamedInterfaces
// Derives from: UObject
// size 0x60, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/NamedInterfaces.h

UCLASS(Transient, Config=Engine)
class UNamedInterfaces : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FNamedInterface> NamedInterfaces;  // 0x0028, size 0x10
    UPROPERTY(Config) TArray<FNamedInterfaceDef> NamedInterfaceDefs;  // 0x0038, size 0x10
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> CleanupDelegates;  // 0x0048, not reflected
};
