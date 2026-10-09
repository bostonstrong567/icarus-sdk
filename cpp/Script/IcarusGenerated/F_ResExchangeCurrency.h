// /Script/IcarusGenerated.ResExchangeCurrency
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResExchangeCurrency.h

USTRUCT()
struct FResExchangeCurrency
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> CurrencyDeltas;  // 0x0008, size 0x10
};
