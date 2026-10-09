// /Script/Engine.PointDamageEvent
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FPointDamageEvent : public FDamageEvent
{
public:
    UPROPERTY() float Damage;  // 0x0010, size 0x4
    UPROPERTY() FVector_NetQuantizeNormal ShotDirection;  // 0x0014, size 0xC
    UPROPERTY() FHitResult HitInfo;  // 0x0020, size 0x88
};
