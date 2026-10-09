// /Script/Engine.RigidBodyErrorCorrection
// size 0x34, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRigidBodyErrorCorrection
{
public:
    UPROPERTY(EditAnywhere) float PingExtrapolation;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float PingLimit;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ErrorPerLinearDifference;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float ErrorPerAngularDifference;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float MaxRestoredStateError;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MaxLinearHardSnapDistance;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float PositionLerp;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float AngleLerp;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) float LinearVelocityCoefficient;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float AngularVelocityCoefficient;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float ErrorAccumulationSeconds;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float ErrorAccumulationDistanceSq;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float ErrorAccumulationSimilarity;  // 0x0030, size 0x4
};
