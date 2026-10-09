// /Script/Icarus.CustomGameStatDropDownValue
// size 0x1C, declared in Icarus/Source/Icarus/Stats/CustomGameStat.h

USTRUCT()
struct FCustomGameStatDropDownValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle Stat;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Value;  // 0x0018, size 0x4
};
