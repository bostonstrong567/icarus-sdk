// /Script/Engine.GameNetworkManager
// Derives from: AInfo > AActor > UObject
// size 0x2D0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameNetworkManager.h

UCLASS(NotPlaceable, Config=Game)
class AGameNetworkManager : public AInfo
{
public:
    UPROPERTY(Config) float BadPacketLossThreshold;  // 0x0220, size 0x4
    UPROPERTY(Config) float SeverePacketLossThreshold;  // 0x0224, size 0x4
    UPROPERTY(Config) int32 BadPingThreshold;  // 0x0228, size 0x4
    UPROPERTY(Config) int32 SeverePingThreshold;  // 0x022C, size 0x4
    UPROPERTY() int32 AdjustedNetSpeed;  // 0x0230, size 0x4
    UPROPERTY() float LastNetSpeedUpdateTime;  // 0x0234, size 0x4
    UPROPERTY(Config) int32 TotalNetBandwidth;  // 0x0238, size 0x4
    UPROPERTY(Config) int32 MinDynamicBandwidth;  // 0x023C, size 0x4
    UPROPERTY(Config) int32 MaxDynamicBandwidth;  // 0x0240, size 0x4
    UPROPERTY(Config) uint8 bIsStandbyCheckingEnabled : 1;  // 0x0244, mask 0x01
    UPROPERTY() uint8 bHasStandbyCheatTriggered : 1;  // 0x0244, mask 0x02
    UPROPERTY(Config) float StandbyRxCheatTime;  // 0x0248, size 0x4
    UPROPERTY(Config) float StandbyTxCheatTime;  // 0x024C, size 0x4
    UPROPERTY(Config) float PercentMissingForRxStandby;  // 0x0250, size 0x4
    UPROPERTY(Config) float PercentMissingForTxStandby;  // 0x0254, size 0x4
    UPROPERTY(Config) float PercentForBadPing;  // 0x0258, size 0x4
    UPROPERTY(Config) float JoinInProgressStandbyWaitTime;  // 0x025C, size 0x4
    UPROPERTY(Config) float MoveRepSize;  // 0x0260, size 0x4
    UPROPERTY(Config) float MAXPOSITIONERRORSQUARED;  // 0x0264, size 0x4
    UPROPERTY(Config) float MAXNEARZEROVELOCITYSQUARED;  // 0x0268, size 0x4
    UPROPERTY(Config) float CLIENTADJUSTUPDATECOST;  // 0x026C, size 0x4
    UPROPERTY(Config) float MAXCLIENTUPDATEINTERVAL;  // 0x0270, size 0x4
    UPROPERTY(Config) float MaxClientForcedUpdateDuration;  // 0x0274, size 0x4
    UPROPERTY(Config) float ServerForcedUpdateHitchThreshold;  // 0x0278, size 0x4
    UPROPERTY(Config) float ServerForcedUpdateHitchCooldown;  // 0x027C, size 0x4
    UPROPERTY(Config) float MaxMoveDeltaTime;  // 0x0280, size 0x4
    UPROPERTY(Config) float MaxClientSmoothingDeltaTime;  // 0x0284, size 0x4
    UPROPERTY(Config) float ClientNetSendMoveDeltaTime;  // 0x0288, size 0x4
    UPROPERTY(Config) float ClientNetSendMoveDeltaTimeThrottled;  // 0x028C, size 0x4
    UPROPERTY(Config) float ClientNetSendMoveDeltaTimeStationary;  // 0x0290, size 0x4
    UPROPERTY(Config) int32 ClientNetSendMoveThrottleAtNetSpeed;  // 0x0294, size 0x4
    UPROPERTY(Config) int32 ClientNetSendMoveThrottleOverPlayerCount;  // 0x0298, size 0x4
    UPROPERTY(Config) bool ClientAuthorativePosition;  // 0x029C, size 0x1
    UPROPERTY(Config) float ClientErrorUpdateRateLimit;  // 0x02A0, size 0x4
    UPROPERTY(Config) float ClientNetCamUpdateDeltaTime;  // 0x02A4, size 0x4
    UPROPERTY(Config) float ClientNetCamUpdatePositionLimit;  // 0x02A8, size 0x4
    UPROPERTY(Config) bool bMovementTimeDiscrepancyDetection;  // 0x02AC, size 0x1
    UPROPERTY(Config) bool bMovementTimeDiscrepancyResolution;  // 0x02AD, size 0x1
    UPROPERTY(Config) float MovementTimeDiscrepancyMaxTimeMargin;  // 0x02B0, size 0x4
    UPROPERTY(Config) float MovementTimeDiscrepancyMinTimeMargin;  // 0x02B4, size 0x4
    UPROPERTY(Config) float MovementTimeDiscrepancyResolutionRate;  // 0x02B8, size 0x4
    UPROPERTY(Config) float MovementTimeDiscrepancyDriftAllowance;  // 0x02BC, size 0x4
    UPROPERTY(Config) bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;  // 0x02C0, size 0x1
    UPROPERTY(Config) bool bUseDistanceBasedRelevancy;  // 0x02C1, size 0x1
protected:
    FTimerHandle TimerHandle_UpdateNetSpeedsTimer;  // 0x02C8, not reflected

    // Virtual functions that start here:
    //   CalculatedNetSpeed, EnableStandbyCheatDetection, ExceedsAllowablePositionError
    //   IsInLowBandwidthMode, NetworkVelocityNearZero, StandbyCheatDetected, UpdateNetSpeeds
    //   UpdateNetSpeedsTimer, WithinUpdateDelayBounds
};
