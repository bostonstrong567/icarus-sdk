// /Script/Engine.HitResult
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FHitResult
{
public:
    UPROPERTY() int32 FaceIndex;  // 0x0000, size 0x4
    UPROPERTY() float Time;  // 0x0004, size 0x4
    UPROPERTY() float Distance;  // 0x0008, size 0x4
    UPROPERTY() FVector_NetQuantize Location;  // 0x000C, size 0xC
    UPROPERTY() FVector_NetQuantize ImpactPoint;  // 0x0018, size 0xC
    UPROPERTY() FVector_NetQuantizeNormal Normal;  // 0x0024, size 0xC
    UPROPERTY() FVector_NetQuantizeNormal ImpactNormal;  // 0x0030, size 0xC
    UPROPERTY() FVector_NetQuantize TraceStart;  // 0x003C, size 0xC
    UPROPERTY() FVector_NetQuantize TraceEnd;  // 0x0048, size 0xC
    UPROPERTY() float PenetrationDepth;  // 0x0054, size 0x4
    UPROPERTY() int32 Item;  // 0x0058, size 0x4
    UPROPERTY() uint8 ElementIndex;  // 0x005C, size 0x1
    UPROPERTY() uint8 bBlockingHit : 1;  // 0x005D, mask 0x01
    UPROPERTY() uint8 bStartPenetrating : 1;  // 0x005D, mask 0x02
    UPROPERTY() TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;  // 0x0060, size 0x8
    UPROPERTY() TWeakObjectPtr<AActor> Actor;  // 0x0068, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UPrimitiveComponent> Component;  // 0x0070, size 0x8
    UPROPERTY() FName BoneName;  // 0x0078, size 0x8
    UPROPERTY() FName MyBoneName;  // 0x0080, size 0x8
};
