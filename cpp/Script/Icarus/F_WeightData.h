// /Script/Icarus.WeightData
// size 0x50, declared in Icarus/Source/Icarus/Traits/Behaviours/WeightData.h

USTRUCT()
struct FWeightData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UWeightComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddInventoryWeight;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InventoryWeightScale;  // 0x0048, size 0x4
};
