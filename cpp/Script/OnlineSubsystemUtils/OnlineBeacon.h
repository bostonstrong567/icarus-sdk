// /Script/OnlineSubsystemUtils.OnlineBeacon
// Derives from: AActor > UObject
// size 0x250, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeacon.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AOnlineBeacon : public AActor
{
public:
    UPROPERTY(Config) float BeaconConnectionInitialTimeout;  // 0x0228, size 0x4
    UPROPERTY(Config) float BeaconConnectionTimeout;  // 0x022C, size 0x4
    UPROPERTY() UNetDriver* NetDriver;  // 0x0230, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    EBeaconState::Type BeaconState;  // 0x0238, protected
    FDelegateHandle HandleNetworkFailureDelegateHandle;  // 0x0240, protected
    FName NetDriverDefinitionName;  // 0x0248, protected

    // Virtual functions that start here:
    //   DestroyBeacon, HandleNetworkFailure, InitBase, OnFailure
};
