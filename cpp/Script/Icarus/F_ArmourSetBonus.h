// /Script/Icarus.ArmourSetBonus
// size 0x88, declared in Icarus/Source/Icarus/Traits/Behaviours/ArmourData.h

USTRUCT()
struct FArmourSetBonus : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredGear;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> StatsGranted;  // 0x0038, size 0x50
};
