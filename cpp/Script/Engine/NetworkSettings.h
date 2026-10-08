// /Script/Engine.NetworkSettings
// Derives from: UDeveloperSettings > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetworkSettings.h

UCLASS(Config=Engine)
class UNetworkSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) uint8 bVerifyPeer : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bEnableMultiplayerWorldOriginRebasing : 1;  // 0x0038, mask 0x02
    UPROPERTY(EditAnywhere, Config) int32 MaxRepArraySize;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxRepArrayMemory;  // 0x0040, size 0x4
    UPROPERTY(Config) TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles;  // 0x0048, size 0x10
};
