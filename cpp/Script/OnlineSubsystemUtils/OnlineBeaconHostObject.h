// /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
// Derives from: AActor > UObject
// size 0x248, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconHostObject.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeaconHostObject : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) FString BeaconTypeName;  // 0x0220, size 0x10
    UPROPERTY() TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;  // 0x0230, size 0x8
    UPROPERTY() TArray<AOnlineBeaconClient*> ClientActors;  // 0x0238, size 0x10

    // Virtual functions that start here:
    //   DisconnectClient, NotifyClientDisconnected, OnClientConnected, SpawnBeaconActor, Unregister
};
