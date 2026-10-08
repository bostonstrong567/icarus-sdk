// /Script/OnlineSubsystemUtils.OnlineBeaconClient
// Derives from: AOnlineBeacon > AActor > UObject
// size 0x2B0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconClient.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
    UPROPERTY() AOnlineBeaconHostObject* BeaconOwner;  // 0x0250, size 0x8
    UPROPERTY() UNetConnection* BeaconConnection;  // 0x0258, size 0x8
    UPROPERTY() EBeaconConnectionState ConnectionState;  // 0x0260, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> HostConnectionFailure;  // 0x0268, protected
    FTimerHandle TimerHandle_OnFailure;  // 0x0278, protected
    FEncryptionData EncryptionData;  // 0x0280, private

    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientOnConnected();

    // Virtual functions that start here:
    //   ClientOnConnected_Implementation, OnConnected, SetNetConnection
};
