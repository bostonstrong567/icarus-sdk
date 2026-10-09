// /Script/Engine.CollisionImpactData
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FCollisionImpactData
{
public:
    UPROPERTY() TArray<FRigidBodyContactInfo> ContactInfos;  // 0x0000, size 0x10
    UPROPERTY() FVector TotalNormalImpulse;  // 0x0010, size 0xC
    UPROPERTY() FVector TotalFrictionImpulse;  // 0x001C, size 0xC
    UPROPERTY() bool bIsVelocityDeltaUnderThreshold;  // 0x0028, size 0x1
};
