// /Script/Icarus.AfflictionChance
// size 0x40, declared in Icarus/Source/Icarus/DataStructs/Modifiers/AfflictionChance.h

USTRUCT()
struct FAfflictionChance : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModifierStatesRowHandle> Afflictions;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum ChanceStat;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChanceInPercent;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationInSeconds;  // 0x003C, size 0x4
};
