// /Script/Engine.DamageEvent
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FDamageEvent
{
    UPROPERTY() TSubclassOf<UDamageType> DamageTypeClass;  // 0x0008, size 0x8
};
