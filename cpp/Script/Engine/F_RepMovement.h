// /Script/Engine.RepMovement
// size 0x34, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRepMovement
{
public:
    UPROPERTY(Transient) FVector LinearVelocity;  // 0x0000, size 0xC
    UPROPERTY(Transient) FVector AngularVelocity;  // 0x000C, size 0xC
    UPROPERTY(Transient) FVector Location;  // 0x0018, size 0xC
    UPROPERTY(Transient) FRotator Rotation;  // 0x0024, size 0xC
    UPROPERTY(Transient) uint8 bSimulatedPhysicSleep : 1;  // 0x0030, mask 0x01
    UPROPERTY(Transient) uint8 bRepPhysics : 1;  // 0x0030, mask 0x02
    UPROPERTY(EditAnywhere) EVectorQuantization LocationQuantizationLevel;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) EVectorQuantization VelocityQuantizationLevel;  // 0x0032, size 0x1
    UPROPERTY(EditAnywhere) ERotatorQuantization RotationQuantizationLevel;  // 0x0033, size 0x1
};
