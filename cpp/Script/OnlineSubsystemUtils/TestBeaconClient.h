// /Script/OnlineSubsystemUtils.TestBeaconClient
// Derives from: AOnlineBeaconClient > AOnlineBeacon > AActor > UObject
// size 0x2B0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/TestBeaconClient.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientPing();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerPong();

    // Virtual functions that start here:
    //   ClientPing, ClientPing_Implementation, ServerPong, ServerPong_Implementation, ServerPong_Validate
};
