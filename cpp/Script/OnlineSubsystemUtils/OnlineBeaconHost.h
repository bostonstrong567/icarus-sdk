// /Script/OnlineSubsystemUtils.OnlineBeaconHost
// Derives from: AOnlineBeacon > AActor > UObject
// size 0x308, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconHost.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
    UPROPERTY(Config) int32 ListenPort;  // 0x0250, size 0x4
    UPROPERTY() TArray<AOnlineBeaconClient*> ClientActors;  // 0x0258, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<FString,TDelegate<AOnlineBeaconClient * __cdecl(UNetConnection *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient * __cdecl(UNetConnection *),FDefaultDelegateUserPolicy>,0> > OnBeaconSpawnedMapping;  // 0x0268, private
    TMap<FString,TDelegate<void __cdecl(AOnlineBeaconClient *,UNetConnection *),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void __cdecl(AOnlineBeaconClient *,UNetConnection *),FDefaultDelegateUserPolicy>,0> > OnBeaconConnectedMapping;  // 0x02B8, private

    // Virtual functions that start here:
    //   GetClientActor, GetListenPort, InitHost, RegisterHost, RemoveClientActor, UnregisterHost
};
