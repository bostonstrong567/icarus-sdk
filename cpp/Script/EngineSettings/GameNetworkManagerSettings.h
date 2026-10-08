// /Script/EngineSettings.GameNetworkManagerSettings
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/EngineSettings/Classes/GameNetworkManagerSettings.h

UCLASS(Config=Game)
class UGameNetworkManagerSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MinDynamicBandwidth;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxDynamicBandwidth;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 TotalNetBandwidth;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 BadPingThreshold;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bIsStandbyCheckingEnabled : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) float StandbyRxCheatTime;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) float StandbyTxCheatTime;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) float PercentMissingForRxStandby;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) float PercentMissingForTxStandby;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, Config) float PercentForBadPing;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Config) float JoinInProgressStandbyWaitTime;  // 0x0050, size 0x4
};
