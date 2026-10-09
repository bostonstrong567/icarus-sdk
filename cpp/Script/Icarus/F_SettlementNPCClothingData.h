// /Script/Icarus.SettlementNPCClothingData
// size 0x78, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCClothingData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Head;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Torso;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Arms;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Legs;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Feet;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementNPCClothingItem> Misc;  // 0x0068, size 0x10
};
