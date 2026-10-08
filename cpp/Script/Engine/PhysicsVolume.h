// /Script/Engine.PhysicsVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x268, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PhysicsVolume.h

UCLASS(Config=Engine)
class APhysicsVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerminalVelocity;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Priority;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FluidFriction;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bWaterVolume : 1;  // 0x0264, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPhysicsOnContact : 1;  // 0x0264, mask 0x02

    // Virtual functions that start here:
    //   ActorEnteredVolume, ActorLeavingVolume, GetGravityZ, IsOverlapInVolume
};
