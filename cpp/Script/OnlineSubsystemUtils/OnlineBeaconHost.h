// /Script/OnlineSubsystemUtils.OnlineBeaconHost
// Derives from: AOnlineBeacon > AActor > UObject
// size 0x308, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconHost.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeaconHost : public AOnlineBeacon
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) int32 ListenPort;  // 0x0250, size 0x4
private:
    UPROPERTY() TArray<AOnlineBeaconClient*> ClientActors;  // 0x0258, size 0x10
    TMap<FString,TDelegate<AOnlineBeaconClient * __cdecl(UNetConnection *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient * __cdecl(UNetConnection *),FDefaultDelegateUserPolicy>,0> > OnBeaconSpawnedMapping;  // 0x0268, not reflected
    TMap<FString,TDelegate<void __cdecl(AOnlineBeaconClient *,UNetConnection *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void __cdecl(AOnlineBeaconClient *,UNetConnection *),FDefaultDelegateUserPolicy>,0> > OnBeaconConnectedMapping;  // 0x02B8, not reflected

    // Virtual functions that start here:
    //   GetClientActor, GetListenPort, InitHost, RegisterHost, RemoveClientActor, UnregisterHost
};
