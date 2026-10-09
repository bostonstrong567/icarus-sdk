// /Script/Icarus.CustomGameStatDropDownOption
// size 0x28, declared in Icarus/Source/Icarus/Stats/CustomGameStat.h

USTRUCT()
struct FCustomGameStatDropDownOption
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OptionName;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomGameStatDropDownValue> StatValues;  // 0x0018, size 0x10
};
