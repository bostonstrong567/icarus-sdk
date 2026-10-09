// /Script/Icarus.DamageNumberDetail
// size 0x30, declared in Icarus/Source/Icarus/Systems/IcarusGameStateSurvival.h

USTRUCT()
struct FDamageNumberDetail
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EIcarusDamageType DamageType;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageValue;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCriticalHitAreasEnum CriticalHit;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TWeakObjectPtr<AController> Instigator;  // 0x0028, size 0x8
};
