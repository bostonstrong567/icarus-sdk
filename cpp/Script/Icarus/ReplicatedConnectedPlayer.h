// /Script/Icarus.ReplicatedConnectedPlayer
// Derives from: UObject
// size 0x78, declared in Icarus/Source/Icarus/Subsystems/World/ConnectedPlayer.h

UCLASS()
class UReplicatedConnectedPlayer : public UObject
{
public:
    UPROPERTY(EditAnywhere, Replicated) FConnectedPlayer State;  // 0x0028, size 0x38
    UPROPERTY(EditAnywhere) bool bLocallyInitialised;  // 0x0060, size 0x1
    FTimerHandle LongConnectionTimer;  // 0x0068, not reflected
    float LongConnectionTime;  // 0x0070, not reflected

    UFUNCTION() void OnLongConnectionTimeOut();
};
