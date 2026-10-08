// /Script/Engine.RigidBodyContactInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRigidBodyContactInfo
{
    UPROPERTY() FVector ContactPosition;  // 0x0000, size 0xC
    UPROPERTY() FVector ContactNormal;  // 0x000C, size 0xC
    UPROPERTY() float ContactPenetration;  // 0x0018, size 0x4
    UPROPERTY() UPhysicalMaterial* PhysMaterial;  // 0x0020, size 0x8
};
