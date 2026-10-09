// /Script/Icarus.CustomGameStat
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CustomGameStatsLibrary.generated.h

USTRUCT()
struct FCustomGameStat : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHidden;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatCategory Category;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatChangeability StatChangeability;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECustomGameStatType StatType;  // 0x004B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultValue;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle Stat;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinIntValue;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxIntValue;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomGameStatDropDownOption> DropDownOptions;  // 0x0070, size 0x10
};
