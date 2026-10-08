// /Script/Icarus.TamedCreatureModifier
// size 0x40, declared in Icarus/Source/Icarus/AI/Mounts/TamedCreatureModifier.h

USTRUCT()
struct FTamedCreatureModifier : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum StatRequirement;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum GrantedStat;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETamedCreatureType Effects;  // 0x0038, size 0x1
};
