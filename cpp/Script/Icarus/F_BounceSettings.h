// /Script/Icarus.BounceSettings
// size 0x18, declared in Icarus/Source/Icarus/Traits/Behaviours/BallisticData.h

USTRUCT()
struct FBounceSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBounceAngleAffectsFriction;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bounciness;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Friction;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BounceVelocityStopSimulatingThreshold;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFrictionFraction;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenBounces;  // 0x0014, size 0x4
};
