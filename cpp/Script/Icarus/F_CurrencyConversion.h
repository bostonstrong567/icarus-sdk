// /Script/Icarus.CurrencyConversion
// size 0x50, declared in Icarus/Source/Icarus/Systems/MetaCurrency/CurrencyConversion.h

USTRUCT()
struct FCurrencyConversion : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle StartingCurrency;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingAmount;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle ConvertedCurrency;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ConvertedAmount;  // 0x004C, size 0x4
};
