// /Script/Icarus.SeedModification
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/SeedModificationsLibrary.generated.h

USTRUCT()
struct FSeedModification : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum StatRequirement;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EffectivenessIncrease;  // 0x0058, size 0x4
};
