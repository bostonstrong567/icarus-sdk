// /Script/Icarus.RigUnit_SphereTraceCustom
// size 0x48, declared in Icarus/Source/Icarus/Animation/RigUnit_CustomCollision.h

USTRUCT()
struct FRigUnit_SphereTraceCustom : public FRigUnit
{
public:
    UPROPERTY() FVector Start;  // 0x0008, size 0xC
    UPROPERTY() FVector End;  // 0x0014, size 0xC
    UPROPERTY() TEnumAsByte<ECollisionChannel> Channel;  // 0x0020, size 0x1
    UPROPERTY() float Radius;  // 0x0024, size 0x4
    UPROPERTY() bool bHit;  // 0x0028, size 0x1
    UPROPERTY() FVector HitLocation;  // 0x002C, size 0xC
    UPROPERTY() FVector HitNormal;  // 0x0038, size 0xC
};
