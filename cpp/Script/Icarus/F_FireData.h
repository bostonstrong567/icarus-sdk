// /Script/Icarus.FireData
// size 0x38, declared in Icarus/Source/Icarus/Traits/BallisticComponent.h

USTRUCT()
struct FFireData
{
public:
    UPROPERTY() FVector Impulse;  // 0x0000, size 0xC
    UPROPERTY() FVector InstigatorVelocity;  // 0x000C, size 0xC
    UPROPERTY() FProjectileFireParams AdvancedParameters;  // 0x0018, size 0x10
    UPROPERTY() AActor* Instigator;  // 0x0028, size 0x8
    UPROPERTY() bool bIsDataValid;  // 0x0030, size 0x1
    UPROPERTY() int32 TimeFired;  // 0x0034, size 0x4
};
