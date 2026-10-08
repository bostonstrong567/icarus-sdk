// /Game/BP/Tools/CheatFunctionRow.CheatFunctionRow
// size 0x30

USTRUCT()
struct CheatFunctionRow
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECheatContext> Context;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText LongName;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UCF_Base_C> Widget;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enabled;  // 0x0028, size 0x1
};
