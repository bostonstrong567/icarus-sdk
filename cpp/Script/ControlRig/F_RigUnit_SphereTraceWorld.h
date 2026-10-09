// /Script/ControlRig.RigUnit_SphereTraceWorld
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Collision/RigUnit_WorldCollision.h

USTRUCT()
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
    UPROPERTY() FVector Start;  // 0x0008, size 0xC
    UPROPERTY() FVector End;  // 0x0014, size 0xC
    UPROPERTY() TArray<TEnumAsByte<ECollisionChannel>> ResponseChannels;  // 0x0020, size 0x10
    UPROPERTY() TEnumAsByte<ECollisionChannel> Channel;  // 0x0030, size 0x1
    UPROPERTY() float Radius;  // 0x0034, size 0x4
    UPROPERTY() bool bHit;  // 0x0038, size 0x1
    UPROPERTY() FVector HitLocation;  // 0x003C, size 0xC
    UPROPERTY() FVector HitNormal;  // 0x0048, size 0xC
};
