// /Script/OnlineSubsystemUtils.OnlineBeaconClient
// Derives from: AOnlineBeacon > AActor > UObject
// size 0x2B0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconClient.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeaconClient : public AOnlineBeacon
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() AOnlineBeaconHostObject* BeaconOwner;  // 0x0250, size 0x8
    UPROPERTY() UNetConnection* BeaconConnection;  // 0x0258, size 0x8
    UPROPERTY() EBeaconConnectionState ConnectionState;  // 0x0260, size 0x1
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> HostConnectionFailure;  // 0x0268, not reflected
    FTimerHandle TimerHandle_OnFailure;  // 0x0278, not reflected
private:
    FEncryptionData EncryptionData;  // 0x0280, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientOnConnected();

    // Virtual functions that start here:
    //   ClientOnConnected_Implementation, OnConnected, SetNetConnection
};
