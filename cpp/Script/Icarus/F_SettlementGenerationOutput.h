// /Script/Icarus.SettlementGenerationOutput
// size 0x30, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementGenerationOutput
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Resource;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Quantity;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chance;  // 0x002C, size 0x4
};
