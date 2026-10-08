// /Script/Icarus.DamageTypeInfoModifier
// size 0x28, declared in Icarus/Source/Icarus/Systems/Damage/DamageTypeInfo.h

USTRUCT()
struct FDamageTypeInfoModifier
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Tag;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0018, size 0x10
};
