// /Script/Icarus.ReplicatedHitResult
// size 0x2C, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacter.h

USTRUCT()
struct FReplicatedHitResult
{
public:
    UPROPERTY() bool bBlockingHit;  // 0x0000, size 0x1
    UPROPERTY() TWeakObjectPtr<AActor> HitActor;  // 0x0004, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UPrimitiveComponent> HitComponent;  // 0x000C, size 0x8
    UPROPERTY() FVector_NetQuantize10 Location;  // 0x0014, size 0xC
    UPROPERTY() FVector_NetQuantize10 Normal;  // 0x0020, size 0xC
};
