// /Script/Engine.PhysicalAnimationData
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h

USTRUCT()
struct FPhysicalAnimationData
{
public:
    UPROPERTY() FName BodyName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsLocalSimulation : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OrientationStrength;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AngularVelocityStrength;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PositionStrength;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VelocityStrength;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxLinearForce;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAngularForce;  // 0x0020, size 0x4
};
