// /Game/BP/Objects/World/Delivery/FCurrencyToSend.FCurrencyToSend
// size 0x1C

USTRUCT()
struct FCurrencyToSend
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle Currency;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0018, size 0x4
};
