// /Script/Engine.RadialDamageEvent
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRadialDamageEvent : public FDamageEvent
{
    UPROPERTY() FRadialDamageParams Params;  // 0x0010, size 0x14
    UPROPERTY() FVector Origin;  // 0x0024, size 0xC
    UPROPERTY() TArray<FHitResult> ComponentHits;  // 0x0030, size 0x10
};
